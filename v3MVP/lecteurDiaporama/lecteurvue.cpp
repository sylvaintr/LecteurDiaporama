#include "lecteurvue.h"
#include "ui_lecteurvue.h"

LecteurVue::LecteurVue(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LecteurVue)
{
    ui->setupUi(this);
    QObject::connect(ui->actionA_propos, SIGNAL(triggered()), this, SLOT(afficherfenetreapropode()));
    QObject::connect(ui->actionQuitter, SIGNAL(triggered()), this, SLOT(demanderquiter()));
    QObject::connect(ui->avancer, SIGNAL(clicked()), this, SLOT(demanderAvancer()));
    QObject::connect(ui->reculer, SIGNAL(clicked()), this, SLOT(demanderReculer()));
}

LecteurVue::~LecteurVue()
{
    delete ui;
}

void LecteurVue::nouvelleConnexion(QObject *p)
{

    QObject::connect(ui->automatique, SIGNAL(clicked()), p, SLOT(demanderAutomatique()));
    QObject::connect(ui->accelerer, SIGNAL(clicked()), p, SLOT(demanderAccelerer()));
    QObject::connect(ui->ralentir, SIGNAL(clicked()), p, SLOT(demanderRalentir()));
    QObject::connect(ui->actionVider_lecteur, SIGNAL(clicked()), p, SLOT(demanderVider()));
    QObject::connect(ui->actionChanger_diaporama, SIGNAL(clicked()), p, SLOT(demanderChanger()));

}

void LecteurVue::supprimerConnexion(QObject *p)
{
    QObject::disconnect(ui->avancer, SIGNAL(clicked()), p, SLOT(demanderAvancer()));
    QObject::disconnect(ui->reculer, SIGNAL(clicked()), p, SLOT(demanderReculer()));
    QObject::disconnect(ui->automatique, SIGNAL(clicked()), p, SLOT(demanderAutomatique()));
    QObject::disconnect(ui->accelerer, SIGNAL(clicked()), p, SLOT(demanderAccelerer()));
    QObject::disconnect(ui->ralentir, SIGNAL(clicked()), p, SLOT(demanderRalentir()));
    QObject::disconnect(ui->actionVider_lecteur, SIGNAL(clicked()), p, SLOT(demanderVider()));
    QObject::disconnect(ui->actionChanger_diaporama, SIGNAL(clicked()), p, SLOT(demanderChanger()));

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


