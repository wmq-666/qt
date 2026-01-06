#include "trend.h"
#include "ui_trend.h"
#include <QVBoxLayout>
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlError>

// 只在 .cpp 里写这一行，不要写在 .h 里
using namespace QtCharts;

Trend::Trend(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Trend)
{
    ui->setupUi(this);
    m_chart = nullptr;
    m_chartView = nullptr;
    initChart();
}

Trend::~Trend() {
    delete ui;
}

void Trend::initChart() {
    m_chart = new QChart(); // 这里可以使用简称了
    m_chart->setTitle("成绩趋势分析图");

    m_chartView = new QChartView(m_chart);
    m_chartView->setRenderHint(QPainter::Antialiasing);

    if (!ui->chartContainer->layout()) {
        QVBoxLayout *layout = new QVBoxLayout(ui->chartContainer);
        layout->setContentsMargins(0, 0, 0, 0);
        layout->addWidget(m_chartView);
    }
}

void Trend::on_btnGenerate_clicked()
{
    QString sid = ui->editStudentId->text().trimmed();
    QString courseName = ui->comboBox->currentText();

    if (sid.isEmpty()) {
        QMessageBox::warning(this, "提示", "请输入学号后再生成图表");
        return;
    }

    // 1. 获取课程 ID
    QSqlQuery query;
    query.prepare("SELECT course_id FROM courses WHERE course_name = ?");
    query.addBindValue(courseName);
    if (!query.exec() || !query.next()) return;
    int cid = query.value(0).toInt();

    // 2. 查询成绩
    query.prepare("SELECT exam_date, score FROM scores "
                  "WHERE student_id = ? AND course_id = ? "
                  "ORDER BY exam_date ASC");
    query.addBindValue(sid);
    query.addBindValue(cid);

    if (!query.exec()) {
        QMessageBox::critical(this, "错误", "数据库查询失败: " + query.lastError().text());
        return;
    }

    // 3. 准备数据线
    QLineSeries *series = new QLineSeries();
    series->setName(courseName);

    int count = 0;
    while (query.next()) {
        double score = query.value(1).toDouble();
        series->append(count, score);
        count++;
    }

    if (count == 0) {
        QMessageBox::information(this, "提示", "未找到该学生的成绩记录");
        delete series;
        return;
    }

    // 4. 更新图表展示
    m_chart->removeAllSeries();
    m_chart->addSeries(series);
    m_chart->createDefaultAxes();

    // 设置坐标轴范围
    if (!m_chart->axes().isEmpty()) {
        m_chart->axes(Qt::Vertical).first()->setRange(0, 100);
        m_chart->axes(Qt::Horizontal).first()->setTitleText("考试场次索引");
    }
}

void Trend::on_btnback_clicked()
{
    emit backRequested();
}
