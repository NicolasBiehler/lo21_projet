#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QObject::connect(ui->num0,SIGNAL(clicked()),this,SLOT(num0Pressed()));
    QObject::connect(ui->num1,SIGNAL(clicked()),this,SLOT(num1Pressed()));
    QObject::connect(ui->num2,SIGNAL(clicked()),this,SLOT(num2Pressed()));
    QObject::connect(ui->num3,SIGNAL(clicked()),this,SLOT(num3Pressed()));
    QObject::connect(ui->num4,SIGNAL(clicked()),this,SLOT(num4Pressed()));
    QObject::connect(ui->num5,SIGNAL(clicked()),this,SLOT(num5Pressed()));
    QObject::connect(ui->num6,SIGNAL(clicked()),this,SLOT(num6Pressed()));
    QObject::connect(ui->num7,SIGNAL(clicked()),this,SLOT(num7Pressed()));
    QObject::connect(ui->num8,SIGNAL(clicked()),this,SLOT(num8Pressed()));
    QObject::connect(ui->num9,SIGNAL(clicked()),this,SLOT(num9Pressed()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::num0Pressed(){
    ui->inputLine->insert("0");
}

void MainWindow::num1Pressed(){
    ui->inputLine->insert("1");
}

void MainWindow::num2Pressed(){
    ui->inputLine->insert("2");
}

void MainWindow::num3Pressed(){
    ui->inputLine->insert("3");
}

void MainWindow::num4Pressed(){
    ui->inputLine->insert("4");
}

void MainWindow::num5Pressed(){
    ui->inputLine->insert("5");
}

void MainWindow::num6Pressed(){
    ui->inputLine->insert("6");
}
void MainWindow::num7Pressed(){
    ui->inputLine->insert("7");
}

void MainWindow::num8Pressed(){
    ui->inputLine->insert("8");
}

void MainWindow::num9Pressed(){
    ui->inputLine->insert("9");
}
