#include "trend.h"
#include "ui_trend.h"
#include <QMessageBox>

Trend::Trend(QWidget *parent) : QWidget(parent), ui(new Ui::Trend) {
    ui->setupUi(this);
    // 设置表格最后一列自动拉伸
    ui->tableTrend->horizontalHeader()->setStretchLastSection(true);
}

Trend::~Trend() { delete ui; }

void Trend::on_btnGenerate_clicked() {
    QString sid = ui->editStudentId->text().trimmed();
    QString course = ui->comboBox->currentText();

    if (sid.isEmpty()) {
        QMessageBox::warning(this, "提示", "请输入学号");
        return;
    }

    // 查询成绩（按日期升序）
    QSqlQuery query;
    query.prepare("SELECT s.exam_date, s.score FROM scores s "
                  "JOIN courses c ON s.course_id = c.course_id "
                  "WHERE s.student_id = ? AND c.course_name = ? "
                  "ORDER BY s.exam_date ASC");
    query.addBindValue(sid);
    query.addBindValue(course);

    ui->tableTrend->setRowCount(0);
    ui->txtAnalysis->clear();

    double lastScore = -1;
    double total = 0;
    int count = 0;

    if (query.exec()) {
        while (query.next()) {
            int row = ui->tableTrend->rowCount();
            ui->tableTrend->insertRow(row);

            QString date = query.value(0).toString();
            double score = query.value(1).toDouble();
            total += score;
            count++;

            ui->tableTrend->setItem(row, 0, new QTableWidgetItem(date));
            ui->tableTrend->setItem(row, 1, new QTableWidgetItem(QString::number(score)));

            // 计算趋势
            QTableWidgetItem *itemTrend = new QTableWidgetItem();
            if (lastScore < 0) {
                itemTrend->setText("起步成绩");
            } else {
                double diff = score - lastScore;
                if (diff > 0) {
                    itemTrend->setText("↑ 进步 " + QString::number(diff));
                    itemTrend->setForeground(Qt::red);
                } else if (diff < 0) {
                    itemTrend->setText("↓ 退步 " + QString::number(qAbs(diff)));
                    itemTrend->setForeground(Qt::darkGreen);
                } else {
                    itemTrend->setText("- 持平");
                }
            }
            ui->tableTrend->setItem(row, 2, itemTrend);
            lastScore = score;
        }
    }

    // 生成文字分析
    if (count > 0) {
        double avg = total / count;
        QString report = "【成绩趋势分析报告】\n\n";
        report += QString("分析科目：%1\n").arg(course);
        report += QString("考试次数：%1 次\n").arg(count);
        report += QString("平均分：%1\n").arg(avg, 0, 'f', 1);
        report += "--------------------------\n";

        if (count >= 2) {
            if (lastScore > avg) report += "结论：近期成绩呈上升趋势，表现优异！";
            else if (lastScore < avg) report += "结论：近期成绩低于平均水平，存在退步迹象，建议加强复习。";
            else report += "结论：成绩波动极小，表现非常稳定。";
        } else {
            report += "结论：目前数据量较少，建议多参加几次考试以获取更精准的趋势分析。";
        }
        ui->txtAnalysis->setPlainText(report);
    } else {
        QMessageBox::information(this, "结果", "未找到该学生的成绩数据。");
    }
}

void Trend::on_btnback_clicked() {
    emit backRequested();
}
