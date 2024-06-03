#include "lecteurvue.h"
#include "ui_lecteurvue.h"
#include "lecteur.h"

LecteurVue::LecteurVue(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LecteurVue)
{
    ui->setupUi(this);
    timer = new QTimer(this);
    QObject::connect(ui->actionVider_lecteur, SIGNAL(triggered()), this, SLOT(demanderVider()));
    QObject::connect(ui->actionVitesse, SIGNAL(triggered()), this, SLOT(demanderchangementvitesse()));
    QObject::connect(ui->actionA_propos, SIGNAL(triggered()), this, SLOT(afficherfenetreapropode()));
    QObject::connect(ui->actionQuitter, SIGNAL(triggered()), this, SLOT(demanderquiter()));
    QObject::connect(ui->avancer, SIGNAL(clicked()), this, SLOT(demanderAvancer()));
    QObject::connect(ui->reculer, SIGNAL(clicked()), this, SLOT(demanderReculer()));
    QObject::connect(timer , SIGNAL(timeout()), this, SLOT(demanderAvancerauto()));
    QObject::connect(ui->automatique, SIGNAL(clicked()), this, SLOT(demanderAutomatique()));
    QObject::connect(ui->accelerer, SIGNAL(clicked()), this, SLOT(demanderAccelerer()));
    QObject::connect(ui->ralentir, SIGNAL(clicked()), this, SLOT(demanderRalentir()));
    QObject::connect(ui->actionChanger_diaporama, SIGNAL(triggered()), this, SLOT(demanderChanger()));
    QObject::connect(ui->actionmodifier_le_nom_des_image, SIGNAL(triggered()), this, SLOT(demanderChangerimg()));
    QObject::connect(ui->actionmodifier_le_chemain_des_image, SIGNAL(triggered()), this, SLOT(demanderChangerchemainimg()));
    Diaporama * d = new Diaporama();
    majvuediaporama(d);
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

void LecteurVue::demanderquiter()
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

void LecteurVue::demanderchangementvitesse()
{
    getPresantation()->changementvitesse();
}

void LecteurVue::demanderVider()
{
    getPresantation()->demanderVider();
}

void LecteurVue::demanderChanger()
{
    getPresantation()->demanderChanger();
}

void LecteurVue::demanderAvancerauto()
{
    getPresantation()->demanderAvancerauto();
}

void LecteurVue::demanderChangerimg()
{
    getPresantation()->demanderChangerimg();
}

void LecteurVue::demanderChangercheminimg()
{
    getPresantation()->demanderChangerchemin();
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

void LecteurVue::majvuediaporama(Diaporama *d)
{




    if(d->getId()==0){
        ui->avancer->hide();
        ui->accelerer->hide();
        ui->automatique->hide();
        ui->reculer->hide();
        ui->ralentir->hide();
        ui->titreDiapo->setText("Pas de diaporama");
    }
    else{
        ui->avancer->show();
        ui->accelerer->show();
        ui->automatique->show();
        ui->reculer->show();
        ui->ralentir->show();
        ui->titreDiapo->setText(QString::fromStdString(d->getTitre()));

    }

}


