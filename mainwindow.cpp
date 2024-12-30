#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QString"
#include "QPushButton"
#include "QObject"
#include "QMainWindow"
#include <iostream>

QString viraj;

int vir1;
int vir2;
char znak;
double ans;


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{



    ui->setupUi(this);
    ui->tab->setReadOnly(true);
}

MainWindow::~MainWindow()
{

    delete ui;
}


void MainWindow::on_one_clicked()
{
    viraj += "1";
    ui->tab->setText(viraj);
}


void MainWindow::on_two_clicked()
{
    viraj += "2";
    ui->tab->setText(viraj);
}


void MainWindow::on_three_clicked()
{
    viraj += "3";
    ui->tab->setText(viraj);
}


void MainWindow::on_four_clicked()
{
    viraj += "4";
    ui->tab->setText(viraj);
}


void MainWindow::on_five_clicked()
{
    viraj += "5";
    ui->tab->setText(viraj);
}


void MainWindow::on_six_clicked()
{
    viraj += "6";
    ui->tab->setText(viraj);
}


void MainWindow::on_seven_clicked()
{
    viraj += "7";
    ui->tab->setText(viraj);
}


void MainWindow::on_eight_clicked()
{
    viraj += "8";
    ui->tab->setText(viraj);
}


void MainWindow::on_nine_clicked()
{
    viraj += "9";
    ui->tab->setText(viraj);
}


void MainWindow::on_nul_clicked()
{
    viraj += "0";
    ui->tab->setText(viraj);
}





void MainWindow::on_CE_clicked()
{
    viraj = NULL;
    ui->tab->setText("0");
    znak = NULL;
    vir1 = NULL;
}


void MainWindow::on_back_clicked()
{
    viraj.resize(viraj.size() - 1);
    ui->tab->setText(viraj);

}


void MainWindow::on_plus_clicked()
{
    vir1 = viraj.toInt();
    znak = '+';
    viraj = NULL;
    ui->tab->setText("0");
}


void MainWindow::on_minus_clicked()
{
    vir1 = viraj.toInt();
    znak = '-';
    viraj = NULL;
    ui->tab->setText("0");
}


void MainWindow::on_umn_clicked()
{
    vir1 = viraj.toInt();
    znak = 'X';
    viraj = NULL;
    ui->tab->setText("0");
}


void MainWindow::on_del_clicked()
{
    vir1 = viraj.toInt();
    znak = '/';
    viraj = NULL;
    ui->tab->setText("0");
}


void MainWindow::on_square_clicked()
{
    vir1= viraj.toInt();
    ans = vir1*vir1;


    viraj = NULL;
    ui->tab->setText(QString("%1").arg(ans));
}


void MainWindow::on_ans_clicked()
{
    vir2= viraj.toInt();
    if(znak == '+'){
        ans = vir1 + vir2;
    }
    if (znak == '-') {
        ans = vir1 - vir2;
    }
    if(znak == 'X'){
        ans = vir1 * vir2;
    }
    if(znak == '/'){
        ans = vir1/vir2;
    }
    viraj = NULL;
ui->tab->setText(QString("%1").arg(ans));

}

