#ifndef SETACTDIALOG_H
#define SETACTDIALOG_H

#include <QDialog>
#include <activity.h>

namespace Ui {
class SetActDialog;
}

class SetActDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SetActDialog(QWidget *parent = nullptr);
    ~SetActDialog();

private:
    Ui::SetActDialog *ui;
};

#endif // SETACTDIALOG_H
