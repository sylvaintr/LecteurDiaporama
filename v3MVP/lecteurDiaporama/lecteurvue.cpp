#include "lecteurvue.h"
#include "ui_lecteurvue.h"
#include "aproposde.h"

LecteurVue::LecteurVue(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LecteurVue)
{
    ui->setupUi(this);
    QObject::connect(ui->actionA_propos, SIGNAL(triggered()), this, SLOT(afficherFenetreAProposDe()));
    QObject::connect(ui->actionQuitter, SIGNAL(triggered()), this, SLOT(demanderQuitter()));
    QObject::connect(ui->avancer, SIGNAL(clicked()), this, SLOT(demanderAvancer()));
    QObject::connect(ui->reculer, SIGNAL(clicked()), this, SLOT(demanderReculer()));
    setWindowTitle("Lecteur de diaporama");
}

LecteurVue::~LecteurVue()
{
    delete ui;
}


void LecteurVue::afficherFenetreAProposDe()
{
    AProposDe * aPropos = new AProposDe(this);
    aPropos->show();
}

void LecteurVue::demanderQuitter()
{
    getPresentation()->demanderQuitter();
}

void LecteurVue::demanderAvancer()
{
    getPresentation()->demanderAvancer();
}

void LecteurVue::demanderReculer()
{
    getPresentation()->demanderReculer();
}

LecteurPresentation *LecteurVue::getPresentation() const
{
    return _presantation;
}

void LecteurVue::setPresentation(LecteurPresentation *newPresantation)
{
    _presantation = newPresantation;
}

void LecteurVue::majVue(ImageDansDiaporama *img)
{
    ui->image->setPixmap(QPixmap( QString::fromStdString(img->getChemin())));
    ui->titreImage->setText(QString::fromStdString(img->getTitre()));
    ui->categorieImage->setText(QString::fromStdString(img->getCategorie()));
    ui->numeroImage->setText(QString::number(img->getRangDansDiaporama()));
}


