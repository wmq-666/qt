#ifndef WELCOME_H
#define WELCOME_H

#include <QWidget>

// 向前声明 UI 类
namespace Ui {
class Form;
}

class Welcome : public QWidget
{
    Q_OBJECT  // 必须要有这个！

public:
    explicit Welcome(QWidget *parent = nullptr);
    ~Welcome();

public slots:  // 改为 public slots 或直接声明为 public
    void handleLogout();
    void handleScore();
    void handleStatistics();
    void handleTrend();

signals:
    void logoutRequested();

private:
    Ui::Form *ui;
};

#endif // WELCOME_H
