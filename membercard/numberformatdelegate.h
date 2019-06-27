#ifndef NUMBERFORMATDELEGATE_H
#define NUMBERFORMATDELEGATE_H

#include <QStyledItemDelegate>

class NumberFormatDelegate : public QStyledItemDelegate
{
    Q_OBJECT
public:
    explicit NumberFormatDelegate(QObject *parent = 0);
    //讲数据显示为小数，并保留小数点后两位
    virtual QString displayText(const QVariant &value, const QLocale &locale) const;

signals:

public slots:

};

#endif // NUMBERFORMATDELEGATE_H
