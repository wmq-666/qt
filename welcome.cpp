#include "welcome.h"
#include "ui_welcome.h"  // 确保这个文件存在
#include <QMessageBox>
#include <QPushButton>
#include <QDebug>

Welcome::Welcome(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form)
{
    ui->setupUi(this);
    setWindowTitle("学生成绩管理系统 - 主界面");

    qDebug() << "Welcome窗口创建";

    // 检查按钮是否存在
    if (ui->btnlogout) {
        qDebug() << "找到退出按钮";
        // 直接连接按钮，不使用自动连接的槽函数名
        connect(ui->btnlogout, &QPushButton::clicked, this, &Welcome::handleLogout);
    } else {
        qDebug() << "警告：退出按钮不存在";
    }

    if (ui->btnscore) {
        connect(ui->btnscore, &QPushButton::clicked, this, &Welcome::handleScore);
    }

    if (ui->btnstatistics) {
        connect(ui->btnstatistics, &QPushButton::clicked, this, &Welcome::handleStatistics);
    }

    if (ui->btntrend) {
        connect(ui->btntrend, &QPushButton::clicked, this, &Welcome::handleTrend);
    }
}

Welcome::~Welcome()
{
    delete ui;
}

void Welcome::handleLogout()
{
    qDebug() << "处理退出登录";

    int result = QMessageBox::question(this, "退出登录",
                                       "确定要退出登录吗？",
                                       QMessageBox::Yes | QMessageBox::No,
                                       QMessageBox::No);

    if (result == QMessageBox::Yes) {
        qDebug() << "发射退出信号";
        emit logoutRequested();
    }
}

void Welcome::handleScore()
{
    QMessageBox::information(this, "功能提示", "成绩管理功能正在开发中...");
}

void Welcome::handleStatistics()
{
    QMessageBox::information(this, "功能提示", "成绩统计功能正在开发中...");
}

void Welcome::handleTrend()
{
    QMessageBox::information(this, "功能提示", "成绩趋势功能正在开发中...");
}
