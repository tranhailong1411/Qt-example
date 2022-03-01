/********************************************************************************
** Form generated from reading UI file 'search.ui'
**
** Created by: Qt User Interface Compiler version 5.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCH_H
#define UI_SEARCH_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Search
{
public:
    QLabel *label;
    QLabel *label_2;
    QFrame *line;
    QListWidget *listWidget1;
    QFrame *line_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QLabel *label_4;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *name;
    QLineEdit *mssv;

    void setupUi(QDialog *Search)
    {
        if (Search->objectName().isEmpty())
            Search->setObjectName(QStringLiteral("Search"));
        Search->resize(698, 478);
        label = new QLabel(Search);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 20, 311, 41));
        label_2 = new QLabel(Search);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(450, 30, 271, 21));
        line = new QFrame(Search);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(362, 0, 21, 411));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        listWidget1 = new QListWidget(Search);
        listWidget1->setObjectName(QStringLiteral("listWidget1"));
        listWidget1->setGeometry(QRect(400, 60, 271, 311));
        line_2 = new QFrame(Search);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(0, 400, 701, 20));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        pushButton = new QPushButton(Search);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(590, 430, 91, 31));
        pushButton_2 = new QPushButton(Search);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(270, 220, 75, 23));
        layoutWidget = new QWidget(Search);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 110, 321, 81));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout->addWidget(label_4);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        name = new QLineEdit(layoutWidget);
        name->setObjectName(QStringLiteral("name"));

        verticalLayout_2->addWidget(name);

        mssv = new QLineEdit(layoutWidget);
        mssv->setObjectName(QStringLiteral("mssv"));

        verticalLayout_2->addWidget(mssv);


        horizontalLayout->addLayout(verticalLayout_2);


        retranslateUi(Search);

        QMetaObject::connectSlotsByName(Search);
    } // setupUi

    void retranslateUi(QDialog *Search)
    {
        Search->setWindowTitle(QApplication::translate("Search", "Dialog", 0));
        label->setText(QApplication::translate("Search", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; text-decoration: underline;\">NH\341\272\254P TH\303\224NG TIN C\341\272\246N T\303\214M KI\341\272\276M</span></p></body></html>", 0));
        label_2->setText(QApplication::translate("Search", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; text-decoration: underline;\">K\341\272\276T QU\341\272\242 T\303\214M KI\341\272\276M</span></p></body></html>", 0));
        pushButton->setText(QApplication::translate("Search", "Cancel", 0));
        pushButton_2->setText(QApplication::translate("Search", "T\303\254m ki\341\272\277m", 0));
        label_3->setText(QApplication::translate("Search", "T\303\252n", 0));
        label_4->setText(QApplication::translate("Search", "MSSV", 0));
    } // retranslateUi

};

namespace Ui {
    class Search: public Ui_Search {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCH_H
