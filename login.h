#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class Login;
}
QT_END_NAMESPACE

class Login : public QMainWindow
{
    Q_OBJECT

public:
    Login(QWidget *parent = nullptr);
    ~Login();

private slots:
    void on_btnlogin_clicked();
    void on_btncancel_clicked();
    void handleLogoutFromWelcome();  // 添加这个槽函数

signals:
    void loginSuccess();
    void loginFailed();

private:
    Ui::Login *ui;
};

#endif // LOGIN_H
