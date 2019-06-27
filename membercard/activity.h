#ifndef ACTIVITY_H
#define ACTIVITY_H
#include <QString>

class Activity
{
public:
    QString name;
    double rate1;
    int threshold1;
    int cut1;
    double rate2;
    int threshold2;
    int cut2;
    double rate3;
    int threshold3;
    int cut3;

    Activity();
    void setActivity(QString name, double rate1, int threshold1, int cut1,
             double rate2, int threshold2, int cut2,
             double rate3, int threshold3, int cut3);

};

//两个全局变量
extern Activity* actInfo;
extern QString tableName;


#endif // ACTIVITY_H
