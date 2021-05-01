/********************************************************************************
** Form generated from reading UI file 'insertion.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSERTION_H
#define UI_INSERTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_insertion
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QVBoxLayout *verticalLayout;
    QLineEdit *login;
    QLineEdit *motdepasse;
    QLineEdit *id_perso;

    void setupUi(QDialog *insertion)
    {
        if (insertion->objectName().isEmpty())
            insertion->setObjectName(QStringLiteral("insertion"));
        insertion->resize(400, 300);
        buttonBox = new QDialogButtonBox(insertion);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(220, 250, 156, 23));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        layoutWidget = new QWidget(insertion);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 30, 371, 201));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_2->addWidget(label);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_2->addWidget(label_3);


        gridLayout->addLayout(verticalLayout_2, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        login = new QLineEdit(layoutWidget);
        login->setObjectName(QStringLiteral("login"));

        verticalLayout->addWidget(login);

        motdepasse = new QLineEdit(layoutWidget);
        motdepasse->setObjectName(QStringLiteral("motdepasse"));
        motdepasse->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(motdepasse);

        id_perso = new QLineEdit(layoutWidget);
        id_perso->setObjectName(QStringLiteral("id_perso"));

        verticalLayout->addWidget(id_perso);


        gridLayout->addLayout(verticalLayout, 0, 1, 1, 1);


        retranslateUi(insertion);
        QObject::connect(buttonBox, SIGNAL(accepted()), insertion, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), insertion, SLOT(reject()));

        QMetaObject::connectSlotsByName(insertion);
    } // setupUi

    void retranslateUi(QDialog *insertion)
    {
        insertion->setWindowTitle(QApplication::translate("insertion", "Dialog", nullptr));
        label->setText(QApplication::translate("insertion", "Nom de login", nullptr));
        label_2->setText(QApplication::translate("insertion", "Mot de passe", nullptr));
        label_3->setText(QApplication::translate("insertion", "id personnel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class insertion: public Ui_insertion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSERTION_H
