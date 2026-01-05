#ifndef SCORE_H
#define SCORE_H
#include <QWidget>

namespace Ui { class Score; }

class Score : public QWidget {
    Q_OBJECT
public:
    explicit Score(QWidget *parent = nullptr);
    ~Score();
signals:
    void backRequested(); // 定义返回信号
private:
    Ui::Score *ui;
};
#endif
