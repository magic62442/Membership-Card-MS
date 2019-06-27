#ifndef ALTERTABLEDIALOG_H
#define ALTERTABLEDIALOG_H

#include <QDialog>

namespace Ui {
class AlterTableDialog;
}

class AlterTableDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AlterTableDialog(QWidget *parent = nullptr);
    ~AlterTableDialog();

private:
    Ui::AlterTableDialog *ui;
};

#endif // ALTERTABLEDIALOG_H
