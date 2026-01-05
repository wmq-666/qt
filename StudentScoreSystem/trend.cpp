#include "trend.h"
#include "ui_trend.h"

Trend::Trend(QWidget *parent) : QWidget(parent), ui(new Ui::Trend) {
    ui->setupUi(this);
    // 连接返回按钮
    connect(ui->btnback, &QPushButton::clicked, this, &Trend::backRequested);
}
Trend::~Trend() { delete ui; }
