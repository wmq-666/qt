#ifndef TREND_H
#define TREND_H

#include <QWidget>
#include <QSqlQuery>
#include <QSqlError>
#include <QTableWidgetItem>

namespace Ui { class Trend; }

class Trend : public QWidget {
    Q_OBJECT
public:
    explicit Trend(QWidget *parent = nullptr);
    ~Trend();
signals:
    void backRequested();
private slots:
    void on_btnback_clicked();
    void on_btnGenerate_clicked();
private:
    Ui::Trend *ui;
};
#endif
