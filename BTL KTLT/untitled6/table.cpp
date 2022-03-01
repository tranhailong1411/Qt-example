#include "table.h"
#include "ui_table.h"
#include"students.h"
#include <iostream>
#include<stdlib.h>
#include <string>
table::table(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::table)
{
    ui->setupUi(this);
    setWindowTitle("Danh sách sinh viên");
}

table::~table()
{
    delete ui;
}

