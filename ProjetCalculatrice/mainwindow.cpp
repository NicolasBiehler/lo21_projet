#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "onglet.h"

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
    QObject::connect(ui->sinButton,SIGNAL(clicked()),this,SLOT(SINPressed()));
    QObject::connect(ui->sinhButton,SIGNAL(clicked()),this,SLOT(SINHPressed()));
    QObject::connect(ui->cosButton,SIGNAL(clicked()),this,SLOT(COSPressed()));
    QObject::connect(ui->coshButton,SIGNAL(clicked()),this,SLOT(COSHPressed()));
    QObject::connect(ui->tanButton,SIGNAL(clicked()),this,SLOT(TANPressed()));
    QObject::connect(ui->tanhButton,SIGNAL(clicked()),this,SLOT(TANHPressed()));
    QObject::connect(ui->lnButton,SIGNAL(clicked()),this,SLOT(LNPressed()));
    QObject::connect(ui->logButton,SIGNAL(clicked()),this,SLOT(LOGPressed()));
    QObject::connect(ui->cubeButton,SIGNAL(clicked()),this,SLOT(CUBEPressed()));
    QObject::connect(ui->sqrButton,SIGNAL(clicked()),this,SLOT(SQRPressed()));
    QObject::connect(ui->sqrtButton,SIGNAL(clicked()),this,SLOT(SQRTPressed()));
    QObject::connect(ui->invButton,SIGNAL(clicked()),this,SLOT(INVPressed()));
    QObject::connect(ui->factButton,SIGNAL(clicked()),this,SLOT(FACTPressed()));
    QObject::connect(ui->addButton,SIGNAL(clicked()),this,SLOT(ADDPressed()));
    QObject::connect(ui->minusButton,SIGNAL(clicked()),this,SLOT(MINUSPressed()));
    QObject::connect(ui->multiplyButton,SIGNAL(clicked()),this,SLOT(MULTPressed()));
    QObject::connect(ui->divButton,SIGNAL(clicked()),this,SLOT(DIVPressed()));
    QObject::connect(ui->powButton,SIGNAL(clicked()),this,SLOT(POWPressed()));
    QObject::connect(ui->modButton,SIGNAL(clicked()),this,SLOT(MODPressed()));
    QObject::connect(ui->signButton,SIGNAL(clicked()),this,SLOT(SIGNPressed()));
    QObject::connect(ui->spaceButton,SIGNAL(clicked()),this,SLOT(spacePressed()));
    QObject::connect(ui->ratioButton,SIGNAL(clicked()),this,SLOT(ratioClicked()));
    QObject::connect(ui->realButton,SIGNAL(clicked()),this,SLOT(realClicked()));
    QObject::connect(ui->integerButton,SIGNAL(clicked()),this,SLOT(integerClicked()));
    QObject::connect(ui->degreButton,SIGNAL(clicked()),this,SLOT(degreClicked()));
    QObject::connect(ui->radianButton,SIGNAL(clicked()),this,SLOT(radianClicked()));
    QObject::connect(ui->trueComplexButton,SIGNAL(clicked()),this,SLOT(trueComplexClicked()));
    QObject::connect(ui->falseComplexButton,SIGNAL(clicked()),this,SLOT(falseComplexClicked()));
    QObject::connect(ui->tabWidget,SIGNAL(tabCloseRequested(int)),this,SLOT(fermerOnglet()));
    ui->tabWidget->removeTab(1);
    QObject::connect(ui->actionNouvel_Onglet,SIGNAL(triggered()),this,SLOT(nouvelOngletbis()));
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
/* Signaux à associer... */
void MainWindow::SINPressed(){
    ui->inputLine->insert("SIN");
}
void MainWindow::SINHPressed(){
    ui->inputLine->insert("SINH");
}
void MainWindow::COSPressed(){
    ui->inputLine->insert("COS");
}
void MainWindow::COSHPressed(){
    ui->inputLine->insert("COSH");
}
void MainWindow::TANPressed(){
    ui->inputLine->insert("TAN");
}
void MainWindow::TANHPressed(){
    ui->inputLine->insert("TANH");
}
void MainWindow::LNPressed(){
    ui->inputLine->insert("LN");
}
void MainWindow::LOGPressed(){
    ui->inputLine->insert("LOG");
}
void MainWindow::SQRPressed(){
    ui->inputLine->insert("SQR");
}
void MainWindow::SQRTPressed(){
    ui->inputLine->insert("SQRT");
}
void MainWindow::CUBEPressed(){
    ui->inputLine->insert("CUBE");
}
void MainWindow::INVPressed(){
    ui->inputLine->insert("INV");
}
void MainWindow::POWPressed(){
    ui->inputLine->insert("^");
}
void MainWindow::MODPressed(){
    ui->inputLine->insert("MOD");
}
void MainWindow::SIGNPressed(){
    ui->inputLine->insert("SIGN");
}
void MainWindow::FACTPressed(){
    ui->inputLine->insert("!");
}
void MainWindow::ADDPressed(){
    ui->inputLine->insert("+");
}
void MainWindow::MINUSPressed(){
    ui->inputLine->insert("-");
}
void MainWindow::MULTPressed(){
    ui->inputLine->insert("*");
}
void MainWindow::DIVPressed(){
    ui->inputLine->insert("/");
}
void MainWindow::spacePressed(){
    ui->inputLine->insert(" ");
}

void MainWindow::ratioClicked(){
    ui->ratioButton->setChecked(1);
    ui->realButton->setChecked(0);
    ui->integerButton->setChecked(0);
}

void MainWindow::realClicked(){
    ui->realButton->setChecked(1);
    ui->ratioButton->setChecked(0);
    ui->integerButton->setChecked(0);
}

void MainWindow::integerClicked(){
    ui->integerButton->setChecked(1);
    ui->realButton->setChecked(0);
    ui->ratioButton->setChecked(0);
}

void MainWindow::trueComplexClicked(){
    ui->trueComplexButton->setChecked(1);
    ui->falseComplexButton->setChecked(0);
}
void MainWindow::falseComplexClicked(){
    ui->falseComplexButton->setChecked(1);
    ui->trueComplexButton->setChecked(0);
}
void MainWindow::degreClicked(){
    ui->degreButton->setChecked(1);
    ui->radianButton->setChecked(0);
}
void MainWindow::radianClicked(){
    ui->radianButton->setChecked(1);
    ui->degreButton->setChecked(0);
}

void MainWindow::fermerOnglet(){
    if(ui->tabWidget->count()>1)
        ui->tabWidget->removeTab(ui->tabWidget->currentIndex());
    else
        QMessageBox::critical(this,tr("Erreur"), tr("Il faut au moins un onglet!"));
}
void MainWindow::nouvelOnglet(){
    QWidget *newtab = new QTabWidget(this);
    QString nom = "Calc";
    ui->tabWidget->addTab(newtab,nom.append(QString::number(ui->tabWidget->count())));
    //ui->tabWidget->setTabText(ui->tabWidget->currentIndex(),nom.append(QString::number(ui->tabWidget->currentIndex())));
}

void MainWindow::nouvelOngletbis(){
    Onglet *newonglet = new Onglet();
    QString nom = "Calc";
    ui->tabWidget->addTab(newonglet->tab,nom.append(QString::number(ui->tabWidget->count())));
    //ui->tabWidget->setTabText(ui->tabWidget->currentIndex(),nom.append(QString::number(ui->tabWidget->currentIndex())));
}
