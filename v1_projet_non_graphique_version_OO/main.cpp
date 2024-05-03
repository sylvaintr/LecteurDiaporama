#include <iostream>
#include "lecteur.h"
#include "imagedansdiaporama.h"
#include "image.h"
#include "diaporama.h"
using namespace std;

void saisieVerifChoixActionSurImageCourante(char &pChoixAction);

int main()
{

    const std::string titreImage1 = "voiture1";
    const std::string titreImage2 = "voiture2";
    const std::string categori = "photo";
    const std::string &chemin1 = "C:/Users/Utilisateur/Downloads/voiture1";
    const std::string &chemin2 = "C:/Users/Utilisateur/Downloads/voiture2";
    Image image1(titreImage1, categori, chemin1);
    Image image2(titreImage2, categori, chemin2);
    ImageDansDiaporama locaImages1(&image1, 2, 1);
    ImageDansDiaporama locaImages2(&image2, 1, 2);
    const vector<ImageDansDiaporama> &locaImages = {locaImages1, locaImages2};
    const std::string &titre = "diaporama1";
    Diaporama d1(titre, 3, 0, locaImages);
    Diaporama *ptr_d1 = &d1;
    Lecteur l("normale", true, ptr_d1);
    char pChoixAction;

    while (true)
    {
        saisieVerifChoixActionSurImageCourante(pChoixAction);
        if (pChoixAction == 'Q')
        {
            break;
        }
        switch (pChoixAction)
        {
        case 'A':
            l.avancer();
            break;
        case 'R':
            l.reculer();
            break;
        case 'C':

            l.changerDiaporama(&d1);
            break;
        default:
            break;
        }
        // affiche l'image
        const Diaporama &diaporama = *l.getDiaporama();
        int posactu = diaporama.getPosActuel();
        const ImageDansDiaporama &imageAAfficher = diaporama.getImages()[posactu];
        imageAAfficher.getImage()->afficher();
    }

    return 0;
}

void saisieVerifChoixActionSurImageCourante(char &pChoixAction)
{
    cout << endl
         << endl;
    while (true)
    {
        cout << endl;
        cout << "ACTIONS :"
             << "  A-vancer"
             << "  R-eculer"
             << "  C-hanger de diaporama "
             << "  Q-uitter .......  votre choix ? ";
        cin >> pChoixAction;
        pChoixAction = toupper(pChoixAction);

        if ((pChoixAction == 'A') || (pChoixAction == 'R') || (pChoixAction == 'C') || (pChoixAction == 'Q'))
        {
            break;
        }
    }
}