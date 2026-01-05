#ifndef TREND_H
#define TREND_H

#include <QWidget>

namespace Ui { class Trend; }

class Trend : public QWidget {
    Q_OBJECT
public:
    explicit Trend(QWidget *parent = nullptr);
    ~Trend();
signals:
    void backRequested(); // 定义返回信号
private:
    Ui::Trend *ui;
};
#endif
