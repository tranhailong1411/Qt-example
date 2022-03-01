#include "check.h"
#include "ui_check.h"
#include<QMessageBox>
Check::Check(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Check)
{
    ui->setupUi(this);
    setWindowTitle("Ứng dụng quản lý");
    setStyleSheet("color: black;"
                  "background-color: rgb(255,250,179) ;"
                  "selection-color: yellow;"
                  "selection-background-color: blue;");
}

Check::~Check()
{
    delete ui;
}

void Check::on_pushButton_clicked()
{
    if((ui->Tk->text()=="1")&&(ui->Teacher->isChecked()) &&(ui->Mk->text()=="1")){
    hide();
    }
    else if(ui->Student->isChecked()){
        QMessageBox msgBox(QMessageBox::Information,"Thông báo","Chức năng hiện tại chưa được phát triển",QMessageBox::Ok);
        msgBox.exec();
    }

    else{
        QMessageBox msgBox(QMessageBox::Critical,"Cảnh báo","Sai mật khẩu hoặc tài khoản\nBạn có muốn nhập lại?",QMessageBox::Ok);
        msgBox.exec();
    }


}

void Check::on_commandLinkButton_clicked()
{
    QMessageBox msgBox(QMessageBox::Information,"Thông báo","Hãy cố nhớ lại nó",QMessageBox::Ok);
    msgBox.exec();
}

void Check::on_pushButton_2_clicked()
{
    exit(1);
}
