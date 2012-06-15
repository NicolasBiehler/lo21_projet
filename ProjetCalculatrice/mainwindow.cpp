#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    nbonglet=0;
    mesonglets = new Onglet();
    //Collection_Onglet::GetInstance().ajouterOnglet(mesonglets);
    ui->setupUi(this);
    QVBoxLayout* l = new QVBoxLayout();
    ui->centralWidget->setLayout(l);
   // Onglet * onglet1 = new Onglet();
    l->addWidget(mesonglets);
    //mesonglets->addTab(onglet1,"Calc");
    l->addWidget(ui->frame);
    mesonglets->setMaximumHeight(24);
    mesonglets->setTabsClosable(true);

    nouvelOnglet();

    //mesonglets->setBackgroundRole(QPalette::Background);
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
    QObject::connect(mesonglets,SIGNAL(tabCloseRequested(int)),this,SLOT(fermerOnglet(int)));
    QObject::connect(ui->actionNouvel_Onglet,SIGNAL(triggered()),this,SLOT(nouvelOnglet()));
    QObject::connect(ui->pointButton,SIGNAL(clicked()),this,SLOT(pointPressed()));
    QObject::connect(ui->slashButton,SIGNAL(clicked()),this,SLOT(slashPressed()));
    QObject::connect(ui->dollarButton,SIGNAL(clicked()),this,SLOT(dollarPressed()));
    QObject::connect(ui->quoteButton,SIGNAL(clicked()),this,SLOT(quotePressed()));
    QObject::connect(mesonglets,SIGNAL(currentChanged(int)),this,SLOT(changerOnglet(int)));
    QObject::connect(ui->evalButton,SIGNAL(clicked()),this,SLOT(evalPressed()));
    QObject::connect(ui->action_Quit,SIGNAL(triggered()),this,SLOT(Quitter()));

    Operation::Plus *essai;
    Pile<Data> *mapile = new Pile<Data>();
    Entier *e1 = new Entier(4);
    Rationnel *r2 = new Rationnel(4,2);
    mapile->addPile(e1);
    mapile->addPile(r2);
    Data& resultat = essai->calcul(mapile);
    Rationnel& r3 = dynamic_cast<Rationnel&>(resultat);
    ui->textEdit->setText(QString::number(r3.getNumerateur().getValeur()).append("/").append(QString::number(r3.getDenominateur().getValeur())));
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
    ui->inputLine->insert(" SIN ");
}
void MainWindow::SINHPressed(){
    ui->inputLine->insert(" SINH ");
}
void MainWindow::COSPressed(){
    ui->inputLine->insert(" COS ");
}
void MainWindow::COSHPressed(){
    ui->inputLine->insert(" COSH ");
}
void MainWindow::TANPressed(){
    ui->inputLine->insert(" TAN ");
}
void MainWindow::TANHPressed(){
    ui->inputLine->insert(" TANH ");
}
void MainWindow::LNPressed(){
    ui->inputLine->insert(" LN ");
}
void MainWindow::LOGPressed(){
    ui->inputLine->insert(" LOG ");
}
void MainWindow::SQRPressed(){
    ui->inputLine->insert(" SQR ");
}
void MainWindow::SQRTPressed(){
    ui->inputLine->insert(" SQRT ");
}
void MainWindow::CUBEPressed(){
    ui->inputLine->insert(" CUBE ");
}
void MainWindow::INVPressed(){
    ui->inputLine->insert(" INV ");
}
void MainWindow::POWPressed(){
    ui->inputLine->insert(" ^ ");
}
void MainWindow::MODPressed(){
    ui->inputLine->insert(" % ");
}
void MainWindow::SIGNPressed(){
    ui->inputLine->insert(" SIGN ");
}
void MainWindow::FACTPressed(){
    ui->inputLine->insert(" ! ");
}
void MainWindow::ADDPressed(){
    ui->inputLine->insert(" + ");
}
void MainWindow::MINUSPressed(){
    ui->inputLine->insert(" - ");
}
void MainWindow::MULTPressed(){
    ui->inputLine->insert(" * ");
}
void MainWindow::DIVPressed(){
    ui->inputLine->insert(" DIV ");
}
void MainWindow::spacePressed(){
    ui->inputLine->insert(" ");
}
void MainWindow::pointPressed(){
    ui->inputLine->insert(".");
}
void MainWindow::slashPressed(){
    ui->inputLine->insert("/");
}
void MainWindow::dollarPressed(){
    ui->inputLine->insert("$");
}
void MainWindow::quotePressed(){
    ui->inputLine->insert("'");
}

