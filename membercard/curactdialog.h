#ifndef CURACTDIALOG_H
#define CURACTDIALOG_H

#include <QDialog>
#include "activity.h"

namespace Ui {
class CurActDialog;
}

class CurActDialog : public QDialog
{
    Q_OBJECT

public:
    explicit CurActDialog(QWidget *parent = nullptr);
    ~CurActDialog();
    void dispActivity();
private:
    Ui::CurActDialog *ui;
};

#endif // CURACTDIALOG_H
