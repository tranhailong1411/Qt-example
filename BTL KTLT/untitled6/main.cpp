#include "mystudents.h"
#include"tablesv.h"
#include"check.h"
#include"search.h"
#include <QApplication>
int main(int argc, char *argv[])
{

    QApplication p(argc, argv);
    MyStudents w;
    Check a;
    w.AddStudent("20193305","Hải LongA","Nam","14/11/2001",3.2,"A1");
    w.AddStudent("20193305","Hải LongB","Nam","14/11/2001",30,"A2");
    w.AddStudent("20193303","Hải LongC","Nam","14/11/2001",20,"A1");
    w.AddStudent("20193301","Hải LongD","Nam","14/11/2001",10,"A1");
    w.AddStudent("20193302","Hải LongE","NỮ","14/11/2001",5,"A2");
    w.AddStudent("20193306","Hải LongF","Nam","14/11/2001",4,"A1");
    w.show();
    a.show();
    return p.exec();
}
