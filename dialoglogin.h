#ifndef DIALOGLOGIN_H
#define DIALOGLOGIN_H

#include <QDialog>

namespace Ui {
class DialogLogin;
}

class DialogLogin : public QDialog
{
    Q_OBJECT

public:
    explicit DialogLogin(QWidget *parent = 0);
    ~DialogLogin();
public slots:

    void on_buttonBox_accepted();





private:
    Ui::DialogLogin *ui;
};

#endif // DIALOGLOGIN_H
