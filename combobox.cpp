#include "combobox.h"
#include "ui_combobox.h"

ComboBox::ComboBox(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ComboBox)
{
    ui->setupUi(this);
    ui->comboBox->addItem("Invalid characters");
    ui->comboBox->addItem(":");
    ui->comboBox->addItem("_");
    ui->comboBox->addItem("=");
}

ComboBox::~ComboBox()
{
    delete ui;
}
