#ifndef NEWCARDDIALOG_H
#define NEWCARDDIALOG_H

#include <QDialog>
#include "activity.h"

namespace Ui {
class NewCardDialog;
}

class NewCardDialog : public QDialog
{
    Q_OBJECT

public:
    explicit NewCardDialog(QWidget *parent = nullptr);
    ~NewCardDialog();

private:
    Ui::NewCardDialog *ui;
};

#endif // NEWCARDDIALOG_H
