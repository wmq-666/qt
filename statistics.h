#ifndef STATISTICS_H
#define STATISTICS_H

#include <QWidget>
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include <QFileDialog>
#include <QTextStream>

namespace Ui {
class Statistics;
}

class Statistics : public QWidget
{
    Q_OBJECT

public:
    explicit Statistics(QWidget *parent = nullptr);
    ~Statistics();

signals:
    void backRequested();

private slots:
    void on_btnback_clicked();
    void on_pushButton_clicked();      // “输出结果”按钮
    void on_btnExport_clicked();        // “导出报表”按钮
    void on_radioSingle_toggled(bool checked);
    void on_radioAll_toggled(bool checked);

private:
    Ui::Statistics *ui;
    void initUI();                      // 初始化界面样式和数据
    void clearResults();                // 清空统计结果
    void doSingleStatistics();          // 单科统计逻辑
    void doAllStatistics();             // 全科统计逻辑
};

#endif // STATISTICS_H
