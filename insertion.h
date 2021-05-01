#ifndef INSERTION_H
#define INSERTION_H

#include <QDialog>

namespace Ui {
class insertion;
}

class insertion : public QDialog
{
    Q_OBJECT

public:
    explicit insertion(QWidget *parent = 0);
    ~insertion();


private slots:
    void on_buttonBox_accepted();




private:
    Ui::insertion *ui;
};

#endif // INSERTION_H
