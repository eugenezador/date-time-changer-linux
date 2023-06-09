#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include "dialogsettingtime.h"



namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

private:
    DialogSettingTime * dst;
    Ui::Dialog *ui;
};

#endif // DIALOG_H
