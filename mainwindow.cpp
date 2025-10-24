
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <math.h>
MainWindow::MainWindow(QWidget* parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // 数字按钮连接
    connect(ui->btnNum0, SIGNAL(clicked()), this, SLOT(btnNumClicked()));
    connect(ui->btnNum1, SIGNAL(clicked()), this, SLOT(btnNumClicked()));
    connect(ui->btnNum2, SIGNAL(clicked()), this, SLOT(btnNumClicked()));
    connect(ui->btnNum3, SIGNAL(clicked()), this, SLOT(btnNumClicked()));
    connect(ui->btnNum4, SIGNAL(clicked()), this, SLOT(btnNumClicked()));
    connect(ui->btnNum5, SIGNAL(clicked()), this, SLOT(btnNumClicked()));
    connect(ui->btnNum6, SIGNAL(clicked()), this, SLOT(btnNumClicked()));
    connect(ui->btnNum7, SIGNAL(clicked()), this, SLOT(btnNumClicked()));
    connect(ui->btnNum8, SIGNAL(clicked()), this, SLOT(btnNumClicked()));
    connect(ui->btnNum9, SIGNAL(clicked()), this, SLOT(btnNumClicked()));
    // 二元运算符连接
    connect(ui->btnPlus, SIGNAL(clicked()), this, SLOT(btnBinaryOperatorClicked()));
    connect(ui->btnMinus, SIGNAL(clicked()), this, SLOT(btnBinaryOperatorClicked()));
    connect(ui->btnMultiple, SIGNAL(clicked()), this, SLOT(btnBinaryOperatorClicked()));
    connect(ui->btnDivide, SIGNAL(clicked()), this, SLOT(btnBinaryOperatorClicked()));
    // 一元运算符连接
    connect(ui->btnPercentage, SIGNAL(clicked()), this, SLOT(btnUnaryOperatorClicked()));
    connect(ui->btnInverse, SIGNAL(clicked()), this, SLOT(btnUnaryOperatorClicked()));;
    connect(ui->btnSquare, SIGNAL(clicked()), this, SLOT(btnUnaryOperatorClicked()));
    connect(ui->btnSqrt, SIGNAL(clicked()), this, SLOT(btnUnaryOperatorClicked()));
    // 新增CE按钮连接
    connect(ui->btnClear, SIGNAL(clicked()), this, SLOT(on_btnCE_clicked()));
    // 新增正负号按钮连接
    connect(ui->btnSign, SIGNAL(clicked()), this, SLOT(on_btnSign_clicked()));
}
MainWindow::~MainWindow()
{
    delete ui;
}

QString MainWindow::calculation(bool* ok)
{
    if (operands.size() < 2 || opcodes.empty()) {
        if (ok != NULL) *ok = operands.size() == 1;
        return operands.empty() ? "0" : operands.top(); // 使用top()而非front()
    }

    // 处理最后输入的一对操作数和运算符（符合计算器逻辑）
    double operand2 = operands.top().toDouble();
    operands.pop();
    double operand1 = operands.top().toDouble();
    operands.pop();
    QString op = opcodes.top();
    opcodes.pop();

    double result = 0;
    bool calculationOk = true;

    if (op == "+") {
        result = operand1 + operand2;
    }
    else if (op == "-") {
        result = operand1 - operand2;
    }
    else if (op == "×") { // 确保乘法正确计算
        result = operand1 * operand2;
    }
    else if (op == "÷") {
        if (operand2 == 0) {
            if (ok != NULL) *ok = false;
            ui->statusbar->showMessage("Error: Division by zero");
            return "Error";
        }
        result = operand1 / operand2;
    }

    operands.push(QString::number(result));

    if (ok != NULL) *ok = calculationOk;
    return QString::number(result);
}
void MainWindow::btnNumClicked()
{
    QString dight = qobject_cast<QPushButton*>(sender())->text();
    // 处理前导零问题
    if (dight == "0" && operand == "0")
        dight = "";
    if (dight != "0" && operand == "0")
        operand = "";
    operand += dight;
    ui->display->setText(operand);
}
void MainWindow::on_btnPeriod_clicked()
{
    // 确保只添加一个小数点
    if (!operand.contains("."))
        operand += qobject_cast<QPushButton*>(sender())->text();
    ui->display->setText(operand);
}
void MainWindow::on_btnDel_clicked()
{
    // 处理删除后为空的情况，显示0
    operand = operand.left(operand.length() - 1);
    if (operand.isEmpty())
        operand = "0";
    ui->display->setText(operand);
}


void MainWindow::on_btnClearAll_clicked()
{
    // 清空所有状态（当前操作数、操作数栈、运算符栈）
    operand.clear();
    operands.clear();
    opcodes.clear();
    ui->display->setText("0");
    ui->statusbar->showMessage("All cleared");
}
void MainWindow::btnBinaryOperatorClicked()
{
    ui->statusbar->showMessage("last operand: " + operand);
    QString opcode = qobject_cast<QPushButton*>(sender())->text();

    // 处理空操作数情况（使用上一次结果）
    if (operand.isEmpty()) {
        if (operands.isEmpty()) {
            ui->statusbar->showMessage("No operand available");
            return;
        }
        operand = operands.top();
    }

    operands.push(operand);
    operand.clear();

    // 已有运算符时先计算并显示中途结果
    if (!opcodes.isEmpty()) {
        bool ok;
        QString result = calculation(&ok);
        if (!ok) {
            ui->display->setText("Error");
            return;
        }
        // 显示中途计算结果
        ui->display->setText(result);
    }

    opcodes.push(opcode);
}

