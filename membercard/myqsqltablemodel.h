#ifndef MYQSQLTABLEMODEL_H
#define MYQSQLTABLEMODEL_H

#include <QObject>
#include <QWidget>
#include <QSqlTableModel>

class MyQSqlTableModel : public QSqlTableModel
{
    Q_OBJECT
public:
    explicit MyQSqlTableModel(QObject *parent = nullptr, QSqlDatabase db = QSqlDatabase());
    QVariant data(const QModelIndex &index, int role) const;
signals:

public slots:
};

#endif // MYQSQLTABLEMODEL_H
