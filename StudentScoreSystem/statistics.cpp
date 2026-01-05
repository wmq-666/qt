#include "statistics.h"
#include "ui_statistics.h"

Statistics::Statistics(QWidget *parent) : QWidget(parent), ui(new Ui::Statistics) {
    ui->setupUi(this);
    // 连接返回按钮
    connect(ui->btnback, &QPushButton::clicked, this, &Statistics::backRequested);
}
Statistics::~Statistics() { delete ui; }
