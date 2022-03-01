#include "mystudents.h"
#include "ui_mystudents.h"
#include "students.h"
#include"studentdialog.h"
#include"tablesv.h"
#include"search.h"
#include<QListWidgetItem>
#include <iostream>
#include<stdlib.h>
#include <string>
#include<math.h>
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <algorithm>
#include <fstream>
#include "ui_search.h"
#include<QFile>
#include<QTextStream>
#include<QMessageBox>
#include <QJsonDocument>
#include<QDebug>
#include<QJsonObject>
#include<QJsonArray>
using namespace std;
MyStudents::MyStudents(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MyStudents)
{
    ui->setupUi(this);
    setWindowTitle("Danh sách sinh viên lớp tiếng Nhật");
    setStyleSheet("background-color: rgb(255,250,179);");
    m_StudentDialog = new StudentDialog;
    m_StudentSearch = new Search;
    m_StudentTable =new TableSv;
}
int MyStudents::count1(){
    ifstream f1;
       char c;
       int numchars, numlines;
       f1.open("test.txt");

       numchars = 0;
       numlines = 0;
       f1.get(c);
       while (f1) {
         while (f1 && c != '\n') {
           numchars = numchars + 1;
           f1.get(c);
         }
         numlines = numlines + 1;
         f1.get(c);
       }
       return numlines;

}
void MyStudents:: readJson(){
    QString val;
    QFile file;
    file.setFileName("test.txt");
    file.open(QIODevice::ReadOnly | QIODevice::Text);
    QTextStream textStream(&file);
    textStream.setCodec("UTF-8");
    val = textStream.readAll();
    file.close();
    QJsonDocument d = QJsonDocument::fromJson(val.toUtf8());
    QJsonObject sett2 = d.object();
    QJsonValue value = sett2.value(QString("manage"));
    QJsonObject item = value.toObject();
    QJsonArray test = item["Student"].toArray();
    QJsonObject item1;
    QJsonValue subobj;
    QJsonValue subobj1;
    QJsonValue subobj2;
    QJsonValue subobj3;
    QJsonValue subobj4;
    QJsonValue subobj5;
    float b;
    for(int i=0;i<count1()-6;i++){
    item1 = test[i].toObject();
    subobj = item1["Mssv"];
    subobj1 = item1["Name"];
    subobj2 = item1["Gender"];
    subobj3 = item1["Date"];
    subobj4 = item1["Cpa"];
    subobj5 = item1["Class"];
    b = subobj4.toString().toFloat();
    AddStudent(subobj.toString(),subobj1.toString(),subobj2.toString(),subobj3.toString(),b,subobj5.toString());
    }
}
void MyStudents::writeJson(){
    ofstream ofs("output.txt");
    for (int i = 0; i < m_Students.size(); i++) {
            ofs<< "  {\"Mssv\" : \"";
            ofs<<m_Students[i]->GetMssv().toStdString();
            ofs<<"\", \"Name\" : \"";
            ofs<<m_Students[i]->GetName().toStdString();
            ofs<<"\", \"Gender\" : \"";
            ofs<< m_Students[i]->GetGender().toStdString();
            ofs<<"\", \"Date\" : \"";
            ofs<< m_Students[i]->GetDate().toStdString();
            ofs<<"\", \"Cpa\" : \"";
            ofs<< m_Students[i]->GetCpa();
            ofs<<"\", \"Class\" : \"";
            ofs<< m_Students[i]->GetClass().toStdString();
            ofs<< "\"}, \n";
    }
    ofs.close();
}
void MyStudents::AddStudent(QString mssv, QString name, QString gender, QString date, float cpa, QString classname){

    Students* student=new Students(mssv,name,gender,date,cpa,classname);
    AddStudent(student);
}
void MyStudents::RemoveStudent(Students *student){
    ui->listWidget->removeItemWidget((QListWidgetItem*)student);
    for(int i=0;i< m_Students.size();i++)
    {
        if(m_Students[i]==student){
            m_Students.remove(i);
            delete student;
        }
    }
}
void MyStudents::AddStudent(Students *student){
    ui->listWidget->addItem((QListWidgetItem*)student);
    m_Students.push_back(student);
    m_StudentSearch->m_Students1.push_back(student);
}
void MyStudents::AddStudent(QString name){

    Students* student=new Students(name);
    AddStudent(student);
}
MyStudents::~MyStudents()
{
    for(int i=0;i< m_Students.size();i++){

        RemoveStudent(m_Students[i]);
    }

    delete ui;
    delete m_StudentDialog;
}

