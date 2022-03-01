/********************************************************************************
** Form generated from reading UI file 'function.ui'
**
** Created by: Qt User Interface Compiler version 5.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FUNCTION_H
#define UI_FUNCTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Function
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *Function)
    {
        if (Function->objectName().isEmpty())
            Function->setObjectName(QStringLiteral("Function"));
        Function->resize(400, 300);
        label = new QLabel(Function);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(45, 40, 41, 20));
        label_2 = new QLabel(Function);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(45, 80, 41, 20));
        label_3 = new QLabel(Function);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(150, 10, 231, 20));
        pushButton = new QPushButton(Function);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(110, 40, 141, 23));
        pushButton_2 = new QPushButton(Function);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(110, 80, 141, 23));

        retranslateUi(Function);

        QMetaObject::connectSlotsByName(Function);
    } // setupUi

    void retranslateUi(QDialog *Function)
    {
        Function->setWindowTitle(QApplication::translate("Function", "Dialog", 0));
        label->setText(QApplication::translate("Function", "1.", 0));
        label_2->setText(QApplication::translate("Function", "2.", 0));
        label_3->setText(QApplication::translate("Function", "Danh s\303\241ch c\303\241c ch\341\273\251c n\304\203ng", 0));
        pushButton->setText(QApplication::translate("Function", "Th\303\252m sinh vi\303\252n", 0));
        pushButton_2->setText(QApplication::translate("Function", "X\303\263a sinh vi\303\252n", 0));
    } // retranslateUi

};

namespace Ui {
    class Function: public Ui_Function {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FUNCTION_H
