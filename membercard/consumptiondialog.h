#ifndef CONSUMPTIONDIALOG_H
#define CONSUMPTIONDIALOG_H

#include <QDialog>
#include "activity.h"

namespace Ui {
class ConsumptionDialog;
}

class ConsumptionDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ConsumptionDialog(QWidget *parent = nullptr);
    ~ConsumptionDialog();

private:
    Ui::ConsumptionDialog *ui;
};
extern QString nameStr;
extern double price;
extern double consumption;
extern double saved;
extern QString type;
extern int threshold, cut;
extern double rate;

#endif // CONSUMPTIONDIALOG_H
