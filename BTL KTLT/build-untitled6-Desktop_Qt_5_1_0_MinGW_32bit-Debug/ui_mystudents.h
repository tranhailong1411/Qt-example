/********************************************************************************
** Form generated from reading UI file 'mystudents.ui'
**
** Created by: Qt User Interface Compiler version 5.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYSTUDENTS_H
#define UI_MYSTUDENTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyStudents
{
public:
    QLabel *label;
    QFrame *line;
    QLabel *label_2;
    QListWidget *listWidget;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_3;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QCommandLinkButton *commandLinkButton;

    void setupUi(QWidget *MyStudents)
    {
        if (MyStudents->objectName().isEmpty())
            MyStudents->setObjectName(QStringLiteral("MyStudents"));
        MyStudents->resize(915, 531);
        label = new QLabel(MyStudents);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(210, 10, 211, 21));
        line = new QFrame(MyStudents);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(550, 0, 20, 531));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        label_2 = new QLabel(MyStudents);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(630, 10, 91, 21));
        listWidget = new QListWidget(MyStudents);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(50, 50, 481, 411));
        widget = new QWidget(MyStudents);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(610, 50, 291, 411));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_5 = new QPushButton(widget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setCursor(QCursor(Qt::OpenHandCursor));

        verticalLayout->addWidget(pushButton_5);

        pushButton_6 = new QPushButton(widget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setCursor(QCursor(Qt::OpenHandCursor));

        verticalLayout->addWidget(pushButton_6);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setCursor(QCursor(Qt::OpenHandCursor));

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setCursor(QCursor(Qt::OpenHandCursor));

        verticalLayout->addWidget(pushButton_2);

        pushButton_4 = new QPushButton(widget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setCursor(QCursor(Qt::OpenHandCursor));

        verticalLayout->addWidget(pushButton_4);

        pushButton_7 = new QPushButton(widget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setCursor(QCursor(Qt::OpenHandCursor));

        verticalLayout->addWidget(pushButton_7);

        pushButton_8 = new QPushButton(widget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));

        verticalLayout->addWidget(pushButton_8);

        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setCursor(QCursor(Qt::OpenHandCursor));

        verticalLayout->addWidget(pushButton_3);

        pushButton_9 = new QPushButton(widget);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));

        verticalLayout->addWidget(pushButton_9);

        pushButton_10 = new QPushButton(widget);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));

        verticalLayout->addWidget(pushButton_10);

        commandLinkButton = new QCommandLinkButton(widget);
        commandLinkButton->setObjectName(QStringLiteral("commandLinkButton"));
        commandLinkButton->setCursor(QCursor(Qt::ClosedHandCursor));

        verticalLayout->addWidget(commandLinkButton);

        label->raise();
        line->raise();
        label_2->raise();
        listWidget->raise();
        commandLinkButton->raise();
        pushButton_10->raise();
        pushButton_5->raise();

        retranslateUi(MyStudents);

        QMetaObject::connectSlotsByName(MyStudents);
    } // setupUi

    void retranslateUi(QWidget *MyStudents)
    {
        MyStudents->setWindowTitle(QApplication::translate("MyStudents", "MyStudents", 0));
        label->setText(QApplication::translate("MyStudents", "DANH S\303\201CH SINH VI\303\212N C\303\223 TH\341\273\202 S\341\273\254A \304\220\341\273\224I", 0));
        label_2->setText(QApplication::translate("MyStudents", "C\303\201C CH\341\273\250C N\304\202NG", 0));
        pushButton_5->setText(QApplication::translate("MyStudents", "Danh s\303\241ch A1", 0));
        pushButton_6->setText(QApplication::translate("MyStudents", "Danh s\303\241ch A2", 0));
        pushButton->setText(QApplication::translate("MyStudents", "Th\303\252m sinh vi\303\252n", 0));
        pushButton_2->setText(QApplication::translate("MyStudents", "X\303\263a sinh vi\303\252n", 0));
        pushButton_4->setText(QApplication::translate("MyStudents", "S\341\272\257p x\341\272\277p sinh vi\303\252n theo \304\221i\341\273\203m ", 0));
        pushButton_7->setText(QApplication::translate("MyStudents", "S\341\272\257p x\341\272\277p sinh vi\303\252n theo t\303\252n", 0));
        pushButton_8->setText(QApplication::translate("MyStudents", "T\303\254m ki\341\272\277m", 0));
        pushButton_3->setText(QApplication::translate("MyStudents", "In ra to\303\240n b\341\273\231 sinh vi\303\252n", 0));
        pushButton_9->setText(QApplication::translate("MyStudents", "L\341\272\245y data t\341\273\253 file", 0));
        pushButton_10->setText(QApplication::translate("MyStudents", "Xu\341\272\245t data ra file", 0));
        commandLinkButton->setText(QApplication::translate("MyStudents", "C\303\241c sinh vi\303\252n \304\221\341\273\247 \304\221i\341\273\201u\n"
" ki\341\273\207n nh\341\272\255n h\341\273\215c b\341\273\225ng ", 0));
    } // retranslateUi

};

namespace Ui {
    class MyStudents: public Ui_MyStudents {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYSTUDENTS_H
