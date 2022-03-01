#ifndef TABLE_H
#define TABLE_H

#include <QWidget>

namespace Ui {
class table;
}
class Students;
class table : public QWidget
{
    Q_OBJECT
    
public:
    explicit table(QWidget *parent = 0);
    ~table();
     void Show1(QVector<Students*> student, int count1);
private:
    Ui::table *ui;
    Students* m_Student1;
};

#endif // TABLE_H
