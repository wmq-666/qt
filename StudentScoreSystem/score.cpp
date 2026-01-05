#include "score.h"
#include "ui_score.h"

Score::Score(QWidget *parent) : QWidget(parent), ui(new Ui::Score) {
    ui->setupUi(this);
    // 连接返回按钮
    connect(ui->btnback, &QPushButton::clicked, this, &Score::backRequested);
}
Score::~Score() { delete ui; }
