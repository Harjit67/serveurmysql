/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionRafraichir;
    QAction *actionSupprimer;
    QAction *actionModifier;
    QAction *actionInsertion;
    QAction *actionpersonnel;
    QWidget *centralWidget;
    QTableView *tableView;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QMenuBar *menuBar;
    QMenu *menuoperation;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(963, 622);
        actionRafraichir = new QAction(MainWindow);
        actionRafraichir->setObjectName(QStringLiteral("actionRafraichir"));
        actionSupprimer = new QAction(MainWindow);
        actionSupprimer->setObjectName(QStringLiteral("actionSupprimer"));
        actionModifier = new QAction(MainWindow);
        actionModifier->setObjectName(QStringLiteral("actionModifier"));
        actionInsertion = new QAction(MainWindow);
        actionInsertion->setObjectName(QStringLiteral("actionInsertion"));
        actionpersonnel = new QAction(MainWindow);
        actionpersonnel->setObjectName(QStringLiteral("actionpersonnel"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tableView = new QTableView(centralWidget);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(10, 0, 951, 391));
        tableView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        tableView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(180, 440, 20, 16));
        lineEdit_2 = new QLineEdit(centralWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(211, 438, 641, 20));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(170, 410, 36, 16));
        lineEdit_3 = new QLineEdit(centralWidget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(211, 412, 641, 20));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 963, 21));
        menuoperation = new QMenu(menuBar);
        menuoperation->setObjectName(QStringLiteral("menuoperation"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuoperation->menuAction());
        mainToolBar->addAction(actionInsertion);
        mainToolBar->addAction(actionSupprimer);
        mainToolBar->addAction(actionRafraichir);
        mainToolBar->addAction(actionModifier);
        mainToolBar->addAction(actionpersonnel);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionRafraichir->setText(QApplication::translate("MainWindow", "Rafraichir", nullptr));
#ifndef QT_NO_TOOLTIP
        actionRafraichir->setToolTip(QApplication::translate("MainWindow", "Rafraichir", nullptr));
#endif // QT_NO_TOOLTIP
        actionSupprimer->setText(QApplication::translate("MainWindow", "Supprimer", nullptr));
        actionModifier->setText(QApplication::translate("MainWindow", "Modifier", nullptr));
        actionInsertion->setText(QApplication::translate("MainWindow", "Insertion", nullptr));
#ifndef QT_NO_TOOLTIP
        actionInsertion->setToolTip(QApplication::translate("MainWindow", "Insertion", nullptr));
#endif // QT_NO_TOOLTIP
        actionpersonnel->setText(QApplication::translate("MainWindow", "personnel", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "libre", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "num\303\251ro", nullptr));
        menuoperation->setTitle(QApplication::translate("MainWindow", "Personnel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
