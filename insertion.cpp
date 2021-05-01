#include "insertion.h"
#include "insertion.h"
#include "ui_insertion.h"
#include "ui_insertion.h"
#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <qDebug>


insertion::insertion(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::insertion)
{
    ui->setupUi(this);
}

insertion::~insertion()
{
    delete ui;
}








