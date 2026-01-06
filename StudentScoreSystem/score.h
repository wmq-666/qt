#ifndef SCORE_H
#define SCORE_H

#include <QWidget>
#include <QSqlRelationalTableModel>
#include <QSqlRelationalDelegate>
#include <QSqlError>
#include <QMessageBox>
#include <QSqlQuery>
#include <QDate>

namespace Ui { class Score; }

class Score : public QWidget {
    Q_OBJECT
public:
    explicit Score(QWidget *parent = nullptr);
    ~Score();
signals:
    void backRequested();
private slots:
    void on_btnback_clicked();
    void on_btnserach_clicked();
    void on_btnInsert_clicked();
    void on_btnSave_clicked();
    void on_btnClear_clicked();
    void on_btnDelete_clicked();


private:
    Ui::Score *ui;
    QSqlRelationalTableModel *m_model;
    void initModel();
};
#endif
