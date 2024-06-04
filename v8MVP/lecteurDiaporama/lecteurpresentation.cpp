#include "lecteurpresentation.h"
#include "lecteurvue.h"
#include "lecteur.h"
#include "ui_lecteurvue.h"
#include <QDebug>
#include <QInputDialog>
#include <QSqlQuery>
#include <QMessageBox>

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
    getModele()->getDb()->changerVitesse(getModele()->getDiaporama()->getVitesseDefilement()/1000, getModele()->getIdDiaporama() );
}

void LecteurPresentation::demanderRalentir()
{
    getModele()->getDiaporama()->setVitesseDefilement(getModele()->getDiaporama()->getVitesseDefilement()*2);
    getVue()->getTimer()->setInterval(getModele()->getDiaporama()->getVitesseDefilement());
    getModele()->getIdDiaporama();
    getModele()->getDb()->changerVitesse(getModele()->getDiaporama()->getVitesseDefilement()/1000, getModele()->getIdDiaporama() );
}

void LecteurPresentation::changementVitesse()
{
    bool * ok = new bool;
    double  nouvitesse = QInputDialog::getDouble( getVue(), "changement de vitesse", "Quelle est la vitesse ?",0,0,2147483647,1,ok);
    if (*ok)
    {
        getModele()->getDiaporama()->setVitesseDefilement(nouvitesse*1000);
        getVue()->getTimer()->setInterval(nouvitesse*1000);
        getModele()->getDb()->changerVitesse(nouvitesse, getModele()->getIdDiaporama() );
    }

}

void LecteurPresentation::demanderChangerImg()
{
    getModele()->getDb()->openDataBase();
    QStringList listeimage = getModele()->getDb()->toutesLesImages();

    for(int i =0 ; listeimage.size()>i ; i++){

        bool * ok = new bool;
        QString  nouvitesse = QInputDialog::getText(getVue(),"changer le nom de l'image "+listeimage.at(i),"quelles est le nouvau nom de l'image "+listeimage.at(i),QLineEdit::EchoMode(),"",ok)  ;
        if (*ok)
        {
            if(nouvitesse != ""){
                getModele()->getDb()->mettreJourNomImg(nouvitesse,i);
            }

    }
    }
}

void LecteurPresentation::demanderChangerChemin()
{
    QMessageBox * cc =new QMessageBox(QMessageBox::Warning,"Attention","si vous modifiez les chemins il est possible que le lecteur ne fonctionne plus",QMessageBox::Ok, getVue());
    cc->exec();
    getModele()->getDb()->openDataBase();
    QStringList listeimage = getModele()->getDb()->tousLesChemins();

    for(int i =0 ; listeimage.size()>i ; i++){

        bool * ok = new bool;
        QString  nouvchemain = QInputDialog::getText(getVue(),"changer le chemain de l'image "+listeimage.at(i),"quelles est le nouvau chemin de l'image "+listeimage.at(i),QLineEdit::EchoMode(),"",ok)  ;
        if (*ok)
        {
            if(nouvchemain != ""){
                getModele()->getDb()->mettreJourCheminImg(nouvchemain,i);
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
    getVue()->majVueDiaporama(d);

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


