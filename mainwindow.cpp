#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <qmessagebox.h>
#include <qDebug>
#include <QScrollBar>
#include <QToolBar>
#include <QSqlField>
#include <QSqlRecord>
#include <QSqlQuery>
#include<insertion.h>



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    tableModel= 0;
    db= QSqlDatabase::addDatabase("QMYSQL","serveurmysql");
    db.setDatabaseName("parking");
    db.setHostName("localhost");
    db.setUserName("root");
    db.setPassword("");
    if(!db.open()){

        QMessageBox::critical(this,"Attention","Pb d'accès",QMessageBox::Ok);
        db.close();
    }
    else
        qDebug()<<"la base est ouverte";

}

MainWindow::~MainWindow()
{

    delete tableModel;
    if(db.isOpen())
        db.close();

    delete ui;
}


void MainWindow::on_actionRafraichir_triggered()
{
    if(tableModel)
        delete tableModel;
    tableModel= new QSqlTableModel(this,db);
    tableModel->setTable("place");
    tableModel->setEditStrategy(QSqlTableModel::OnManualSubmit);
    if(tableModel->select())
        ui->tableView->setModel(tableModel);
}


void MainWindow::paintEvent(QPaintEvent *)
{
    int w= ui->tableView->width()-ui->tableView->verticalHeader()->width()
            -ui->tableView->verticalScrollBar()->width();
    ui->tableView->setColumnWidth(1,w/2);
    ui->tableView->setColumnWidth(2,w/2);
}

void MainWindow::on_tableView_doubleClicked(const QModelIndex &index)
{
    QSqlRecord sqlRecord= tableModel->record(index.row());
    int id= sqlRecord.field("id_place").value().toInt();
    QString libre= sqlRecord.field("libre").value().toString();
    QString id_place= sqlRecord.field("id_place").value().toString();
    QString str= "ligne = "+(QString::number(index.row()))+ " \n libre = " + libre + " \n id = " + id_place;

    QMessageBox::information(this,"Sélection",str,QMessageBox::Ok);
}



void MainWindow::on_actionSupprimer_triggered()
{
    if(QMessageBox::question(this,"Supression","?")!=QMessageBox::Yes)
        return;

    int ligne= ui->tableView->currentIndex().row();

    if(ligne<0) return;


    QSqlRecord sqlRecord= tableModel->record(ligne);

    int id= sqlRecord.field("id_place").value().toInt();



    QSqlQuery query(db);

    if(!query.exec("DELETE FROM place WHERE id_place="+QString::number(id)))


        QMessageBox::critical(this,"Attention","Pb Req",QMessageBox::Ok);
    on_actionRafraichir_triggered ();

}



void MainWindow::on_actionModifier_triggered()
{

    if(QMessageBox::question(this,"Modification","?")!=QMessageBox::Yes)
        return;

    int ligne= ui->tableView->currentIndex().row();

    if(ligne<0) return;

    QSqlRecord sqlRecord= tableModel->record(ligne);

    int id =sqlRecord.field("id_place").value().toInt();
    QString libre=sqlRecord.field("libre").value().toString();
    QString numero=sqlRecord.field("numero").value().toString();



    QSqlQuery query(db);

    if(!query.exec("UPDATE place SET libre='"+libre+"',numero='"+numero+"' WHERE id_place="+QString::number(id)))


        QMessageBox::critical(this,"Attention","Pb Req",QMessageBox::Ok);

    on_actionRafraichir_triggered();

}


void MainWindow::on_actionInsertion_triggered()
{
    QString libre= ui->lineEdit_2->text();

    QString  numero= ui->lineEdit_3->text();

    QSqlQuery query(db);
    qDebug()<<query.exec("INSERT INTO place (libre,numero) VALUES ('"+libre+"','"+numero+"');");

    on_actionRafraichir_triggered();

}



