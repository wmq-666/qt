#include "login.h"
#include "ui_login.h"
#include "idatabase.h"
#include "welcome.h"  // 确保包含welcome.h
#include <QMessageBox>
#include <QDebug>

Login::Login(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Login)
{
    ui->setupUi(this);
    setWindowTitle("学生成绩管理系统 - 登录");
    ui->password->setEchoMode(QLineEdit::Password);
}

Login::~Login()
{
    delete ui;
}

void Login::on_btnlogin_clicked()
{
    QString username = ui->username->text().trimmed();
    QString password = ui->password->text().trimmed();

    if (username.isEmpty() || password.isEmpty()) {
        QMessageBox::warning(this, "输入错误", "请输入用户名和密码！");
        return;
    }

    // 创建数据库对象
    IDatabase db;

    // 连接数据库
    if (!db.connect()) {
        QMessageBox::critical(this, "数据库错误","无法连接数据库！");
        return;
    }

    // 验证用户
    if (db.validateUser(username, password)) {
        QMessageBox::information(this, "登录成功", "登录成功！");

        // 创建并显示Welcome窗口
        Welcome *welcomeWindow = new Welcome();
        welcomeWindow->show();

        qDebug() << "Welcome窗口已显示";

        // 连接Welcome的退出信号
        // 使用Qt5的信号槽连接方式
        connect(welcomeWindow, &Welcome::logoutRequested, [this, welcomeWindow]() {
            qDebug() << "收到退出登录信号";
            this->show();
            welcomeWindow->deleteLater();

            // 清空登录信息
            ui->username->clear();
            ui->password->clear();
            ui->username->setFocus();
        });

        // 隐藏登录窗口
        this->hide();

        emit loginSuccess();
    } else {
        QMessageBox::warning(this, "登录失败", "用户名或密码错误！");
        ui->password->clear();
        ui->password->setFocus();
    }
}

void Login::on_btncancel_clicked()
{
    this->close();
}

// 添加处理从Welcome退出的槽函数
void Login::handleLogoutFromWelcome()
{
    qDebug() << "处理从Welcome窗口退出";
    this->show();
    // 清空登录信息
    ui->username->clear();
    ui->password->clear();
    ui->username->setFocus();
}
