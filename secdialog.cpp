#include "secdialog.h"
#include "ui_secdialog.h"
#include <QMessageBox>

SecDialog::SecDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SecDialog)
{
    ui->setupUi(this);
}

SecDialog::~SecDialog()
{
    delete ui;
}

void SecDialog::on_pushButton_approve_clicked()
{
   if(ui->checkBox->isChecked()){

       if(ui->radioButton_yes->isChecked()){

       QMessageBox::information(this, "Login", "You are logged in and an e-mail will sent.");

       }
       else if(ui->radioButton_no->isChecked()){

       QMessageBox::information(this, "Login", "You are logged in and an e-mail will not sent.");

       }
       else{

       QMessageBox::information(this, "Login", "You are logged in and e-mail option is not indicated.");

       }
   }

   else{

       QMessageBox::critical(this, "Login", "Please approve the terms and policies.");

   }
}


