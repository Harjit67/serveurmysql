#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QLineEdit>
#include <QMainWindow>
#include <QSqlTableModel>
#include <qsqldatabase.h>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

    QSqlQueryModel *queryModel;
    QSqlDatabase db;
    QSqlTableModel *tableModel;
   //QSqlQueryModel *queryModel;


    //if(queryModel);//
   // delete queryModel;
    //queryModel= new QSqlQueryModel(this)
    //queryModel->setQuery("SELECT 'personnel' FROM 'parking'",db)
    //ui->tableView->setModel(queryModel)




public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:

    void paintEvent(QPaintEvent *);

    void on_tableView_doubleClicked(const QModelIndex &index);



    void on_actionRafraichir_triggered();

    void on_actionSupprimer_triggered();

    void on_actionModifier_triggered();

    void on_actionInsertion_triggered();


private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
