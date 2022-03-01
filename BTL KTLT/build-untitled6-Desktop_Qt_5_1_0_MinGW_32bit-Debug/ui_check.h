/********************************************************************************
** Form generated from reading UI file 'check.ui'
**
** Created by: Qt User Interface Compiler version 5.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHECK_H
#define UI_CHECK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_Check
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton;
    QRadioButton *Teacher;
    QRadioButton *Student;
    QLabel *label_4;
    QLineEdit *Tk;
    QLineEdit *Mk;
    QCommandLinkButton *commandLinkButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *Check)
    {
        if (Check->objectName().isEmpty())
            Check->setObjectName(QStringLiteral("Check"));
        Check->resize(1067, 663);
        Check->setAutoFillBackground(false);
        label = new QLabel(Check);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(330, 130, 61, 16));
        label_2 = new QLabel(Check);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(330, 170, 61, 16));
        label_3 = new QLabel(Check);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(460, 0, 191, 111));
        label_3->setMaximumSize(QSize(191, 16777215));
        label_3->setAutoFillBackground(true);
        label_3->setTextFormat(Qt::RichText);
        label_3->setMargin(15);
        pushButton = new QPushButton(Check);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(654, 300, 91, 31));
        Teacher = new QRadioButton(Check);
        Teacher->setObjectName(QStringLiteral("Teacher"));
        Teacher->setGeometry(QRect(330, 240, 81, 18));
        Student = new QRadioButton(Check);
        Student->setObjectName(QStringLiteral("Student"));
        Student->setGeometry(QRect(330, 270, 81, 18));
        label_4 = new QLabel(Check);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(330, 210, 121, 16));
        Tk = new QLineEdit(Check);
        Tk->setObjectName(QStringLiteral("Tk"));
        Tk->setGeometry(QRect(420, 130, 251, 20));
        Mk = new QLineEdit(Check);
        Mk->setObjectName(QStringLiteral("Mk"));
        Mk->setGeometry(QRect(420, 170, 251, 20));
        commandLinkButton = new QCommandLinkButton(Check);
        commandLinkButton->setObjectName(QStringLiteral("commandLinkButton"));
        commandLinkButton->setGeometry(QRect(320, 300, 172, 41));
        pushButton_2 = new QPushButton(Check);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(774, 302, 91, 31));

        retranslateUi(Check);

        QMetaObject::connectSlotsByName(Check);
    } // setupUi

    void retranslateUi(QDialog *Check)
    {
        Check->setWindowTitle(QApplication::translate("Check", "Dialog", 0));
        label->setText(QApplication::translate("Check", "<html><head/><body><p><span style=\" font-weight:600;\">T\303\240i kho\341\272\243n</span></p></body></html>", 0));
        label_2->setText(QApplication::translate("Check", "<html><head/><body><p><span style=\" font-weight:600;\">M\341\272\255t kh\341\272\251u</span></p></body></html>", 0));
        label_3->setText(QApplication::translate("Check", "<html><head/><body><p><span style=\" font-size:14pt;\">\304\220\304\202NG NH\341\272\254P</span></p></body></html>", 0));
        pushButton->setText(QApplication::translate("Check", "Login", 0));
        Teacher->setText(QApplication::translate("Check", "Gi\303\241o vi\303\252n", 0));
        Student->setText(QApplication::translate("Check", "H\341\273\215c sinh", 0));
        label_4->setText(QApplication::translate("Check", "\304\220\304\203ng nh\341\272\255p v\341\273\233i t\306\260 c\303\241ch", 0));
        commandLinkButton->setText(QApplication::translate("Check", "Qu\303\252n m\341\272\255t kh\341\272\251u?", 0));
        pushButton_2->setText(QApplication::translate("Check", "Tho\303\241t", 0));
    } // retranslateUi

};

namespace Ui {
    class Check: public Ui_Check {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHECK_H
