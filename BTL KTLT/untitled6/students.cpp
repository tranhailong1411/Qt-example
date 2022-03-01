#include "students.h"

Students::Students(QString name) :QListWidgetItem(name)
{

}
Students::Students(QString mssv, QString name, QString gender, QString date, float cpa, QString classname) : QListWidgetItem(name),Mssv(mssv),Gender(gender),Date(date),Cpa(cpa) ,s_Class(classname)
{

}

void Students:: SetName(QString name){
    QListWidgetItem::setText(name);
}
void Students:: SetDate(QString date){
    Date=date;
}
void Students:: SetClass(QString classname){
    s_Class=classname;
}
void Students:: SetMssv(QString mssv){
    Mssv=mssv;
}
void Students:: SetGender(QString gender){
    Gender=gender;
}
void Students:: SetCpa(float cpa){
    Cpa=cpa;
}

QString Students::GetName(){
    return QListWidgetItem::text();
}
QString Students::GetDate(){
    return Date;
}
QString Students::GetClass(){
    return s_Class;
}
QString Students::GetGender(){
    return Gender;
}
QString Students::GetMssv(){
    return Mssv;
}
float Students::GetCpa(){
    return Cpa;
}
