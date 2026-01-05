// master.h
#ifndef MASTER_H
#define MASTER_H

#include <QMainWindow>

namespace Ui {
class Form;  // 前向声明 Form 类（不是 Master）
}

class Master : public QMainWindow
{
    Q_OBJECT

public:
    explicit Master(QWidget *parent = nullptr);
    ~Master();

private slots:
    void on_btnscore_clicked();
    void on_btnstatistics_clicked();
    void on_btntrend_clicked();

    void on_btnlogout_clicked();


private:
    Ui::Form *ui;  // 改为 Ui::Form*
};

#endif // MASTER_H
