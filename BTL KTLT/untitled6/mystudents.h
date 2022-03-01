#ifndef MYSTUDENTS_H
#define MYSTUDENTS_H
#include <QWidget>
#include "students.h"
#include<QString>
#include<QVector>
#include <string>
namespace Ui {
class MyStudents;
}
class QListWidgetItem;
class StudentDialog;
class TableSv;
class Search;
class QDebug;
class MyStudents : public QWidget
{
    Q_OBJECT
    
public:
    explicit MyStudents(QWidget *parent = 0);
    ~MyStudents();
    void AddStudent(Students* student);
    void AddStudent(QString name);
    void AddStudent(QString mssv,QString name,QString gender ,QString date, float cpa,QString classname);
    void RemoveStudent(Students* student);
    void readJson();
    int count1();
    void writeJson();
private slots:
    void on_listWidget_itemDoubleClicked(QListWidgetItem *item);
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();


    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_commandLinkButton_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_10_clicked();

private:
    Ui::MyStudents *ui;
    StudentDialog* m_StudentDialog;
    TableSv* m_StudentTable;
    Search* m_StudentSearch;
    QVector<Students*> m_Students;
};

#endif // MYSTUDENTS_H
