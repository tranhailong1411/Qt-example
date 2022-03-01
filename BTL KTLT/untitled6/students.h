#ifndef STUDENTS_H
#define STUDENTS_H
#include <QString>
#include<QListWidgetItem>
class Students :public QListWidgetItem
{
public:
    Students(){}
    Students(QString name);
    Students(QString mssv,QString name,QString gender ,QString date, float cpa,QString classname);
    void SetName(QString name);
    void SetDate(QString date);
    void SetClass(QString classname);
    void SetMssv(QString mssv);
    void SetGender(QString gender);
    void SetCpa(float cpa);
    QString GetName() ;
    QString GetDate() ;
    QString GetClass() ;
    QString GetMssv();
    QString GetGender();
    float GetCpa();
private:
    QString Name;
    QString Date;
    QString s_Class;
    QString Mssv;
    QString Gender;
    float Cpa;
};

#endif // STUDENTS_H
