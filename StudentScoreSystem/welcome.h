#ifndef WELCOME_H
#define WELCOME_H

#include <QWidget>
#include "score.h"
#include "statistics.h"
#include "trend.h"

namespace Ui { class Welcome; }

class Welcome : public QWidget {
    Q_OBJECT

public:
    explicit Welcome(QWidget *parent = nullptr);
    ~Welcome();

private slots:
    void on_btnscore_clicked();
    void on_btnstatistics_clicked();
    void on_btntrend_clicked();
    void goBackHome(); // 回到主菜单槽函数

signals:
    void logoutRequested();

private:
    Ui::Welcome *ui;
    // 子页面对象指针
    Score *scorePage;
    Statistics *statPage;
    Trend *trendPage;

    int homeIndex; // 记录主页面的索引
};
#endif
