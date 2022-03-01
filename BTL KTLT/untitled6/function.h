#ifndef FUNCTION_H
#define FUNCTION_H
#include <QDialog>
#include "students.h"
#include<QString>
#include<QVector>
namespace Ui {
class Function;
}
class QListWidgetItem;
class StudentDialog;
class Function : public QDialog
{
    Q_OBJECT
    
public:
    explicit Function(QWidget *parent = 0);
    ~Function();
private slots:
private:
    Ui::Function *ui;
    QVector<Students*> m_Students;
    StudentDialog* m_StudentDialog;
};

#endif // FUNCTION_H
