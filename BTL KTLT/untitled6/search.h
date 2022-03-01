#ifndef SEARCH_H
#define SEARCH_H
#include <QWidget>
#include "students.h"
#include<QString>
#include<QVector>
#include <string>
#include <QDialog>
#include"mystudents.h"
namespace Ui {
class Search;
}
class Students;
class QListWidgetItem;
class MyStudents;
class Search : public QDialog
{
    Q_OBJECT
    
public:
    explicit Search(QWidget *parent = 0);
    ~Search();
    void Show(Students* student);
    void AddStudent1(Students* student);
    void AddStudent2(Students *student);
    void AddStudent2(QString mssv, QString name, QString gender, QString date, float cpa, QString classname);
    void AddStudent1(QString mssv,QString name,QString gender ,QString date, float cpa,QString classname);
    void RemoveStudent(Students *student);
        QVector<Students*> m_Students1;
private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();
    void on_listWidget1_itemDoubleClicked(QListWidgetItem *item);
private:
    Ui::Search *ui;
    Students* m_Student;
    StudentDialog* m_StudentDialog;
};

#endif // SEARCH_H
