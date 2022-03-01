#include "studentdialog.h"
#include "ui_studentdialog.h"
#include"students.h"
#include <sstream>
StudentDialog::StudentDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::StudentDialog)
{
    ui->setupUi(this);
    setWindowTitle("Thông tin sinh viên");
}
void StudentDialog::Show(Students *student){
    ui->name->setText(student->GetName());
    ui->date->setText(student->GetDate());
    ui->class_2->setText(student->GetClass());
    ui->gender1->setText(student->GetGender());
    ui->mssv1->setText(student->GetMssv());
    std::stringstream sstream;
    sstream << student->GetCpa();
    ui->Cpa1->setText(sstream.str().c_str());
    m_Student =student;
    show();
}
StudentDialog::~StudentDialog()
{
    delete ui;
}

void StudentDialog::on_pushButton_released()
{
    m_Student->SetName(ui->name->text());
    m_Student->SetDate(ui->date->text());
    m_Student->SetClass(ui->class_2->text());
    m_Student->SetGender(ui->gender1->text());
    m_Student->SetMssv(ui->mssv1->text());
    float val;
    char str[20];
    std::string str2 = ui->Cpa1->text().toStdString();
    const char* p = str2.c_str();
    strcpy(str,p);
    val= atof(str);
    m_Student->SetCpa(val);
    hide();
}

void StudentDialog::on_pushButton_2_released()
{
    hide();
}
