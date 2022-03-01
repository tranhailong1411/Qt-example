#ifndef TABLESV_H
#define TABLESV_H

#include <QWidget>
#include<QString>
#include<QVector>
namespace Ui {
class TableSv;
}
class Students;
class TableSv : public QWidget
{
    Q_OBJECT
    
public:
    explicit TableSv(QWidget *parent = 0);
    ~TableSv();
    void Show1(QVector<Students*> student,int count1);
    void Show2(QVector<Students*> student,int count1);
    void Show3(QVector<Students*> student,int count1);
    void Show4(QVector<Students*> student,int count1);
private slots:
    void on_pushButton_released();


private:
    Ui::TableSv *ui;
};

#endif // TABLESV_H
