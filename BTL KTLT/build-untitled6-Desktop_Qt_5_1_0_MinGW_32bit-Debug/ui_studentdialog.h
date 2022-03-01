/********************************************************************************
** Form generated from reading UI file 'studentdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTDIALOG_H
#define UI_STUDENTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StudentDialog
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *name;
    QLineEdit *date;
    QLineEdit *class_2;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *mssv1;
    QLineEdit *gender1;
    QLineEdit *Cpa1;

    void setupUi(QDialog *StudentDialog)
    {
        if (StudentDialog->objectName().isEmpty())
            StudentDialog->setObjectName(QStringLiteral("StudentDialog"));
        StudentDialog->resize(400, 300);
        layoutWidget = new QWidget(StudentDialog);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(50, 40, 301, 101));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        name = new QLineEdit(layoutWidget);
        name->setObjectName(QStringLiteral("name"));

        verticalLayout_2->addWidget(name);

        date = new QLineEdit(layoutWidget);
        date->setObjectName(QStringLiteral("date"));

        verticalLayout_2->addWidget(date);

        class_2 = new QLineEdit(layoutWidget);
        class_2->setObjectName(QStringLiteral("class_2"));

        verticalLayout_2->addWidget(class_2);


        horizontalLayout->addLayout(verticalLayout_2);

        layoutWidget1 = new QWidget(StudentDialog);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(60, 260, 281, 25));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(layoutWidget1);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_2->addWidget(pushButton);

        pushButton_2 = new QPushButton(layoutWidget1);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout_2->addWidget(pushButton_2);

        label_5 = new QLabel(StudentDialog);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(50, 150, 46, 14));
        label_6 = new QLabel(StudentDialog);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(50, 210, 46, 14));
        label_7 = new QLabel(StudentDialog);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(50, 180, 46, 14));
        mssv1 = new QLineEdit(StudentDialog);
        mssv1->setObjectName(QStringLiteral("mssv1"));
        mssv1->setGeometry(QRect(120, 150, 231, 20));
        gender1 = new QLineEdit(StudentDialog);
        gender1->setObjectName(QStringLiteral("gender1"));
        gender1->setGeometry(QRect(120, 180, 231, 20));
        Cpa1 = new QLineEdit(StudentDialog);
        Cpa1->setObjectName(QStringLiteral("Cpa1"));
        Cpa1->setGeometry(QRect(120, 210, 231, 20));

        retranslateUi(StudentDialog);

        QMetaObject::connectSlotsByName(StudentDialog);
    } // setupUi

    void retranslateUi(QDialog *StudentDialog)
    {
        StudentDialog->setWindowTitle(QApplication::translate("StudentDialog", "Dialog", 0));
        label->setText(QApplication::translate("StudentDialog", "T\303\252n sinh vi\303\252n:", 0));
        label_2->setText(QApplication::translate("StudentDialog", "Ng\303\240y sinh", 0));
        label_3->setText(QApplication::translate("StudentDialog", "L\341\273\233p", 0));
        pushButton->setText(QApplication::translate("StudentDialog", "Ok", 0));
        pushButton_2->setText(QApplication::translate("StudentDialog", "Cancel", 0));
        label_5->setText(QApplication::translate("StudentDialog", "MSSV", 0));
        label_6->setText(QApplication::translate("StudentDialog", "CPA", 0));
        label_7->setText(QApplication::translate("StudentDialog", "Gi\341\273\233i t\303\255nh", 0));
    } // retranslateUi

};

namespace Ui {
    class StudentDialog: public Ui_StudentDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTDIALOG_H