void MainWindow::evalPressed(){
    Onglet * tmp = Collection_Onglet::GetInstance().at(mesonglets->currentIndex());
    ui->textEdit->setText(QString::number(tmp->tailleStockage()));
}

void MainWindow::ratioClicked(){
    ui->ratioButton->setChecked(1);
    ui->realButton->setChecked(0);
    ui->integerButton->setChecked(0);
    Onglet * tmp = Collection_Onglet::GetInstance().at(mesonglets->currentIndex());
    tmp->setType(Ratio);
}

void MainWindow::realClicked(){
    ui->realButton->setChecked(1);
    ui->ratioButton->setChecked(0);
    ui->integerButton->setChecked(0);
    Onglet * tmp = Collection_Onglet::GetInstance().at(mesonglets->currentIndex());
    tmp->setType(Real);
}

void MainWindow::integerClicked(){
    ui->integerButton->setChecked(1);
    ui->realButton->setChecked(0);
    ui->ratioButton->setChecked(0);
    Onglet * tmp = Collection_Onglet::GetInstance().at(mesonglets->currentIndex());
    tmp->setType(Integer);
}

void MainWindow::trueComplexClicked(){
    ui->trueComplexButton->setChecked(1);
    ui->falseComplexButton->setChecked(0);
    Onglet * tmp = Collection_Onglet::GetInstance().at(mesonglets->currentIndex());
    tmp->setComplexe(true);
}
void MainWindow::falseComplexClicked(){
    ui->falseComplexButton->setChecked(1);
    ui->trueComplexButton->setChecked(0);
    Onglet * tmp = Collection_Onglet::GetInstance().at(mesonglets->currentIndex());
    tmp->setComplexe(false);
}
void MainWindow::degreClicked(){
    ui->degreButton->setChecked(1);
    ui->radianButton->setChecked(0);
    Onglet * tmp = Collection_Onglet::GetInstance().at(mesonglets->currentIndex());
    tmp->setDegre(true);
}
void MainWindow::radianClicked(){
    ui->radianButton->setChecked(1);
    ui->degreButton->setChecked(0);
    Onglet * tmp = Collection_Onglet::GetInstance().at(mesonglets->currentIndex());
    tmp->setDegre(false);
}


void MainWindow::fermerOnglet(int index){
    if(mesonglets->count()>1){
        mesonglets->removeTab(index);
        Collection_Onglet::GetInstance().supprimerOnglet(index);
        Collection_Onglet::GetInstance().SetActif(mesonglets->currentIndex());
        refreshUI(mesonglets->currentIndex());
    }

    else
        QMessageBox::critical(this,tr("Erreur"), tr("Il faut au moins un onglet!"));
}

void MainWindow::nouvelOnglet(){
    Onglet *newonglet = new Onglet();
    QString nom = "Calc";
    nbonglet++;
    mesonglets->addTab(newonglet,nom.append(QString::number(nbonglet)));
    mesonglets->setCurrentWidget(newonglet);
    Collection_Onglet::GetInstance().ajouterOnglet(newonglet);
    Collection_Onglet::GetInstance().SetActif(mesonglets->currentIndex());
    refreshUI(mesonglets->currentIndex());
}

void MainWindow::changerOnglet(int index){
    if(index < Collection_Onglet::GetInstance().size()){
        Collection_Onglet::GetInstance().SetActif(index);
        refreshUI(index);
    }
}

void MainWindow::refreshUI(int index){
    Onglet * tmp = Collection_Onglet::GetInstance().at(index);
    if(tmp->getComplexe()){
        ui->trueComplexButton->setChecked(1);
        ui->falseComplexButton->setChecked(0);
    }else{
        ui->falseComplexButton->setChecked(1);
        ui->trueComplexButton->setChecked(0);
    }
    if(tmp->getDegre()){
        ui->degreButton->setChecked(1);
        ui->radianButton->setChecked(0);
    }else{
        ui->degreButton->setChecked(0);
        ui->radianButton->setChecked(1);
    }
    switch(tmp->getType()){
    case Integer:
        ui->integerButton->setChecked(1);
        ui->realButton->setChecked(0);
        ui->ratioButton->setChecked(0);
        break;
    case Real:
        ui->realButton->setChecked(1);
        ui->ratioButton->setChecked(0);
        ui->integerButton->setChecked(0);
        break;
    case Ratio:
        ui->ratioButton->setChecked(1);
        ui->realButton->setChecked(0);
        ui->integerButton->setChecked(0);
        break;
    }
}
void MainWindow::Quitter(){
    Collection_Onglet::ReleaseInstance();
    this->close();
}
