#ifndef DIALOGSETTINGTIME_H
#define DIALOGSETTINGTIME_H

#include <QDialog>
#include <QDateTimeEdit>
#include <QLabel>
#include <QTimer>

class DateTimeSettingWidget : public QDateTimeEdit
{
    Q_OBJECT
public:
    QLabel *lbl;
    bool waitingProve;
    explicit DateTimeSettingWidget(QWidget *parent = 0);

    void setLabel(QLabel * in);


public slots:
    void nextSection();
    void moveUpOrSetTime();
signals:
    void timeSetted();

};

//15 21 18


namespace Ui {
class DialogSettingTime;
}

class DialogSettingTime : public QDialog
{
    Q_OBJECT

public:
    explicit DialogSettingTime(QWidget *parent = 0);
    ~DialogSettingTime();
    QTimer tmr;

private:
    Ui::DialogSettingTime *ui;
public slots:
    void nextSection();
    void moveUpOrSetTime();
};

#endif // DIALOGSETTINGTIME_H
