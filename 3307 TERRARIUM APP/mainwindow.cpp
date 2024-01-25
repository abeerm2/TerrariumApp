#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "qmessagebox.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_Login_clicked()
{
    QString UserName = ui->lineEdit_User_Name->text();
    QString Password = ui->lineEdit_Password->text();
    if (UserName == "Guest" && Password == "Guest")
    {
        QMessageBox::information(this, "Terrarium Manager", "Login Successful");
        MainPage *mainpage = new MainPage();
        mainpage->show();
    }
    else
    {
        QMessageBox::warning(this,"Terrarium Manager", "Please enter valid username or passowrd");
    }
}

void MainWindow::on_pushButton_Exit_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Terrarium Manager", "Are you sure you want to close the application?", QMessageBox::Yes | QMessageBox::No);
    if (reply == QMessageBox::Yes)
    {
        QApplication::quit();
    }
}


void MainWindow::on_pushButton_New_Profile_clicked()
{

}

