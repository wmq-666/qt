#include "welcome.h"
#include "ui_welcome.h"
#include <QStackedWidget>

Welcome::Welcome(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Welcome)
{
    ui->setupUi(this);

    scorePage = new Score(this);
    statPage = new Statistics(this);
    trendPage = new Trend(this);


    ui->stackedWidget->addWidget(scorePage);
    ui->stackedWidget->addWidget(statPage);
    ui->stackedWidget->addWidget(trendPage);

    homeIndex = 0;
    ui->stackedWidget->setCurrentIndex(homeIndex);

    // 3. 连接子页面的返回信号到 goBackHome 槽
    connect(scorePage, &Score::backRequested, this, &Welcome::goBackHome);
    connect(statPage, &Statistics::backRequested, this, &Welcome::goBackHome);
    connect(trendPage, &Trend::backRequested, this, &Welcome::goBackHome);

    // 连接退出按钮
    connect(ui->btnlogout, &QPushButton::clicked, [this](){
        emit logoutRequested();
    });
}

Welcome::~Welcome() {
    delete ui;
}

// 点击“成绩管理”
void Welcome::on_btnscore_clicked() {
    ui->stackedWidget->setCurrentWidget(scorePage);
}

// 点击“成绩统计”
void Welcome::on_btnstatistics_clicked() {
    ui->stackedWidget->setCurrentWidget(statPage);
}

// 点击“成绩趋势”
void Welcome::on_btntrend_clicked() {
    ui->stackedWidget->setCurrentWidget(trendPage);
}

// 返回主页面的公共函数
void Welcome::goBackHome() {
    ui->stackedWidget->setCurrentIndex(homeIndex);
}
