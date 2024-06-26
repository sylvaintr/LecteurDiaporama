#include "lecteurvue.h"
#include "ui_lecteurvue.h"

LecteurVue::LecteurVue(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LecteurVue)
{
    ui->setupUi(this);
    timer = new QTimer(this);
    QObject::connect(ui->actionA_propos, SIGNAL(triggered()), this, SLOT(afficherfenetreapropode()));
    QObject::connect(ui->actionQuitter, SIGNAL(triggered()), this, SLOT(demanderquiter()));
    QObject::connect(ui->avancer, SIGNAL(clicked()), this, SLOT(demanderAvancer()));
    QObject::connect(ui->reculer, SIGNAL(clicked()), this, SLOT(demanderReculer()));
    QObject::connect(timer , SIGNAL(timeout()), this, SLOT(demanderAvancer()));
    QObject::connect(ui->automatique, SIGNAL(clicked()), this, SLOT(demanderAutomatique()));
    QObject::connect(ui->accelerer, SIGNAL(clicked()), this, SLOT(demanderAccelerer()));
    QObject::connect(ui->ralentir, SIGNAL(clicked()), this, SLOT(demanderRalentir()));
    setWindowTitle("Lecteur de diaporama");
}

LecteurVue::~LecteurVue()
{
    delete ui;
}

void LecteurVue::afficherfenetreapropode()
{
    AProposDe * aprop = new AProposDe(this);
    aprop->show();
}

void LecteurVue::demanderQuitter()
{
    getPresantation()->demanderQuitter();
}

void LecteurVue::demanderAvancer()
{
 getPresantation()->demanderAvancer();
}

void LecteurVue::demanderReculer()
{
getPresantation()->demanderReculer();
}

void LecteurVue::demanderAutomatique()
{
    getPresantation()->demanderAutomatique();
}

void LecteurVue::demanderAccelerer()
{
    getPresantation()->demanderAccelerer();
}

void LecteurVue::demanderRalentir()
{
    getPresantation()->demanderRalentir();
}

QTimer *LecteurVue::getTimer() const
{
    return timer;
}

void LecteurVue::setTimer(QTimer *newTimer)
{
    timer = newTimer;
}

LecteurPresentation *LecteurVue::getPresantation() const
{
    return _presantation;
}

void LecteurVue::setPresantation(LecteurPresentation *newPresantation)
{
    _presantation = newPresantation;
}

void LecteurVue::majvue(ImageDansDiaporama *img)
{
    ui->image->setPixmap(QPixmap( QString::fromStdString(img->getChemin())));
    ui->titreImage->setText(QString::fromStdString(img->getTitre()));
    ui->categorieImage->setText(QString::fromStdString(img->getCategorie()));
    ui->numeroImage->setText(QString::number(img->getRangDansDiaporama()));
}


