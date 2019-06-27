#include "activity.h"

Activity::Activity()
{

}

void Activity::setActivity(QString name, double rate1, int threshold1, int cut1,
                   double rate2, int threshold2, int cut2,
                   double rate3, int threshold3, int cut3)
{
    this -> name = name;
    this -> rate1 = rate1;
    this -> threshold1 = threshold1;
    this -> cut1 = cut1;
    this -> rate2 = rate2;
    this -> threshold2 = threshold2;
    this -> cut2 = cut2;
    this -> rate3 = rate3;
    this -> threshold3 = threshold3;
    this -> cut3 = cut3;
}

Activity *actInfo = new Activity();
QString tableName = "info";

