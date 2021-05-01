#include "mainwindow.h"
#include "dialoglogin.h"
#include <QApplication>
#include <QMessageBox>
#include <qmessagebox.h>

//int main(int argc, char *argv[])
//{
  //  QApplication a(argc, argv);
    //MainWindow w;
    //w.show();
    //DialogLogin m;
   // m.show();

  //  return a.exec();
 //}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DialogLogin dlg;  // Création de la boite de dialogue
    if(dlg.exec())  // affichage
    {  MainWindow w;  // Création de la fenêtre principale
        w.show();  // Affichage
        return a.exec();// exécution de l'application
    }
    else
        QMessageBox::critical(0,"Erreur","Problème d'authentification");
    return 0;
}
