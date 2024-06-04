#ifndef DIAPORAMA_H
#define DIAPORAMA_H
#include <iostream>
#include <vector>
#include "imagedansdiaporama.h"
#include "image.h"
using namespace std;

class Diaporama
{
public:
    Diaporama(string title, int vitDefil, int postionActu, vector<ImageDansDiaporama> locaImages);
    ~Diaporama();
    // Getter
    string getTitre() const;
    int getVitesseDefilement() const;
    const vector<ImageDansDiaporama> getImages() const;
    int getPosActuel() const;

    // Setter
    void setTitre(const string &newTitre);
    void setVitesseDefilement(int newVitesseDefilement);
    void setPosActuel(int laPosActuel);
    // Autres méthodes
    int nbImages() const;    // renvoie le nombre d'image dans le diaporama
    void triCroissantRang(); // trie les images dans le diaporama selon leur rang

private:
    string m_titre;
    int m_vitesseDefilement;
    int m_posActuel;
    vector<ImageDansDiaporama> m_images;
};

#endif // DIAPORAMA_H
