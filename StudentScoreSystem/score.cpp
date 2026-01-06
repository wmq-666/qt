#include "score.h"
#include "ui_score.h"
#include <QSqlRelationalDelegate>
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include <QDate>
#include <QDebug>

Score::Score(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Score)
{
    ui->setupUi(this);

    // 初始化数据库模型
    initModel();
}

Score::~Score()
{
    delete ui;
}

void Score::initModel()
{
    // 1. 确保数据库已连接（如果因为某种原因断了，这里尝试重连）
    if (!QSqlDatabase::database().isOpen()) {
        qDebug() << "警告：Score 页面尝试重新连接数据库...";
        QSqlDatabase db = QSqlDatabase::database();
        db.open();
    }

    // 2. 创建关联模型
    m_model = new QSqlRelationalTableModel(this);
    m_model->setTable("scores");

    // 3. 设置外键关联 (假设 scores 表的第 2 列是 course_id)
    // 关联到 courses 表的 course_id 字段，但在界面显示 course_name
    m_model->setRelation(2, QSqlRelation("courses", "course_id", "course_name"));

    // 4. 设置编辑策略：手动提交（用户必须点保存按钮才会写入数据库）
    m_model->setEditStrategy(QSqlRelationalTableModel::OnManualSubmit);

    // 5. 设置表头中文名
    m_model->setHeaderData(1, Qt::Horizontal, "学号");
    m_model->setHeaderData(2, Qt::Horizontal, "课程名称");
    m_model->setHeaderData(3, Qt::Horizontal, "分数");
    m_model->setHeaderData(4, Qt::Horizontal, "考试日期");
    m_model->setHeaderData(5, Qt::Horizontal, "学期");

    // 6. 执行查询
    if (!m_model->select()) {
        qDebug() << "模型初始化查询失败: " << m_model->lastError().text();
    }

    // 7. 绑定到 TableView
    ui->tableView->setModel(m_model);

    // 8. 界面美化与功能配置
    ui->tableView->setItemDelegate(new QSqlRelationalDelegate(ui->tableView)); // 下拉框代理
    ui->tableView->setColumnHidden(0, true); // 隐藏 ID 主键列
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows); // 选中整行
    ui->tableView->setAlternatingRowColors(true); // 开启斑马线颜色
    ui->tableView->horizontalHeader()->setStretchLastSection(true); // 拉伸最后一列
}

// =================== 功能：查询成绩 ===================
void Score::on_btnserach_clicked()
{
    QString courseName = ui->comboBox->currentText();

    if (courseName == "全部课程") {
        m_model->setFilter("");
    } else {
        // 先通过 SQL 查出课程对应的 ID，防止多表联查时的列名冲突
        QSqlQuery query;
        query.prepare("SELECT course_id FROM courses WHERE course_name = ?");
        query.addBindValue(courseName);

        if (query.exec() && query.next()) {
            int cid = query.value(0).toInt();
            // 【核心修复】：明确使用 scores.course_id 过滤
            m_model->setFilter(QString("scores.course_id = %1").arg(cid));
        } else {
            qDebug() << "未找到该课程 ID";
        }
    }

    if (!m_model->select()) {
        QMessageBox::critical(this, "查询错误", m_model->lastError().text());
    }
}

// =================== 功能：批量录入 ===================
void Score::on_btnInsert_clicked()
{
    // 1. 先清空过滤器，确保新行可见
    ui->comboBox->setCurrentText("全部课程");
    m_model->setFilter("");
    m_model->select();

    int row = m_model->rowCount();
    if (m_model->insertRow(row)) {
        // 【改进点 1】：不要填提示文字，直接填入空字符串或有效 ID
        // 学号留空，让用户自己填
        m_model->setData(m_model->index(row, 1), "");

        // 【关键】：必须给课程列（外键）一个合法的初始 ID (比如 1)，
        // 否则关联模型可能因为找不到对应的课程名而导致整行渲染异常（叠加感的原因之一）
        m_model->setData(m_model->index(row, 2), 1);

        m_model->setData(m_model->index(row, 3), 0); // 分数默认 0
        m_model->setData(m_model->index(row, 4), QDate::currentDate().toString("yyyy-MM-dd"));
        m_model->setData(m_model->index(row, 5), "2026春");

        // 2. 视觉引导
        ui->tableView->scrollToBottom();

        // 获取新行学号列的索引
        QModelIndex editIndex = m_model->index(row, 1);

        // 选中新行
        ui->tableView->setCurrentIndex(editIndex);

        // 【改进点 2】：强制开启编辑模式
        // 这会让光标自动在学号格子里闪烁，且因为是空白，不会有文字叠加
        ui->tableView->edit(editIndex);
    }
}

// =================== 功能：保存成绩 ===================
void Score::on_btnSave_clicked()
{
    // 提交所有修改到数据库
    if (m_model->submitAll()) {
        QMessageBox::information(this, "成功", "成绩数据已保存！");
    } else {
        QString err = m_model->lastError().text();
        if (err.contains("FOREIGN KEY")) {
            QMessageBox::critical(this, "保存失败", "原因：输入的学号在学生表中不存在！");
        } else {
            QMessageBox::critical(this, "保存失败", "数据库错误：" + err);
        }
    }
}

// =================== 功能：清空/重置 ===================
void Score::on_btnClear_clicked()
{
    m_model->revertAll(); // 撤销未保存的改动
    m_model->setFilter("");
    m_model->select();
}

// =================== 功能：返回主界面 ===================
void Score::on_btnback_clicked()
{
    if (m_model->isDirty()) {
        auto res = QMessageBox::question(this, "警告", "有未保存的数据，确定要返回吗？",
                                         QMessageBox::Yes | QMessageBox::No);
        if (res == QMessageBox::No) return;
    }
    emit backRequested();
}
