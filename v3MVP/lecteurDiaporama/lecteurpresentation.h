#ifndef LECTEURPRESENTATION_H
#define LECTEURPRESENTATION_H


// #include "qtmetamacros.h" // Sans quoi Qt refuse le mot clé "slots"
#include <QObject>

class Lecteur;
class LecteurVue;

class LecteurPresentation: public QObject
{
private:
    Lecteur* _modele;
    LecteurVue* _vue;
public:
    LecteurPresentation(QObject *parent = nullptr);
    ~LecteurPresentation();
    LecteurVue* getVue();
    Lecteur* getModele();
    void setVue(LecteurVue* modele);
    void setModele(Lecteur* vue);
    void demanderQuitter();
    void demanderAvancer();
    void demanderReculer();

public slots:
    void demanderAutomatique();
    void demanderAccelerer();
    void demanderRalentir();
    void demanderVider();
    void demanderChanger();

};

#endif // LECTEURPRESENTATION_H
