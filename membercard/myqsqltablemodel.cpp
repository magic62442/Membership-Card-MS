#include "myqsqltablemodel.h"

MyQSqlTableModel::MyQSqlTableModel(QObject *parent,
   QSqlDatabase db):QSqlTableModel(parent, db)
{

}

QVariant MyQSqlTableModel::data(const QModelIndex &index, int role)const {
    if(role == Qt::TextAlignmentRole)
        return Qt::AlignCenter;

    return QSqlTableModel::data(index, role);
}
