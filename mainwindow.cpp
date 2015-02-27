/* Первая попытка создать адскую машину по считыванию файлов не завершена. за основу был взят формат *.txt
 пока что создается только форма,и она умеет открывать директорию и считывать файлы, но криво.Не можем пока
сделать проверку на валидность,не успели доделать.*/

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QLabel>
#include <QPushButton>
#include <QFile>
#include <QList>
#include <QTextEdit>
#include <QString>
#include <QFileDialog>
#include <QTextStream>




MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QString dir = QFileDialog::getExistingDirectory(this, tr("Open Directory"),
                                                    "",
                                                    QFileDialog::ShowDirsOnly
                                                    | QFileDialog::DontResolveSymlinks);

}

void MainWindow::on_pushButton_2_clicked()
{
   /* QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"), //getOpenFileNames попробовать?
                                                    "",
                                                    tr("Файл (*.txt)"));*/
   /* QFile x;
        QDir::setCurrent("");
        x.setFileName("*.txt");
        x.open(QIODevice::ReadWrite);//отчаянно пытается читать тхтюшники
        QTextStream stream(&x);*/

    QFile x;
        x.setFileName("*.txt");
        x.open(QIODevice::ReadWrite);
        QTextStream stream(&x);
}

void MainWindow::on_textEdit_textChanged()
{
    //QString str=ui->textEdit->toPlainText();
    //QStringList strList=str.split('\n');
   // str=strList.at(1);
    //QTextEdit *test = new QTextEdit("нужная строка");
    //QString temp = test->getText();
    // temp содержит значение "нужная строка"
    //QString *temp = test->getText();

}