void MainWindow::btnUnaryOperatorClicked()
{
    if (operand.isEmpty()) {
        // 如果当前没有操作数，尝试使用操作数栈顶元素
        if (!operands.isEmpty()) {
            // 先获取栈顶元素
            operand = operands.last();
            // 再移除栈顶元素
            operands.pop_back();
        }
        else {
            ui->statusbar->showMessage("No operand for unary operation");
            return;
        }
    }
    double result = operand.toDouble();
    QString op = qobject_cast<QPushButton*>(sender())->text();

    if (op == "%") {
        result /= 100.0;
    }
    else if (op == "1/x") {
        // 处理倒数运算中除数为0的情况
        if (result == 0) {
            ui->statusbar->showMessage("Error: Division by zero in inverse");
            ui->display->setText("Error");
            operand.clear();
            return;
        }
        result = 1 / result;
    }
    else if (op == "x^2") {
        result *= result;
    }
    else if (op == "√") {
        // 处理平方根运算中负数的情况
        if (result < 0) {
            ui->statusbar->showMessage("Error: Square root of negative number");
            ui->display->setText("Error");
            operand.clear();
            return;
        }
        result = sqrt(result);
    }
    // 更新操作数栈和显示
    operand = QString::number(result);
    operands.push_back(operand);
    ui->display->setText(operand);
    operand.clear();
}

void MainWindow::on_btnEqual_clicked()
{
    if (operand != "") {
        operands.push(operand);
        operand = "";
    }

    bool ok;
    QString result = calculation(&ok);
    if (ok) {
        ui->display->setText(result);
        // 保留结果作为下一次运算的操作数
        operands.clear();
        operands.push(result);
    }
    else {
        ui->display->setText("Error");
        operands.clear();
    }
    opcodes.clear();
}
// CE功能实现：清除当前输入的操作数，不影响栈状态
void MainWindow::on_btnCE_clicked()
{
    operand.clear();
    ui->display->setText("0");
    ui->statusbar->showMessage("Current input cleared (CE)");
}
// 正负号切换功能实现
void MainWindow::on_btnSign_clicked()
{
    // 情况1：当前有正在输入的操作数
    if (!operand.isEmpty()) {
        if (operand.startsWith('-')) {
            operand = operand.mid(1); // 移除负号
        } else {
            operand = "-" + operand;  // 添加负号
        }
        ui->display->setText(operand);
        ui->statusbar->showMessage("Sign toggled for current input");
        return;
    }

    // 情况2：当前没有输入的操作数，尝试处理显示的结果
    QString displayText = ui->display->text();
    if (displayText == "Error") {
        ui->statusbar->showMessage("Cannot toggle sign in error state");
        return;
    }

    // 检查显示内容是否为数字
    bool isNumber;
    displayText.toDouble(&isNumber);
    if (isNumber) {
        // 处理显示的数字
        if (displayText.startsWith('-')) {
            operand = displayText.mid(1);
        } else {
            operand = "-" + displayText;
        }
        // 更新显示和操作数栈
        ui->display->setText(operand);
        // 清除原有栈顶元素，替换为新的带符号值
        if (!operands.isEmpty()) {
            operands.pop();
        }
        operands.push(operand);
        ui->statusbar->showMessage("Sign toggled for result");
    } else {
        ui->statusbar->showMessage("No valid number to toggle sign");
    }
}
// 键盘事件处理
void MainWindow::keyPressEvent(QKeyEvent* event)
{
    switch (event->key()) {
    case Qt::Key_0: ui->btnNum0->click(); break;
    case Qt::Key_1: ui->btnNum1->click(); break;
    case Qt::Key_2: ui->btnNum2->click(); break;
    case Qt::Key_3: ui->btnNum3->click(); break;
    case Qt::Key_4: ui->btnNum4->click(); break;
    case Qt::Key_5: ui->btnNum5->click(); break;
    case Qt::Key_6: ui->btnNum6->click(); break;
    case Qt::Key_7: ui->btnNum7->click(); break;
    case Qt::Key_8: ui->btnNum8->click(); break;
    case Qt::Key_9: ui->btnNum9->click(); break;
    case Qt::Key_Plus: ui->btnPlus->click(); break;
    case Qt::Key_Minus: ui->btnMinus->click(); break;
    case Qt::Key_Asterisk: ui->btnMultiple->click(); break;
    case Qt::Key_Slash: ui->btnDivide->click(); break;
    case Qt::Key_Period: ui->btnPeriod->click(); break;
    case Qt::Key_Enter:
    case Qt::Key_Return: ui->btnEqual->click(); break;
    case Qt::Key_Backspace: ui->btnDel->click(); break;
    case Qt::Key_Escape: ui->btnClearAll->click(); break;
    default: break;
    }
}


void MainWindow::keyReleaseEvent(QKeyEvent* event)
{
    Q_UNUSED(event);
}
