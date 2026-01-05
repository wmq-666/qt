// master.cpp
#include "master.h"
#include "ui_master.h"
#include <QDebug>
#include "idatabase.h"

Master::Master(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Form)
{
    ui->setupUi(this);
}

Master::~Master()
{
    delete ui;
}

void Master::on_btnscore_clicked()
{

}


void Master::on_btnstatistics_clicked()
{

}


void Master::on_btntrend_clicked()
{

}



void Master::on_btnlogout_clicked()
{

}




