/********************************************************************************
** Form generated from reading UI file 'notepad.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTEPAD_H
#define UI_NOTEPAD_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Notepad
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionSave_As;
    QAction *actionPrint;
    QAction *actionCopy;
    QAction *actionCut;
    QAction *actionPaste;
    QAction *actionDelete;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionFind;
    QAction *actionBold_2;
    QAction *actionView_Help;
    QAction *actionZoomIn;
    QAction *actionZoomOut;
    QAction *actionItalic_3;
    QAction *actionUnderline;
    QAction *actionLeft;
    QAction *actionRight;
    QAction *actionJustify;
    QAction *actionCenter;
    QAction *actionColor;
    QAction *actionExit;
    QAction *actionTime_Date;
    QAction *actionFont;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QTextEdit *textEdit;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuFormat;
    QMenu *menuView;
    QMenu *menuHelp;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *Notepad)
    {
        if (Notepad->objectName().isEmpty())
            Notepad->setObjectName(QString::fromUtf8("Notepad"));
        Notepad->resize(819, 628);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Images/icons/notepad-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        Notepad->setWindowIcon(icon);
        actionNew = new QAction(Notepad);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Images/icons/add-file.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon1);
        actionOpen = new QAction(Notepad);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Images/icons/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon2);
        actionSave = new QAction(Notepad);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Images/icons/Save-icon (1).png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon3);
        actionSave_As = new QAction(Notepad);
        actionSave_As->setObjectName(QString::fromUtf8("actionSave_As"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Images/icons/Save-as-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave_As->setIcon(icon4);
        actionPrint = new QAction(Notepad);
        actionPrint->setObjectName(QString::fromUtf8("actionPrint"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/Images/icons/Printer-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPrint->setIcon(icon5);
        actionCopy = new QAction(Notepad);
        actionCopy->setObjectName(QString::fromUtf8("actionCopy"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/Images/icons/copy-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopy->setIcon(icon6);
        actionCut = new QAction(Notepad);
        actionCut->setObjectName(QString::fromUtf8("actionCut"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/Images/icons/cut-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCut->setIcon(icon7);
        actionPaste = new QAction(Notepad);
        actionPaste->setObjectName(QString::fromUtf8("actionPaste"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/Images/icons/Paste-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPaste->setIcon(icon8);
        actionDelete = new QAction(Notepad);
        actionDelete->setObjectName(QString::fromUtf8("actionDelete"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/Images/icons/delete-1-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDelete->setIcon(icon9);
        actionUndo = new QAction(Notepad);
        actionUndo->setObjectName(QString::fromUtf8("actionUndo"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/Images/icons/Undo-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUndo->setIcon(icon10);
        actionRedo = new QAction(Notepad);
        actionRedo->setObjectName(QString::fromUtf8("actionRedo"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/Images/icons/redo-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRedo->setIcon(icon11);
        actionFind = new QAction(Notepad);
        actionFind->setObjectName(QString::fromUtf8("actionFind"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/Images/icons/search-file-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFind->setIcon(icon12);
        actionBold_2 = new QAction(Notepad);
        actionBold_2->setObjectName(QString::fromUtf8("actionBold_2"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/Images/icons/Editing-Bold-icon (2).png"), QSize(), QIcon::Normal, QIcon::Off);
        actionBold_2->setIcon(icon13);
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        actionBold_2->setFont(font);
        actionView_Help = new QAction(Notepad);
        actionView_Help->setObjectName(QString::fromUtf8("actionView_Help"));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/Images/icons/Actions-help-about-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionView_Help->setIcon(icon14);
        actionZoomIn = new QAction(Notepad);
        actionZoomIn->setObjectName(QString::fromUtf8("actionZoomIn"));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/Images/icons/zoom-in-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionZoomIn->setIcon(icon15);
        actionZoomOut = new QAction(Notepad);
        actionZoomOut->setObjectName(QString::fromUtf8("actionZoomOut"));
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/Images/icons/zoom-out-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionZoomOut->setIcon(icon16);
        actionItalic_3 = new QAction(Notepad);
        actionItalic_3->setObjectName(QString::fromUtf8("actionItalic_3"));
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/Images/icons/Editing-Italic-icon (1).png"), QSize(), QIcon::Normal, QIcon::Off);
        actionItalic_3->setIcon(icon17);
        QFont font1;
        font1.setItalic(true);
        actionItalic_3->setFont(font1);
        actionUnderline = new QAction(Notepad);
        actionUnderline->setObjectName(QString::fromUtf8("actionUnderline"));
        QIcon icon18;
        icon18.addFile(QString::fromUtf8(":/Images/icons/Editing-Underline-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUnderline->setIcon(icon18);
        actionLeft = new QAction(Notepad);
        actionLeft->setObjectName(QString::fromUtf8("actionLeft"));
        QIcon icon19;
        icon19.addFile(QString::fromUtf8(":/Images/icons/Align-Right-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLeft->setIcon(icon19);
        actionRight = new QAction(Notepad);
        actionRight->setObjectName(QString::fromUtf8("actionRight"));
        QIcon icon20;
        icon20.addFile(QString::fromUtf8(":/Images/icons/Align-Left-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRight->setIcon(icon20);
        actionJustify = new QAction(Notepad);
        actionJustify->setObjectName(QString::fromUtf8("actionJustify"));
        QIcon icon21;
        icon21.addFile(QString::fromUtf8(":/Images/icons/Align-JustifyAll-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionJustify->setIcon(icon21);
        actionCenter = new QAction(Notepad);
        actionCenter->setObjectName(QString::fromUtf8("actionCenter"));
        QIcon icon22;
        icon22.addFile(QString::fromUtf8(":/Images/icons/Align-Center-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCenter->setIcon(icon22);
        actionColor = new QAction(Notepad);
        actionColor->setObjectName(QString::fromUtf8("actionColor"));
        QIcon icon23;
        icon23.addFile(QString::fromUtf8(":/Images/icons/Apps-Color-D-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionColor->setIcon(icon23);
        actionExit = new QAction(Notepad);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionTime_Date = new QAction(Notepad);
        actionTime_Date->setObjectName(QString::fromUtf8("actionTime_Date"));
        QIcon icon24;
        icon24.addFile(QString::fromUtf8(":/Images/icons/calendar-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionTime_Date->setIcon(icon24);
        actionFont = new QAction(Notepad);
        actionFont->setObjectName(QString::fromUtf8("actionFont"));
        QIcon icon25;
        icon25.addFile(QString::fromUtf8(":/Images/icons/Fonts-Folder-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFont->setIcon(icon25);
        centralWidget = new QWidget(Notepad);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        gridLayout->addWidget(textEdit, 0, 0, 1, 1);

        Notepad->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Notepad);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 819, 25));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuFormat = new QMenu(menuBar);
        menuFormat->setObjectName(QString::fromUtf8("menuFormat"));
        menuView = new QMenu(menuBar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        Notepad->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Notepad);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Notepad->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Notepad);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Notepad->setStatusBar(statusBar);
        toolBar = new QToolBar(Notepad);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        Notepad->addToolBar(Qt::LeftToolBarArea, toolBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuFormat->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuBar->addAction(menuView->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpen);
        menuFile->addSeparator();
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSave_As);
        menuFile->addSeparator();
        menuFile->addAction(actionPrint);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionCut);
        menuEdit->addAction(actionPaste);
        menuEdit->addAction(actionDelete);
        menuEdit->addSeparator();
        menuEdit->addAction(actionUndo);
        menuEdit->addAction(actionRedo);
        menuEdit->addAction(actionFind);
        menuEdit->addSeparator();
        menuEdit->addAction(actionTime_Date);
        menuFormat->addAction(actionFont);
        menuFormat->addSeparator();
        menuFormat->addSeparator();
        menuFormat->addAction(actionLeft);
        menuFormat->addAction(actionCenter);
        menuFormat->addAction(actionRight);
        menuFormat->addAction(actionJustify);
        menuFormat->addSeparator();
        menuFormat->addAction(actionColor);
        menuView->addAction(actionZoomIn);
        menuView->addAction(actionZoomOut);
        menuHelp->addAction(actionView_Help);
        mainToolBar->addAction(actionNew);
        mainToolBar->addAction(actionOpen);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionSave);
        mainToolBar->addAction(actionSave_As);
        mainToolBar->addAction(actionPrint);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionCopy);
        mainToolBar->addAction(actionCut);
        mainToolBar->addAction(actionPaste);
        mainToolBar->addAction(actionDelete);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionUndo);
        mainToolBar->addAction(actionRedo);
        mainToolBar->addAction(actionFind);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionTime_Date);
        toolBar->addAction(actionFont);
        toolBar->addAction(actionColor);
        toolBar->addSeparator();
        toolBar->addAction(actionLeft);
        toolBar->addAction(actionCenter);
        toolBar->addAction(actionRight);
        toolBar->addAction(actionJustify);
        toolBar->addSeparator();
        toolBar->addAction(actionZoomIn);
        toolBar->addAction(actionZoomOut);

        retranslateUi(Notepad);

        QMetaObject::connectSlotsByName(Notepad);
    } // setupUi

    void retranslateUi(QMainWindow *Notepad)
    {
        Notepad->setWindowTitle(QCoreApplication::translate("Notepad", "Notepad", nullptr));
        actionNew->setText(QCoreApplication::translate("Notepad", "New", nullptr));
#if QT_CONFIG(shortcut)
        actionNew->setShortcut(QCoreApplication::translate("Notepad", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actionOpen->setText(QCoreApplication::translate("Notepad", "Open", nullptr));
#if QT_CONFIG(shortcut)
        actionOpen->setShortcut(QCoreApplication::translate("Notepad", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave->setText(QCoreApplication::translate("Notepad", "Save", nullptr));
#if QT_CONFIG(shortcut)
        actionSave->setShortcut(QCoreApplication::translate("Notepad", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave_As->setText(QCoreApplication::translate("Notepad", "Save As", nullptr));
        actionPrint->setText(QCoreApplication::translate("Notepad", "Print", nullptr));
#if QT_CONFIG(shortcut)
        actionPrint->setShortcut(QCoreApplication::translate("Notepad", "Ctrl+P", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCopy->setText(QCoreApplication::translate("Notepad", "Copy", nullptr));
#if QT_CONFIG(shortcut)
        actionCopy->setShortcut(QCoreApplication::translate("Notepad", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCut->setText(QCoreApplication::translate("Notepad", "Cut", nullptr));
#if QT_CONFIG(shortcut)
        actionCut->setShortcut(QCoreApplication::translate("Notepad", "Ctrl+X", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPaste->setText(QCoreApplication::translate("Notepad", "Paste", nullptr));
#if QT_CONFIG(shortcut)
        actionPaste->setShortcut(QCoreApplication::translate("Notepad", "Ctrl+V", nullptr));
#endif // QT_CONFIG(shortcut)
        actionDelete->setText(QCoreApplication::translate("Notepad", "Delete", nullptr));
#if QT_CONFIG(shortcut)
        actionDelete->setShortcut(QCoreApplication::translate("Notepad", "Del", nullptr));
#endif // QT_CONFIG(shortcut)
        actionUndo->setText(QCoreApplication::translate("Notepad", "Undo", nullptr));
#if QT_CONFIG(shortcut)
        actionUndo->setShortcut(QCoreApplication::translate("Notepad", "Ctrl+Z", nullptr));
#endif // QT_CONFIG(shortcut)
        actionRedo->setText(QCoreApplication::translate("Notepad", "Redo", nullptr));
#if QT_CONFIG(shortcut)
        actionRedo->setShortcut(QCoreApplication::translate("Notepad", "Ctrl+Y", nullptr));
#endif // QT_CONFIG(shortcut)
        actionFind->setText(QCoreApplication::translate("Notepad", "Find", nullptr));
#if QT_CONFIG(shortcut)
        actionFind->setShortcut(QCoreApplication::translate("Notepad", "Ctrl+F", nullptr));
#endif // QT_CONFIG(shortcut)
        actionBold_2->setText(QCoreApplication::translate("Notepad", "Bold", nullptr));
#if QT_CONFIG(tooltip)
        actionBold_2->setToolTip(QCoreApplication::translate("Notepad", "Bold", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionBold_2->setShortcut(QCoreApplication::translate("Notepad", "Ctrl+B", nullptr));
#endif // QT_CONFIG(shortcut)
        actionView_Help->setText(QCoreApplication::translate("Notepad", "About", nullptr));
        actionZoomIn->setText(QCoreApplication::translate("Notepad", "ZoomIn", nullptr));
#if QT_CONFIG(tooltip)
        actionZoomIn->setToolTip(QCoreApplication::translate("Notepad", "ZoomIn", nullptr));
#endif // QT_CONFIG(tooltip)
        actionZoomOut->setText(QCoreApplication::translate("Notepad", "ZoomOut", nullptr));
#if QT_CONFIG(tooltip)
        actionZoomOut->setToolTip(QCoreApplication::translate("Notepad", "ZoomOut", nullptr));
#endif // QT_CONFIG(tooltip)
        actionItalic_3->setText(QCoreApplication::translate("Notepad", "Italic", nullptr));
#if QT_CONFIG(shortcut)
        actionItalic_3->setShortcut(QCoreApplication::translate("Notepad", "Ctrl+I", nullptr));
#endif // QT_CONFIG(shortcut)
        actionUnderline->setText(QCoreApplication::translate("Notepad", "Underline", nullptr));
#if QT_CONFIG(shortcut)
        actionUnderline->setShortcut(QCoreApplication::translate("Notepad", "Ctrl+U", nullptr));
#endif // QT_CONFIG(shortcut)
        actionLeft->setText(QCoreApplication::translate("Notepad", "Align-Left", nullptr));
#if QT_CONFIG(shortcut)
        actionLeft->setShortcut(QCoreApplication::translate("Notepad", "Ctrl+L", nullptr));
#endif // QT_CONFIG(shortcut)
        actionRight->setText(QCoreApplication::translate("Notepad", "Align-Right", nullptr));
#if QT_CONFIG(shortcut)
        actionRight->setShortcut(QCoreApplication::translate("Notepad", "Ctrl+R", nullptr));
#endif // QT_CONFIG(shortcut)
        actionJustify->setText(QCoreApplication::translate("Notepad", "Justify", nullptr));
#if QT_CONFIG(shortcut)
        actionJustify->setShortcut(QCoreApplication::translate("Notepad", "Ctrl+J", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCenter->setText(QCoreApplication::translate("Notepad", "Center", nullptr));
#if QT_CONFIG(shortcut)
        actionCenter->setShortcut(QCoreApplication::translate("Notepad", "Ctrl+E", nullptr));
#endif // QT_CONFIG(shortcut)
        actionColor->setText(QCoreApplication::translate("Notepad", "Color", nullptr));
        actionExit->setText(QCoreApplication::translate("Notepad", "Exit", nullptr));
#if QT_CONFIG(shortcut)
        actionExit->setShortcut(QCoreApplication::translate("Notepad", "Ctrl+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        actionTime_Date->setText(QCoreApplication::translate("Notepad", "Time/Date", nullptr));
#if QT_CONFIG(shortcut)
        actionTime_Date->setShortcut(QCoreApplication::translate("Notepad", "F5", nullptr));
#endif // QT_CONFIG(shortcut)
        actionFont->setText(QCoreApplication::translate("Notepad", "Font", nullptr));
        menuFile->setTitle(QCoreApplication::translate("Notepad", "File", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("Notepad", "Edit", nullptr));
        menuFormat->setTitle(QCoreApplication::translate("Notepad", "Format", nullptr));
        menuView->setTitle(QCoreApplication::translate("Notepad", "View", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("Notepad", "Help", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("Notepad", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Notepad: public Ui_Notepad {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTEPAD_H
