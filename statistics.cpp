#include "statistics.h"
#include "ui_statistics.h"
#include <QDebug>
#include <cmath>

Statistics::Statistics(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Statistics)
{
    ui->setupUi(this);
    initUI();
}

Statistics::~Statistics()
{
    delete ui;
}

void Statistics::initUI()
{
    // 1. 设置默认选中单科
    ui->radioSingle->setChecked(true);
    ui->stackedWidget->setCurrentIndex(0); // PageSingle 索引通常为 0

    // 2. 动态加载班级列表到 cbnClass
    ui->cbnClass->clear();
    ui->cbnClass->addItem("全部班级");
    QSqlQuery query("SELECT DISTINCT class_name FROM students");
    while(query.next()) {
        ui->cbnClass->addItem(query.value(0).toString());
    }

    // 3. 表格基础设置
    ui->tableStats->horizontalHeader()->setStretchLastSection(true);
    ui->tableStats->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableStats->setSelectionBehavior(QAbstractItemView::SelectRows);

    // 4. 将输入框设为只读
    ui->editAvg->setReadOnly(true);
    ui->editMax->setReadOnly(true);
    ui->editMin->setReadOnly(true);
    ui->editCount->setReadOnly(true);
    ui->editPassRate->setReadOnly(true);
    ui->editExcellentRate->setReadOnly(true);
    ui->editStdDev->setReadOnly(true);
}

void Statistics::clearResults()
{
    ui->editAvg->clear();
    ui->editMax->clear();
    ui->editMin->clear();
    ui->editCount->clear();
    ui->editPassRate->clear();
    ui->editExcellentRate->clear();
    ui->editStdDev->clear();
    ui->tableStats->setRowCount(0);
}

// 切换逻辑：单科
void Statistics::on_radioSingle_toggled(bool checked)
{
    if (checked) {
        ui->cbnSourse->setEnabled(true);
        ui->stackedWidget->setCurrentIndex(0); // 切换到 PageSingle
    }
}

// 切换逻辑：全科
void Statistics::on_radioAll_toggled(bool checked)
{
    if (checked) {
        ui->cbnSourse->setEnabled(false);
        ui->stackedWidget->setCurrentIndex(1); // 切换到 PageAll
    }
}

void Statistics::on_pushButton_clicked()
{
    clearResults();
    if (ui->radioSingle->isChecked()) {
        doSingleStatistics();
    } else {
        doAllStatistics();
    }
}

// =================== 逻辑：单科统计 ===================
void Statistics::doSingleStatistics()
{
    QString courseName = ui->cbnSourse->currentText();
    QString className = ui->cbnClass->currentText();

    // 构建 SQL
    QString sql =
        "SELECT "
        "AVG(s.score), MAX(s.score), MIN(s.score), COUNT(s.score), "
        "SUM(CASE WHEN s.score >= 60 THEN 1 ELSE 0 END), "
        "SUM(CASE WHEN s.score >= 90 THEN 1 ELSE 0 END), "
        "AVG(s.score * s.score) - (AVG(s.score) * AVG(s.score)) "
        "FROM scores s "
        "JOIN students st ON s.student_id = st.student_id "
        "JOIN courses c ON s.course_id = c.course_id "
        "WHERE c.course_name = '" + courseName + "' ";

    if (className != "全部班级") {
        sql += "AND st.class_name = '" + className + "' ";
    }

    QSqlQuery query(sql);
    if (query.next() && query.value(3).toInt() > 0) {
        double avg = query.value(0).toDouble();
        int count = query.value(3).toInt();

        ui->editAvg->setText(QString::number(avg, 'f', 2));
        ui->editMax->setText(query.value(1).toString());
        ui->editMin->setText(query.value(2).toString());
        ui->editCount->setText(QString::number(count));
        ui->editPassRate->setText(QString::number(query.value(4).toDouble()/count*100, 'f', 1) + "%");
        ui->editExcellentRate->setText(QString::number(query.value(5).toDouble()/count*100, 'f', 1) + "%");

        double variance = query.value(6).toDouble();
        ui->editStdDev->setText(QString::number(std::sqrt(std::abs(variance)), 'f', 2));
    } else {
        QMessageBox::information(this, "结果", "所选条件下无成绩记录");
    }
}

// =================== 逻辑：全科统计 ===================
void Statistics::doAllStatistics()
{
    QString className = ui->cbnClass->currentText();

    QString sql =
        "SELECT c.course_name, AVG(s.score), MAX(s.score), MIN(s.score), "
        "SUM(CASE WHEN s.score >= 60 THEN 1 ELSE 0 END) * 100.0 / COUNT(s.score) "
        "FROM scores s "
        "JOIN students st ON s.student_id = st.student_id "
        "JOIN courses c ON s.course_id = c.course_id ";

    if (className != "全部班级") {
        sql += "WHERE st.class_name = '" + className + "' ";
    }
    sql += "GROUP BY c.course_name";

    QSqlQuery query(sql);
    int row = 0;
    while (query.next()) {
        ui->tableStats->insertRow(row);
        ui->tableStats->setItem(row, 0, new QTableWidgetItem(query.value(0).toString()));
        ui->tableStats->setItem(row, 1, new QTableWidgetItem(QString::number(query.value(1).toDouble(), 'f', 1)));
        ui->tableStats->setItem(row, 2, new QTableWidgetItem(query.value(2).toString()));
        ui->tableStats->setItem(row, 3, new QTableWidgetItem(query.value(3).toString()));
        ui->tableStats->setItem(row, 4, new QTableWidgetItem(QString::number(query.value(4).toDouble(), 'f', 1) + "%"));
        row++;
    }
}

// =================== 功能：导出 CSV ===================
void Statistics::on_btnExport_clicked()
{
    QString fileName = QFileDialog::getSaveFileName(this, "导出报表", "成绩统计.csv", "CSV文件 (*.csv)");
    if (fileName.isEmpty()) return;

    QFile file(fileName);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) return;

    QTextStream out(&file);
    out.setGenerateByteOrderMark(true); // 解决 Excel 乱码

    if (ui->radioSingle->isChecked()) {
        out << "统计项,数值\n";
        out << "班级," << ui->cbnClass->currentText() << "\n";
        out << "课程," << ui->cbnSourse->currentText() << "\n";
        out << "平均分," << ui->editAvg->text() << "\n";
        out << "最高分," << ui->editMax->text() << "\n";
        out << "及格率," << ui->editPassRate->text() << "\n";
        out << "总人数," << ui->editCount->text() << "\n";
    } else {
        out << "课程,平均分,最高分,最低分,及格率\n";
        for (int i = 0; i < ui->tableStats->rowCount(); ++i) {
            for (int j = 0; j < ui->tableStats->columnCount(); ++j) {
                out << ui->tableStats->item(i, j)->text() << (j == ui->tableStats->columnCount() - 1 ? "" : ",");
            }
            out << "\n";
        }
    }
    file.close();
    QMessageBox::information(this, "完成", "统计报表已导出成功！");
}

void Statistics::on_btnback_clicked()
{
    emit backRequested();
}
