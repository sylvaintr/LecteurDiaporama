#ifndef DIAPORAMA_H
#define DIAPORAMA_H
#include <vector>
#include "imageDansDiaporama.h"

typedef vector<ImageDansDiaporama*> ImagesDiaporama; // collection de pointeurs vers les images de ce
                                                     // diaporama (= pteurs vers objets de type ImageDansDiaporama)
class Diaporama
{
public:
    Diaporama();
    ~Diaporama();
    unsigned int getId() const;
    string getTitre() const;
    int getVitesseDefilement() const;
    ImagesDiaporama getImages() const;

    unsigned int nbImages() const;  // nbre de pointeurs d'images contenus dans diaporama

    void setId(unsigned int pId);
    void setTitre(string pTitre);
    void setVitesseDefilement(unsigned int pVitesseDefilement);
    void setImages(const ImagesDiaporama& pImages);

    void ajouterImageEnFin(ImageDansDiaporama* pImage);     // ajoute une image au diaporama (en fin de l'attribut images)
    void enleverImageEnFin();   // enlève la dernière image du diaporama, et delete l'objet image enlevé
    void vider();       // enlève toutes les images du diaporama, et delete chaque objet enlevé
    void charger();     // chargement, dans l'attribut images, des images associées au diaporama courant (d'attribut id).

private:
    unsigned int id;                // identifiant du diaporama dans la Base de données
    string titre ;                  // titre du diaporama
    unsigned int vitesseDefilement; // vitesse de défilement des images du diaporama
    ImagesDiaporama images;         // vecteur de pointeurs sur les objets ImageDansDiaporama de ce diaporama
    void trierParRangCroissant(); // trie les images du diaporama par ordre de rang croissant
};

#endif // DIAPORAMA_H
