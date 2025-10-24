#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QLabel>
#include <QStack>
#include <QKeyEvent>
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE
class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QString operand;
    QString opcode;
    QStack<QString> operands;
    QStack<QString> opcodes;
    QString calculation(bool *ok=NULL);

protected:
    void keyPressEvent(QKeyEvent *event) override;
    void keyReleaseEvent(QKeyEvent *event) override;
private slots:
    void btnNumClicked();
    void btnBinaryOperatorClicked();
    void btnUnaryOperatorClicked();

    void on_btnPeriod_clicked();
    void on_btnDel_clicked();
    void on_btnClearAll_clicked();
    void on_btnEqual_clicked();
    // 新增CE功能槽函数
    void on_btnCE_clicked();
    // 新增正负号切换功能槽函数
    void on_btnSign_clicked();
private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H


