#include "dialoglogin.h"
#include "dialoglogin.h"
#include "ui_dialoglogin.h"

#include<iostream>
#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>
#include <QString>

DialogLogin::DialogLogin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogLogin)
{
    ui->setupUi(this);
}

DialogLogin::~DialogLogin()
{
    delete ui;
}

void DialogLogin::on_buttonBox_accepted()
{
    QString host = "192.168.64.2";
    QString lhost = "localhost";


    {
        QSqlDatabase db= QSqlDatabase::addDatabase("QMYSQL","serveurmysql");
        db.setDatabaseName("parking");
        db.setPort(3306);
        db.setHostName(lhost);
        db.setUserName(ui->lineEditUser->text());
        db.setPassword(ui->lineEditPassword->text());
        if(db.open())
        {  qDebug()<<"La base est connectée";

            for(auto& field : db.tables()){
                qDebug() << field << "\n";
            }
        //     à compléter plus tard
            db.close();
       }
        else {
           QMessageBox::critical(this,"Attention","Pb d'accès",QMessageBox::Ok);

         exit(1);
        }
    }
    QSqlDatabase::removeDatabase("parking");


}














