#include "search.h"
#include "ui_search.h"
#include"students.h"
#include <sstream>
#include<QListWidgetItem>
#include"mystudents.h"
#include"studentdialog.h"
Search::Search(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Search)
{
    ui->setupUi(this);
    setWindowTitle("Nhập thông tin cần tìm kiếm");
    m_StudentDialog = new StudentDialog;
}

Search::~Search()
{
    delete ui;
}
void Search::Show(Students *student){
    ui->name->setText(student->GetName());
    ui->mssv->setText(student->GetMssv());
    m_Student =student;
    show();
}
void Search::AddStudent1(QString mssv, QString name, QString gender, QString date, float cpa, QString classname){

    Students* student=new Students(mssv,name,gender,date,cpa,classname);
    AddStudent1(student);
}
void Search::AddStudent2(QString mssv, QString name, QString gender, QString date, float cpa, QString classname){

    Students* student=new Students(mssv,name,gender,date,cpa,classname);
    AddStudent2(student);
}
void Search::AddStudent1(Students *student){
    m_Students1.push_back(student);
}
void Search::AddStudent2(Students *student){
    ui->listWidget1->addItem((QListWidgetItem*)student);
}
void Search::RemoveStudent(Students *student){
    ui->listWidget1->removeItemWidget((QListWidgetItem*)student);
    for(int i=0;i< m_Students1.size();i++)
    {
        if(m_Students1[i]==student){
            m_Students1.remove(i);
            delete student;
            break;
        }
    }
}
void Search::on_listWidget1_itemDoubleClicked(QListWidgetItem *item)
{
    m_StudentDialog->Show((Students*)item);
}


void Search::on_pushButton_clicked()
{
    hide();
    ui->listWidget1->clear();
}

void Search::on_pushButton_2_clicked()
{
    ui->listWidget1->clear();
    int a=0;
    for(int i=0;i<= m_Students1.size()-1;i++){
        if((m_Students1[i]->GetName()==ui->name->text())&&(m_Students1[i]->GetMssv()==ui->mssv->text()))
        {
            a=a+1;
            AddStudent2(m_Students1[i]->GetMssv(),m_Students1[i]->GetName(),m_Students1[i]->GetGender(),m_Students1[i]->GetDate(),m_Students1[i]->GetCpa(),m_Students1[i]->GetClass());
        }
        else if((m_Students1[i]->GetName()==ui->name->text())&&(ui->mssv->text()=="")){
            a=a+1;
            AddStudent2(m_Students1[i]->GetMssv(),m_Students1[i]->GetName(),m_Students1[i]->GetGender(),m_Students1[i]->GetDate(),m_Students1[i]->GetCpa(),m_Students1[i]->GetClass());
        }
        else if((ui->name->text()=="")&&(m_Students1[i]->GetMssv()==ui->mssv->text())){
            a=a+1;
            AddStudent2(m_Students1[i]->GetMssv(),m_Students1[i]->GetName(),m_Students1[i]->GetGender(),m_Students1[i]->GetDate(),m_Students1[i]->GetCpa(),m_Students1[i]->GetClass());
        }

    }
    QListWidgetItem* b= new QListWidgetItem("Không có trong danh sách");
    if(a==0) ui->listWidget1->addItem((QListWidgetItem*)b);
}
