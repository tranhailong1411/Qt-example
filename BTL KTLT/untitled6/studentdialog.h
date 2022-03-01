#ifndef STUDENTDIALOG_H
#define STUDENTDIALOG_H

#include <QDialog>

namespace Ui {
class StudentDialog;
}

class Students;
class StudentDialog : public QDialog
{
    Q_OBJECT
    
public:
    explicit StudentDialog(QWidget *parent = 0);
    ~StudentDialog();
    void Show(Students* student);

private slots:
    void on_pushButton_released();

    void on_pushButton_2_released();

private:
    Ui::StudentDialog *ui;
    Students* m_Student;
};

#endif // STUDENTDIALOG_H
