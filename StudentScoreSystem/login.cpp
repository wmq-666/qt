#include "login.h"
#include "ui_login.h"
#include "idatabase.h"
#include "welcome.h"
#include <QMessageBox>
#include <QDebug>
#include <QLineEdit>  // 添加这行

// ========== 添加缺失的方法 ==========

// 构造函数
Login::Login(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Login)
{
    ui->setupUi(this);
    setWindowTitle("学生成绩管理系统 - 登录");

    // 设置密码框的显示模式
    if (ui->password) {
        ui->password->setEchoMode(QLineEdit::Password);
    }
}

// 析构函数
Login::~Login()
{
    delete ui;
}

// 取消按钮的槽函数
void Login::on_btncancel_clicked()
{
    this->close();
}

// 处理从Welcome退出的槽函数
void Login::handleLogoutFromWelcome()
{
    qDebug() << "处理从Welcome窗口退出";
    this->show();

    // 清空登录信息
    if (ui->username) {
        ui->username->clear();
    }
    if (ui->password) {
        ui->password->clear();
    }
    if (ui->username) {
        ui->username->setFocus();
    }
}

// ========== 添加结束 ==========

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
    bool loginSuccessful = true;  // 测试用

    if (loginSuccessful) {
        QMessageBox::information(this, "登录成功", "登录成功！");

        // 创建并显示Welcome窗口
        Welcome *welcomeWindow = new Welcome();
        welcomeWindow->show();

        // 连接Welcome的退出信号
        connect(welcomeWindow, &Welcome::logoutRequested, [this, welcomeWindow]() {
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
        emit loginFailed();
    }
}
