/********************************************************************************
** Form generated from reading UI file 'finder.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINDER_H
#define UI_FINDER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Finder
{
public:
    QWidget *centralwidget;
    QLineEdit *lineEdit;
    QLabel *label;
    QPushButton *pushButton;
    QTextEdit *textEdit;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Finder)
    {
        if (Finder->objectName().isEmpty())
            Finder->setObjectName(QString::fromUtf8("Finder"));
        Finder->resize(373, 267);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Images/icons/search-file-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        Finder->setWindowIcon(icon);
        centralwidget = new QWidget(Finder);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(60, 10, 91, 20));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(9, 9, 42, 16));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(284, 9, 75, 23));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(9, 38, 341, 163));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(200, 10, 75, 23));
        Finder->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Finder);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 373, 25));
        Finder->setMenuBar(menubar);
        statusbar = new QStatusBar(Finder);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Finder->setStatusBar(statusbar);

        retranslateUi(Finder);

        QMetaObject::connectSlotsByName(Finder);
    } // setupUi

    void retranslateUi(QMainWindow *Finder)
    {
        Finder->setWindowTitle(QCoreApplication::translate("Finder", "Text Finder", nullptr));
        label->setText(QCoreApplication::translate("Finder", "Keyword", nullptr));
        pushButton->setText(QCoreApplication::translate("Finder", "Find >", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Finder", "Find<", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Finder: public Ui_Finder {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDER_H
