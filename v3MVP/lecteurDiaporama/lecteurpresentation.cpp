#include "lecteurpresentation.h"
#include "lecteurvue.h"
#include "lecteur.h"
#include "ui_lecteurvue.h"
#include <QDebug>

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

    _modele->avancer();
    //qDebug() << "j'avance";
    ImageDansDiaporama * img = new ImageDansDiaporama();
    img = _modele->getImageCourante();
    getVue()->majvue(img);

}

void LecteurPresentation::demanderReculer()
{
    //qDebug() << "je recule";
    _modele->reculer();
    ImageDansDiaporama * img = new ImageDansDiaporama();
    img = _modele->getImageCourante();
    getVue()->majvue(img);
}

void LecteurPresentation::demanderAutomatique()
{
    qDebug() << "Passer en mode auto - Disponible en v4_MVP !";
}

void LecteurPresentation::demanderAccelerer()
{
    qDebug() << "Accelerer - Disponible en v4_MVP !";
}

void LecteurPresentation::demanderRalentir()
{
    qDebug() << "Ralentir - Disponible en v4_MVP !";
}

void LecteurPresentation::demanderVider()
{
    _modele->viderLecteur();
}

void LecteurPresentation::demanderChanger()
{
    // La méthode permettant de changer de diaporama doit être adapter
    // _modele->changerDiaporama();
}

void LecteurPresentation::demanderQuitter()
{
    qDebug() << "Au revoir.";
    getVue()->close();
}


