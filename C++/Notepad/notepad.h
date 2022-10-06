#ifndef NOTEPAD_H
#define NOTEPAD_H

#include <QMainWindow>
#include <QtCore>
#include <QGridLayout>
#include <QFileDialog>
#include <QPushButton>
#include <QColorDialog>
#include <QFontDialog>
#include <QDate>
#include <QTime>
#include <QPainter>
#include <QtPrintSupport/QPrinter>
#include <QtPrintSupport/QPrintDialog>
#include <QMessageBox>

#include <finder.h>

namespace Ui {
class Notepad;
}

class Notepad : public QMainWindow
{
    Q_OBJECT

public:
    explicit Notepad(QWidget *parent = 0);
    ~Notepad();


private slots:
    //initializing actions
    void on_actionNew_triggered();

    void on_actionOpen_triggered();

    void on_actionSave_triggered();

    void on_actionSave_As_triggered();

    void on_actionCopy_triggered();

    void on_actionCut_triggered();

    void on_actionPaste_triggered();

    void on_actionUndo_triggered();

    void on_actionRedo_triggered();

    void on_actionDelete_triggered();

    void on_actionBold_2_triggered();

    void on_actionZoomIn_triggered();

    void on_actionZoomOut_triggered();

    void on_actionFind_triggered();

    void on_actionLeft_triggered();

    void on_actionRight_triggered();

    void on_actionCenter_triggered();

    void on_actionJustify_triggered();

    void on_actionColor_triggered();

    void on_actionFont_triggered();

    void on_actionTime_Date_triggered();

    void on_actionPrint_triggered();

    void on_actionView_Help_triggered();

    void on_actionExit_triggered();

private:
    Ui::Notepad *ui;
    QString mFilename; //mFilename variable initialize as a String variable
    Finder *finder; // initialize Finder
};

#endif // NOTEPAD_H
