 #include "notepad.h"
#include "ui_notepad.h"
#include "finder.h"


Notepad::Notepad(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Notepad)
{
    ui->setupUi(this);
    this->setCentralWidget(ui->textEdit);//set textedit as a central widget
}

Notepad::~Notepad()
{
    delete ui;
}

void Notepad::on_actionNew_triggered()
{
    mFilename = "";
    ui->textEdit->setPlainText("");
}

//this is open action method
void Notepad::on_actionOpen_triggered()
{
    QString file = QFileDialog::getOpenFileName(this,"Open a file");

    if(!file.isEmpty())
    {
        QFile sFile(file);
        if(sFile.open(QFile::ReadOnly | QFile::Text))
        {
            mFilename = file;
            QTextStream in (&sFile);
            QString text = in.readAll();
            sFile.close();

            ui->textEdit->setPlainText(text);
        }
    }
}

//this is save action method
void Notepad::on_actionSave_triggered()
{
    //Test for filename
    QFile sFile(mFilename);
    if(sFile.open(QFile::WriteOnly | QFile::Text))
    {
         QTextStream out(&sFile);

         out << ui->textEdit->toPlainText();

         sFile.flush();
         sFile.close();
    }
}

//this is save as action method
void Notepad::on_actionSave_As_triggered()
{
    QString file = QFileDialog::getSaveFileName(this,"Open a file");

    if(!file.isEmpty())
    {
       mFilename = file;
       on_actionSave_triggered();
    }
}

//this is copy action method
void Notepad::on_actionCopy_triggered()
{
    ui->textEdit->copy();
}

//this is cut action method
void Notepad::on_actionCut_triggered()
{
    ui->textEdit->cut();
}

//this is paste action method
void Notepad::on_actionPaste_triggered()
{
    ui->textEdit->paste();
}

//this is undo action method
void Notepad::on_actionUndo_triggered()
{
    ui->textEdit->undo();
}

//this is redo action method
void Notepad::on_actionRedo_triggered()
{
    ui->textEdit->redo();
}

//this is delete action method
void Notepad::on_actionDelete_triggered()
{
   ui->textEdit->clear();
}

//unwanted action
void Notepad::on_actionBold_2_triggered()
{

}

//this is zoomin action method
void Notepad::on_actionZoomIn_triggered()
{
    ui->textEdit->zoomIn(4);
}

//this is zoomout action method
void Notepad::on_actionZoomOut_triggered()
{
    ui->textEdit->zoomOut(3);
}

//this is word find action method
void Notepad::on_actionFind_triggered()
{
    QString word = ui->textEdit->toPlainText();
    finder = new Finder(this,word);
    finder->show();
}

//this is set alignment to left action method
void Notepad::on_actionLeft_triggered()
{
   ui->textEdit->setAlignment(Qt::AlignLeft);
}

//this is set alignment to right action method
void Notepad::on_actionRight_triggered()
{
   ui->textEdit->setAlignment(Qt::AlignRight);
}

//this is set alignment to center action method
void Notepad::on_actionCenter_triggered()
{
   ui->textEdit->setAlignment(Qt::AlignCenter);
}

//this is set alignment justify action method
void Notepad::on_actionJustify_triggered()
{
   ui->textEdit->setAlignment(Qt::AlignJustify);
}

//this is set font color action method
void Notepad::on_actionColor_triggered()
{
    QColor color = QColorDialog::getColor(Qt::black, this );
          if( color.isValid() )
          {
             ui->textEdit->setTextColor(color.name());// assigning the selected color into text
          }
}

//this is set font,font styles, size to text action method
void Notepad::on_actionFont_triggered()
{
    bool ok;
      QFont font = QFontDialog::getFont(
                         &ok,
                         QFont( "Arial", 9,50 ),
                         this,
                         tr("Pick a font") );
         if( ok )
         {
             ui->textEdit->setFontPointSize(font.pointSize());

             ui->textEdit->setFontFamily(font.family());

             if (font.style() == 1) {
                  ui->textEdit->setFontItalic(true);
             }else {
                 ui->textEdit->setFontItalic(false);
             }

             if (font.underline() == true) {
                 ui->textEdit->setFontUnderline(true);
             }else {
                 ui->textEdit->setFontUnderline(false);
             }
         }
}

//this is set date/time action method
void Notepad::on_actionTime_Date_triggered()
{
    QDate cd = QDate::currentDate();
        QTime ct = QTime::currentTime();

        ui->textEdit->setText(cd.toString() +" "+ ct.toString());
}

//this is text file print action method
void Notepad::on_actionPrint_triggered()
{
    QPrinter printer;
        QPainter painter;
        QString text;

           QPrintDialog *dialog = new QPrintDialog(&printer);
           dialog->setWindowTitle("Print Document");

           if (dialog->exec() != QDialog::Accepted)

             text = ui->textEdit->toPlainText();

           painter.begin(&printer);

           painter.drawText(100, 100, 500, 500, Qt::AlignLeft|Qt::AlignTop,text );

           painter.end();
}

//this is get help action method
void Notepad::on_actionView_Help_triggered()
{
   QMessageBox::about(this, tr("About"), tr("This Notepad is a simple text editor software program that allow users to create documents. This Notepad has basic tools which are used in modern text editor programs "
                                            "\nIf you are viewing this document in the textedit example, you can edit this document to explore Qt's rich text editing features.\n"
                                            "\nWe have included some comments in each of the following sections to encourage you to experiment.\n"
                                            "\nFont and Paragraph Styles\n"
                                            "\nQTextEdit supports bold, italic, and underlined font styles, and can display multicolored text.\n"
                                            "\nFont families such as Times New Roman and Courier can also be used directly.\n"
                                            "\nYou can find anyword in your text using Finder.\n"
                                            "\nParagraphs can be formatted so that the text is left-aligned, right-aligned, centered, or fully justified.\n"
                                            "\nTry changing the alignment of some text and resize the editor to see how the text layout changes.\n"

                        ));

}

//this is exit action method
void Notepad::on_actionExit_triggered()
{
    this->close();
}
