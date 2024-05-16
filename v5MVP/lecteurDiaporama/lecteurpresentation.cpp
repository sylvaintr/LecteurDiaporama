#include "lecteurpresentation.h"
#include "lecteurvue.h"
#include "lecteur.h"
#include "ui_lecteurvue.h"
#include <QDebug>
#include <QInputDialog>

LecteurPresentation::LecteurPresentation(QObject *parent) :
    QObject(parent)
{

}

LecteurPresentation::~LecteurPresentation()
{

}

LecteurVue *LecteurPresentation::getVue()
{
    return this->_vue;
}

Lecteur *LecteurPresentation::getModele()
{
    return this->_modele;
}

void LecteurPresentation::setVue(LecteurVue* vue)
{
    this->_vue = vue;
}

void LecteurPresentation::setModele(Lecteur *modele)
{
    this->_modele = modele;
}

void LecteurPresentation::demanderAvancer()
{
    getModele()->setAutom(false);
    getVue()->getTimer()->stop();
    _modele->avancer();
    //qDebug() << "j'avance";
    ImageDansDiaporama * img = new ImageDansDiaporama();
    img = _modele->getImageCourante();
    getVue()->majvue(img);

}

void LecteurPresentation::demanderAvancerauto()
{
    _modele->avancer();
    //qDebug() << "j'avance";
    ImageDansDiaporama * img = new ImageDansDiaporama();
    img = _modele->getImageCourante();
    getVue()->majvue(img);
}

void LecteurPresentation::demanderReculer()
{
    getModele()->setAutom(false);
    getVue()->getTimer()->stop();
    //qDebug() << "je recule";
    _modele->reculer();
    ImageDansDiaporama * img = new ImageDansDiaporama();
    img = _modele->getImageCourante();
    getVue()->majvue(img);
}

void LecteurPresentation::demanderAutomatique()
{
    if(getModele()->getAutom())
    {
        getModele()->setAutom(false);
        getVue()->getTimer()->stop();
    }
    else
    {
        getModele()->setAutom(true);
        getVue()->getTimer()->start(getModele()->getDiaporama()->getVitesseDefilement());
    }

}

void LecteurPresentation::demanderAccelerer()
{
    getModele()->getDiaporama()->setVitesseDefilement(getModele()->getDiaporama()->getVitesseDefilement()*0.5);
    getVue()->getTimer()->setInterval(getModele()->getDiaporama()->getVitesseDefilement());
    qDebug() << "Accelerer - Disponible en v4_MVP !";
}

void LecteurPresentation::demanderRalentir()
{
    getModele()->getDiaporama()->setVitesseDefilement(getModele()->getDiaporama()->getVitesseDefilement()*2);
    getVue()->getTimer()->setInterval(getModele()->getDiaporama()->getVitesseDefilement());
    qDebug() << "Ralentir - Disponible en v4_MVP !";
}

void LecteurPresentation::changementvitesse()
{
    bool * ok = new bool;
    int  nouvitesse = QInputDialog::getInt( getVue(), "changementvitesse", "Quelle est la vitesse ?",0,0,2147483647,1,ok);
    if (*ok)
    {
        getModele()->getDiaporama()->setVitesseDefilement(nouvitesse);
        getVue()->getTimer()->setInterval(nouvitesse);
    }

}

void LecteurPresentation::demanderVider()
{
    getModele()->setAutom(false);
    getVue()->getTimer()->stop();
    _modele->viderLecteur();
    ImageDansDiaporama *image =new ImageDansDiaporama(0,"","",":/cartesDisney/Disney_tapis.gif");
    getVue()->majvue(image);
}

void LecteurPresentation::demanderChanger()
{

    bool * ok = new bool;
    int  noudiaporama = QInputDialog::getInt( getVue(), "changer diaporama ", "Quel diaporama souhaitez-vous ?",0,1,4,1,ok);
    qDebug() << *ok;
    if (*ok)
    {
        _modele->changerDiaporama(noudiaporama);
        getVue()->majvue(_modele->getImageCourante());
    }

}

void LecteurPresentation::demanderQuitter()
{
    qDebug() << "Au revoir.";
    getVue()->close();
}


