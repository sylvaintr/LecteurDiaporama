#include <iostream>
#include "lecteur.h"
#include "lecteurpresentation.h"
#include "lecteurvue.h"
#include <QApplication>

using namespace std;

int main(int argc, char **argv)
{
    QApplication a(argc,argv);

    // Initialisation du modèle MVP
    LecteurVue v;
    Lecteur* l = new Lecteur();     // positionnement par défaut sur diaporama 0 et sur son unique image
    LecteurPresentation* p = new LecteurPresentation(l);
    v.setPresantation(p);
    p->setModele(l);
    p->setVue(&v);
    // Ouverture de la vue
    v.show();
    // Boucle et fin
    return a.exec();
}





