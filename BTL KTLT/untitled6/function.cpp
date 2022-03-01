#include "function.h"
#include "ui_function.h"
#include "mystudents.h"
#include"students.h"
#include"studentdialog.h"
#include<QListWidgetItem>
Function::Function(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Function)
{
    ui->setupUi(this);
}

Function::~Function()
{
    delete ui;
}


