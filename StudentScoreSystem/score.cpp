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
    // 1. 数据库连接安全检查
    // 确保使用的是默认连接，如果未打开则尝试打开
    if (!QSqlDatabase::database().isOpen()) {
        qDebug() << "Score: 数据库未开启，正在尝试连接...";
        QSqlDatabase db = QSqlDatabase::database();
        if (!db.open()) {
            QMessageBox::critical(this, "数据库错误", "无法打开数据库连接，请检查路径！");
            return;
        }
    }

    // 2. 创建关联模型 (QSqlRelationalTableModel)
    m_model = new QSqlRelationalTableModel(this);
    m_model->setTable("scores");

    // 3. 设置外键关联 (极其重要)
    // 参数说明：scores表的第2列(course_id) 关联到 courses表的 course_id，界面显示其 course_name
    // 注意：请核对 Navicat 中 scores 表的 course_id 是否在第 3 列（索引为 2）
    m_model->setRelation(2, QSqlRelation("courses", "course_id", "course_name"));

    // 4. 设置编辑策略为手动提交
    // 用户修改后必须点击“保存”按钮才会写入数据库，增加安全性
    m_model->setEditStrategy(QSqlRelationalTableModel::OnManualSubmit);

    // 5. 设置中文表头
    m_model->setHeaderData(1, Qt::Horizontal, "学号");
    m_model->setHeaderData(2, Qt::Horizontal, "课程名称");
    m_model->setHeaderData(3, Qt::Horizontal, "分数");
    m_model->setHeaderData(4, Qt::Horizontal, "考试日期");
    m_model->setHeaderData(5, Qt::Horizontal, "学期");

    // 6. 首次加载数据
    if (!m_model->select()) {
        qDebug() << "查询数据失败：" << m_model->lastError().text();
    }

    // 7. 绑定模型到视图
    ui->tableView->setModel(m_model);

    // 8. 设置下拉框委托 (RelationalDelegate)
    // 这一行非常关键：它能让用户在“课程名称”列双击时直接弹出下拉列表
    ui->tableView->setItemDelegate(new QSqlRelationalDelegate(ui->tableView));

    // 9. 界面视觉优化与“字体重叠”彻底解决方案

    // A. 强制设置样式表：确保编辑器背景不透明，解决文字重叠/重影
    ui->tableView->setStyleSheet(
        "QTableView { background-color: white; gridline-color: #dcdcdc; }"
        "QTableView::item:selected { background-color: #0078d4; color: white; }"
        "QTableView QLineEdit { background-color: white; border: none; }" // 编辑框背景纯白
        "QTableView QComboBox { background-color: white; }"               // 下拉框背景纯白
        );

    // B. 隐藏自增 ID 列 (第 0 列)
    ui->tableView->setColumnHidden(0, true);

    // C. 设置选中模式：点击单元格即选中整行
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableView->setSelectionMode(QAbstractItemView::SingleSelection);

    // D. 开启斑马线颜色 (隔行变色)
    ui->tableView->setAlternatingRowColors(true);

    // E. 布局：最后一列自动拉伸，其余列根据内容自适应宽度
    ui->tableView->horizontalHeader()->setStretchLastSection(true);
    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);

    // F. 设置编辑触发方式：双击、按回车或直接打字即可修改
    ui->tableView->setEditTriggers(QAbstractItemView::DoubleClicked |
                                   QAbstractItemView::EditKeyPressed |
                                   QAbstractItemView::AnyKeyPressed);

    qDebug() << "Score 页面初始化完成。";
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
    // 先重置过滤器，确保能看到新行
    ui->comboBox->setCurrentText("全部课程");
    m_model->setFilter("");
    m_model->select();

    int row = m_model->rowCount();
    if (m_model->insertRow(row)) {
        // --- 核心修复：全部设为空白或纯数字默认值 ---
        m_model->setData(m_model->index(row, 1), ""); // 学号：空白

        // 课程 ID：必须设为一个已存在的数字（如 1），
        // 关联模型会自动将其转为课程名，不会有重影
        m_model->setData(m_model->index(row, 2), 1);

        m_model->setData(m_model->index(row, 3), 0);  // 分数：默认 0
        m_model->setData(m_model->index(row, 4), QDate::currentDate().toString("yyyy-MM-dd")); // 日期
        m_model->setData(m_model->index(row, 5), ""); // 学期：空白

        // 视图引导
        ui->tableView->scrollToBottom();
        ui->tableView->setCurrentIndex(m_model->index(row, 1));

        // 强制开启编辑模式，让光标直接在第一个格子里闪烁
        ui->tableView->edit(m_model->index(row, 1));
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
// =================== 功能：删除选中成绩 ===================
void Score::on_btnDelete_clicked()
{
    // 1. 获取选中的行索引
    // 我们获取当前焦点所在的行，或者选中的行
    int curRow = ui->tableView->currentIndex().row();

    // 2. 检查是否选中了有效行
    if (curRow < 0) {
        QMessageBox::warning(this, "提示", "请先在表格中点击选中要删除的行！");
        return;
    }

    // 3. 弹出确认对话框，防止误删
    auto res = QMessageBox::question(this, "确认删除",
                                     "确定要永久删除这条成绩记录吗？",
                                     QMessageBox::Yes | QMessageBox::No);

    if (res == QMessageBox::Yes) {
        // 4. 从模型中删除该行
        // 注意：此时数据只是在界面上消失，数据库里还没删
        m_model->removeRow(curRow);

        // 5. 立即提交到数据库
        if (m_model->submitAll()) {
            QMessageBox::information(this, "成功", "成绩记录已成功删除！");
        } else {
            QMessageBox::critical(this, "错误", "删除失败：" + m_model->lastError().text());
            // 如果失败，回滚模型状态
            m_model->revertAll();
        }
    }
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



