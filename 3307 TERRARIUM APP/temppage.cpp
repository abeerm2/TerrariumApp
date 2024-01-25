#include "temppage.h"
#include "ui_temppage.h"

TempPage::TempPage(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TempPage)
{
    ui->setupUi(this);
}

TempPage::~TempPage()
{
    delete ui;
}

void TempPage::on_dial_valueChanged(int value)
{
    ui->label_dial_value->setText(QString::number(value));
}