void MyStudents::on_listWidget_itemDoubleClicked(QListWidgetItem *item)
{
    m_StudentDialog->Show((Students*)item);
}

void MyStudents::on_pushButton_clicked()
{
    AddStudent("None","NewStudents","None","None",0,"None");
}

void MyStudents::on_pushButton_2_clicked()
{
    RemoveStudent((Students*)ui->listWidget->currentItem());
}
struct less_than_key
{
    inline bool operator() (Students* student1,Students* student2)
    {
        return (student1->GetCpa() > student2->GetCpa());
    }
};
struct less_than_key1
{
    inline bool operator() (Students* student1,Students* student2)
    {
        return (student1->GetName() < student2->GetName());
    }
};
void MyStudents::on_pushButton_3_clicked()
{
    m_StudentTable->Show1(m_Students,m_Students.size());
}

void MyStudents::on_pushButton_4_clicked()
{
    sort(m_Students.begin(),m_Students.end(), less_than_key());
}


void MyStudents::on_pushButton_5_clicked()
{
    m_StudentTable->Show2(m_Students,m_Students.size());
}

void MyStudents::on_pushButton_6_clicked()
{
    m_StudentTable->Show3(m_Students,m_Students.size());
}

void MyStudents::on_commandLinkButton_clicked()
{
    m_StudentTable->Show4(m_Students,m_Students.size());
}

void MyStudents::on_pushButton_7_clicked()
{
        sort(m_Students.begin(),m_Students.end(), less_than_key1());
}

void MyStudents::on_pushButton_8_clicked()
{
    Students* a=new Students("","","","",0,"");
    m_StudentSearch->Show(a);
}

//void Search::on_pushButton_2_clicked()
//{
//    ui->listWidget1->clear();
//    int a=0;
//    for(int i=0;i<= m_Students1.size()-1;i++){
//        if((m_Students1[i]->GetName()==ui->name->text())&&(m_Students1[i]->GetMssv()==ui->mssv->text()))
//        {
//            a=a+1;
//            AddStudent2(m_Students1[i]->GetMssv(),m_Students1[i]->GetName(),m_Students1[i]->GetGender(),m_Students1[i]->GetDate(),m_Students1[i]->GetCpa(),m_Students1[i]->GetClass());
//        }
//        else if((m_Students1[i]->GetName()==ui->name->text())&&(ui->mssv->text()=="")){
//            a=a+1;
//            AddStudent2(m_Students1[i]->GetMssv(),m_Students1[i]->GetName(),m_Students1[i]->GetGender(),m_Students1[i]->GetDate(),m_Students1[i]->GetCpa(),m_Students1[i]->GetClass());
//        }
//        else if((ui->name->text()=="")&&(m_Students1[i]->GetMssv()==ui->mssv->text())){
//            a=a+1;
//            AddStudent2(m_Students1[i]->GetMssv(),m_Students1[i]->GetName(),m_Students1[i]->GetGender(),m_Students1[i]->GetDate(),m_Students1[i]->GetCpa(),m_Students1[i]->GetClass());
//        }

//    }
//    QListWidgetItem* b= new QListWidgetItem("Không có trong danh sách");
//    if(a==0) ui->listWidget1->addItem((QListWidgetItem*)b);
//}


void MyStudents::on_pushButton_9_clicked()
{
    readJson();
}

void MyStudents::on_pushButton_10_clicked()
{
    writeJson();
}
