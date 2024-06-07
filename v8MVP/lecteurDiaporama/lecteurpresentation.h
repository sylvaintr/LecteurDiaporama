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
    Lecteur* _modele; //pointeur vers le modèle
    LecteurVue* _vue; //pointeur vers la vue

public:
    LecteurPresentation(QObject *parent = nullptr);
    ~LecteurPresentation();
    LecteurVue* getVue();
    Lecteur* getModele();
    void setVue(LecteurVue* modele);
    void setModele(Lecteur* vue);
    void demanderQuitter(); //quitter le lecteur
    void demanderAvancer(); //passer à la prochaine image
    void demanderAvancerauto(); //passer à la prochaine image automatiquement
    void demanderReculer(); //passer à l'image précédente
    void demanderAutomatique(); //passer en mode automatique
    void demanderAccelerer(); //accelerer le passage des images en mode auto
    void demanderRalentir(); //ralentir le passage des images en mode auto
    void changementVitesse(); //changer la vitesse de défilement du mode auto
    void demanderChangerImg(); //changer l'image courante
    void demanderChangerChemin(); //changer le chemin de l'image
public slots:


    void demanderVider();
    void demanderChanger();

};

#endif // LECTEURPRESENTATION_H
