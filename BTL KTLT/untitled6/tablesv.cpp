#include "tablesv.h"
#include "ui_tablesv.h"
#include"students.h"
#include <sstream>
TableSv::TableSv(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TableSv)
{
    ui->setupUi(this);
}

TableSv::~TableSv()
{
    delete ui;
}
char buffer [33];
void TableSv::Show1(QVector<Students *> student, int count1){
    ui->tableWidget->setRowCount(count1);
    float tong=0,tb;
    int dem =0;
    for(int i=0; i<= count1-1 ;i++){     
    itoa(i+1,buffer,10);
    ui->tableWidget->setItem(i,0,new QTableWidgetItem(buffer));
    ui->tableWidget->setItem(i,1,new QTableWidgetItem(student[i]->GetMssv()));
    ui->tableWidget->setItem(i,2,new QTableWidgetItem(student[i]->GetName()));
    ui->tableWidget->setItem(i,3,new QTableWidgetItem(student[i]->GetGender()));
    ui->tableWidget->setItem(i,4,new QTableWidgetItem(student[i]->GetDate()));
    std::stringstream sstream;
    sstream << student[i]->GetCpa();
    ui->tableWidget->setItem(i,5,new QTableWidgetItem(sstream.str().c_str()));
    ui->tableWidget->setItem(i,6,new QTableWidgetItem(student[i]->GetClass()));
    tong =tong + student[i]->GetCpa();
    dem=dem+1;
    }
    std::stringstream sstream1;
    tb=tong/dem;
    sstream1 << tb;
    ui->label->setText(sstream1.str().c_str());
    show();
}
void TableSv::Show2(QVector<Students *> student, int count1){
    int n=0;
    float tong,tb;
    for(int m=0;m<=count1-1;m++){
         if(student[m]->GetClass()=="A1"){
           n=n+1;
         }
    }
    ui->tableWidget->setRowCount(n);
    int j=0;
    int dem=0;
    for(int i=0; i<= count1-1 ;i++){
        if(student[i]->GetClass()=="A1"){
            j=j+1;
    itoa(j,buffer,10);
    ui->tableWidget->setItem(j-1,0,new QTableWidgetItem(buffer));
    ui->tableWidget->setItem(j-1,1,new QTableWidgetItem(student[i]->GetMssv()));
    ui->tableWidget->setItem(j-1,2,new QTableWidgetItem(student[i]->GetName()));
    ui->tableWidget->setItem(j-1,3,new QTableWidgetItem(student[i]->GetGender()));
    ui->tableWidget->setItem(j-1,4,new QTableWidgetItem(student[i]->GetDate()));
    std::stringstream sstream;
    sstream << student[i]->GetCpa();
    ui->tableWidget->setItem(j-1,5,new QTableWidgetItem(sstream.str().c_str()));
    ui->tableWidget->setItem(j-1,6,new QTableWidgetItem(student[i]->GetClass()));
    tong =tong + student[i]->GetCpa();
    dem=dem+1;
    }
    }
    std::stringstream sstream1;
    tb=tong/dem;
    sstream1 << tb;
    ui->label->setText(sstream1.str().c_str());
    show();
}
void TableSv::Show3(QVector<Students *> student, int count1){
    int n=0;
    int dem=0;
    float tong,tb;
    for(int m=0;m<=count1-1;m++){
         if(student[m]->GetClass()=="A2"){
           n=n+1;
         }
    }

    ui->tableWidget->setRowCount(n);
    int j=0;
    for(int i=0; i<= count1-1 ;i++){
        if(student[i]->GetClass()=="A2"){
            j=j+1;
    itoa(j,buffer,10);
    ui->tableWidget->setItem(j-1,0,new QTableWidgetItem(buffer));
    ui->tableWidget->setItem(j-1,1,new QTableWidgetItem(student[i]->GetMssv()));
    ui->tableWidget->setItem(j-1,2,new QTableWidgetItem(student[i]->GetName()));
    ui->tableWidget->setItem(j-1,3,new QTableWidgetItem(student[i]->GetGender()));
    ui->tableWidget->setItem(j-1,4,new QTableWidgetItem(student[i]->GetDate()));
    std::stringstream sstream;
    sstream << student[i]->GetCpa();
    ui->tableWidget->setItem(j-1,5,new QTableWidgetItem(sstream.str().c_str()));
    ui->tableWidget->setItem(j-1,6,new QTableWidgetItem(student[i]->GetClass()));
    tong =tong + student[i]->GetCpa();
    dem=dem+1;
    }
    }
    std::stringstream sstream1;
    tb=tong/dem;
    sstream1 << tb;
    ui->label->setText(sstream1.str().c_str());
    show();
}
void TableSv::Show4(QVector<Students *> student, int count1){
    int n=0;
    for(int m=0;m<=count1-1;m++){
         if(student[m]->GetCpa()>3.2){
           n=n+1;
         }
    }
    ui->tableWidget->setRowCount(n);
    int j=0;
    float tong,tb;
    for(int i=0; i<= count1-1 ;i++){
        if(student[i]->GetCpa()>3.2){
            j=j+1;
    itoa(j,buffer,10);
    ui->tableWidget->setItem(j-1,0,new QTableWidgetItem(buffer));
    ui->tableWidget->setItem(j-1,1,new QTableWidgetItem(student[i]->GetMssv()));
    ui->tableWidget->setItem(j-1,2,new QTableWidgetItem(student[i]->GetName()));
    ui->tableWidget->setItem(j-1,3,new QTableWidgetItem(student[i]->GetGender()));
    ui->tableWidget->setItem(j-1,4,new QTableWidgetItem(student[i]->GetDate()));
    std::stringstream sstream;
    sstream << student[i]->GetCpa();
    ui->tableWidget->setItem(j-1,5,new QTableWidgetItem(sstream.str().c_str()));
    ui->tableWidget->setItem(j-1,6,new QTableWidgetItem(student[i]->GetClass()));
    tong =tong + student[i]->GetCpa();
        }
    }
    std::stringstream sstream1;
    tb=tong/count1;
    sstream1 << tb;
    ui->label->setText(sstream1.str().c_str());
    show();
}
void TableSv::on_pushButton_released()
{
    hide();
    ui->tableWidget->clearContents();
}

