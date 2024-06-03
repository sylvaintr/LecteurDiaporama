#include "lecteurpresentation.h"
#include "lecteurvue.h"
#include "lecteur.h"
#include "ui_lecteurvue.h"
#include <QDebug>
#include <QInputDialog>
#include <QSqlQuery>


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
    return (this->_modele);
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
    if(getModele()->getAutom()){
        getModele()->setAutom(false);
        getVue()->getTimer()->stop();
    }
    else
    {
        _modele->avancer();
        //qDebug() << "j'avance";
        ImageDansDiaporama * img = new ImageDansDiaporama();
        img = _modele->getImageCourante();
        getVue()->majvue(img);
    }

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
    if(getModele()->getAutom()){
        getModele()->setAutom(false);
        getVue()->getTimer()->stop();
    }
    else
    {
        //qDebug() << "je recule";
        _modele->reculer();

        ImageDansDiaporama * img = new ImageDansDiaporama();
        img = _modele->getImageCourante();
        getVue()->majvue(img);
    }
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
    getModele()->getDb()->changervitesse(getModele()->getDiaporama()->getVitesseDefilement()/1000, getModele()->getIdDiaporama() );
}

void LecteurPresentation::demanderRalentir()
{
    getModele()->getDiaporama()->setVitesseDefilement(getModele()->getDiaporama()->getVitesseDefilement()*2);
    getVue()->getTimer()->setInterval(getModele()->getDiaporama()->getVitesseDefilement());
    getModele()->getIdDiaporama();
    getModele()->getDb()->changervitesse(getModele()->getDiaporama()->getVitesseDefilement()/1000, getModele()->getIdDiaporama() );
}

void LecteurPresentation::changementvitesse()
{
    bool * ok = new bool;
    double  nouvitesse = QInputDialog::getDouble( getVue(), "changementvitesse", "Quelle est la vitesse ?",0,0,2147483647,1,ok);
    if (*ok)
    {
        getModele()->getDiaporama()->setVitesseDefilement(nouvitesse*1000);
        getVue()->getTimer()->setInterval(nouvitesse*1000);
        getModele()->getDb()->changervitesse(nouvitesse, getModele()->getIdDiaporama() );
    }

}

void LecteurPresentation::demanderChangerimg()
{
    getModele()->getDb()->openDataBase();
    QStringList listeimage = getModele()->getDb()->toutlesimage();

    for(int i =0 ; listeimage.size()>i ; i++){

        bool * ok = new bool;
        QString  nouvitesse = QInputDialog::getText(getVue(),"","quelles est le nouvau nom de l'image "+listeimage.at(i),QLineEdit::EchoMode(),"",ok)  ;
        if (*ok)
        {
            if(nouvitesse != ""){
                getModele()->getDb()->mettreJourNomImg(nouvitesse,i);
            }

    }
    }
}

void LecteurPresentation::demanderChangerchemain()
{
    getModele()->getDb()->openDataBase();
    QStringList listeimage = getModele()->getDb()->toutleschemain();

    for(int i =0 ; listeimage.size()>i ; i++){

        bool * ok = new bool;
        QString  nouvitesse = QInputDialog::getText(getVue(),"","quelles est le nouvau chemain de l'image "+listeimage.at(i),QLineEdit::EchoMode(),"",ok)  ;
        if (*ok)
        {
            if(nouvitesse != ""){
                getModele()->getDb()->mettreJourchemainImg(nouvitesse,i);
            }

    }
    }
}
void LecteurPresentation::demanderVider()
{
    getModele()->setAutom(false);
    getVue()->getTimer()->stop();
    _modele->viderLecteur();
    ImageDansDiaporama *image =new ImageDansDiaporama(0,"","",":/cartesDisney/Disney_tapis.gif");
    getVue()->majvue(image);
    Diaporama * d = new Diaporama();
    getVue()->majvuediaporama(d);

}

void LecteurPresentation::demanderChanger()
{
    changerdiaporama * fentrechangerdiaporama = new changerdiaporama(getVue()) ;
    fentrechangerdiaporama->setPresantation(this);
    fentrechangerdiaporama->majinterface();
    fentrechangerdiaporama->show();

}

void LecteurPresentation::demanderQuitter()
{
    qDebug() << "Au revoir.";
    getVue()->close();
}


