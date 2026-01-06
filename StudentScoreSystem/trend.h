#ifndef TREND_H
#define TREND_H

#include <QWidget>
// 必须这样带路径包含，确保编译器能定位到
#include <QtCharts/QChart>
#include <QtCharts/QChartView>
#include <QtCharts/QLineSeries>

// 删掉所有 using namespace QtCharts;
// 删掉所有 QT_CHARTS_USE_NAMESPACE;

namespace Ui {
class Trend;
}

// 在 Qt 6 中，显式声明命名空间内的类
namespace QtCharts {
class QChart;
class QChartView;
}

class Trend : public QWidget
{
    Q_OBJECT

public:
    explicit Trend(QWidget *parent = nullptr);
    ~Trend();

signals:
    void backRequested();

private slots:
    void on_btnback_clicked();
    void on_btnGenerate_clicked();

private:
    Ui::Trend *ui;

    // 使用全称前缀，绝对不会报 "not a namespace-name"
    QtCharts::QChart *m_chart;
    QtCharts::QChartView *m_chartView;

    void initChart();
};

#endif // TREND_H
