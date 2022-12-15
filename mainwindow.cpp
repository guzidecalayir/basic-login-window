#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QPixmap>
#include <QApplication>


MainWindow::MainWindow(QWidget *parent):
     QMainWindow(parent) ,
     ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/images/images/login_icon.png");
    ui->label_pic->setPixmap(pix.scaled(100,100,Qt::KeepAspectRatio));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_Login_clicked()
{
    QString username = ui->lineEdit_userName->text();
    QString password = ui->lineEdit_password->text();

    if(username == "test" && password == "test"){
        QMessageBox::information(this, "Login" , "User name and password is correct");
        hide();
        secDialog = new SecDialog(this);
        secDialog->show();
    }
    else {
        QMessageBox::warning(this , "Login" , "User name and password is not correct.");
    }
}


void MainWindow::on_action_close_triggered()
{
    QApplication::quit();

}



void MainWindow::on_pushButton_comboBox_clicked()
{
    comboBox = new ComboBox();
    comboBox->show();
}

