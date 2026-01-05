#include "login.h"
#include "ui_login.h"
#include "idatabase.h"
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
        QMessageBox::critical(this, "数据库错误","无法连接数据库！\n"
);
        return;
    }

    // 验证用户
    if (db.validateUser(username, password)) {
        QMessageBox::information(this, "登录成功", "登录成功！");
        emit loginSuccess();
        this->close();
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
