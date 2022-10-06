#include "finder.h"
#include "ui_finder.h"
#include "notepad.h"

#include <QFile>
#include <QLineEdit>
#include <QMessageBox>
#include <QPushButton>
#include <QTextEdit>

#include <QVBoxLayout>

QString abc ;

Finder::Finder(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Finder)
{
    ui->setupUi(this);

}

Finder::Finder(QWidget *parent, const QString word):
    QMainWindow(parent),
    ui(new Ui::Finder),word(word)
{
   ui->setupUi(this);
   abc = word; //assigning word variable into abc String variable
}

Finder::~Finder()
{
    delete ui;
}

//find forward button
void Finder::on_pushButton_clicked()
{
    if (ui->textEdit->toPlainText().isEmpty()) {
        //when notepad textedit is empty,set abc variable into textedit
        ui->textEdit->setText(abc);

    }

    ui->textEdit->find(ui->lineEdit->text()); //find abc variable in here

}

//find backward button
void Finder::on_pushButton_2_clicked()
{
    if (ui->textEdit->toPlainText().isEmpty()) {
         //when notepad textedit is empty,set abc variable into textedit
            ui->textEdit->setText(abc);
        }

    ui->textEdit->find(ui->lineEdit->text(),QTextDocument::FindBackward);//find backward abc variable in here
}
