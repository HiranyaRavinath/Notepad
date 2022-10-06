#ifndef FINDER_H
#define FINDER_H

#include <QMainWindow>

namespace Ui {
class Finder;
}

class Finder : public QMainWindow
{
    Q_OBJECT

public:
    explicit Finder(QWidget *parent = 0);
     Finder(QWidget *parent = 0 , const QString word="");//intializing Finder method and creating parameters
    ~Finder();

private slots:
    void on_pushButton_clicked(); //initializing pushButton(find forward>)

    void on_pushButton_2_clicked();//initializing pushButton(find backward<)

private:
    QString word; //word variable initialize as a String variable
    Ui::Finder *ui;
};

#endif // FINDER_H
