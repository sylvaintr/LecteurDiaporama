#ifndef LECTEURPRESENTATION_H
#define LECTEURPRESENTATION_H
#include "changerdiaporama.h"

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
    void demanderAvancerauto();
    void demanderReculer();
    void demanderAutomatique();
    void demanderAccelerer();
    void demanderRalentir();
    void changementvitesse();
    void demanderChangerimg();
    void demanderChangerchemin();
public slots:


    void demanderVider();
    void demanderChanger();

};

#endif // LECTEURPRESENTATION_H
