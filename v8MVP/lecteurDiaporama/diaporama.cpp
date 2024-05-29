#include "diaporama.h"
#include <QSqlQuery>
#include "database.h"

Diaporama::Diaporama():id(0), titre(""), vitesseDefilement(0) {
    images.clear();
}

Diaporama::~Diaporama()
{
    vider();
}

unsigned int Diaporama::getId() const
{
    return id;
}

string Diaporama::getTitre() const
{
    return titre;
}

int Diaporama::getVitesseDefilement() const
{
    return vitesseDefilement;
}

ImagesDiaporama Diaporama::getImages() const
{
    return images;
}


unsigned int Diaporama::nbImages() const
{
    return images.size();
}

void Diaporama::setId(unsigned int pId)
{
    id = pId;
}

void Diaporama::setTitre(string pTitre)
{
    titre = pTitre;
}

void Diaporama::setVitesseDefilement(unsigned int pVitesseDefilement)
{
    vitesseDefilement = pVitesseDefilement;
}

void Diaporama::setImages(const ImagesDiaporama& pImages)
{
    images = pImages;
}

void Diaporama::ajouterImageEnFin(ImageDansDiaporama* pImage)
{
    images.push_back(pImage);

    // post-condition : nbImages() > 0
}

void Diaporama::enleverImageEnFin()
{
    if (nbImages() != 0)
    {
        images.pop_back();
    }

    // post-condition : nbImages() >= 0
}

void Diaporama::vider()
{
    unsigned int taille = nbImages();
    for (unsigned int i = 0; i < taille ; i++)
    {
        enleverImageEnFin(); /* Removes the last element in the vector,
                              effectively reducing the container size by one.
                              AND deletes the removed element */
    }
    // post-condition : nbImages() == 0
}

void Diaporama::charger()
{
    /* Chargement des images associées au diaporama id.
       Crée un objet Image pour chaque image de ce diaporama, puis stocke son adresse dans l'attribut images.
       La collection  est ensuite triée par ordre croissant de rang des images.

       Dans la version actuelle, les images sont créées 'en dur'.
       Dans une version ultérieure, les images proviendront de la Base de Données */


    ImageDansDiaporama* imageACharger;
    switch(id) {
      case 0 : // diaporama par défaut
        imageACharger = new ImageDansDiaporama(1, "objet", "", ":/cartesDisney/Disney_tapis.gif");
        ajouterImageEnFin(imageACharger);
        break ;//

      default :
        database bd;
        bd.openDataBase();
        QList<int> rank;
        QStringList listetitre;
        QStringList listecategorie;
        QStringList listechemain;
        bd.imagesDUnDiaporama(id, rank,listetitre , listecategorie,  listechemain);


           for(int i =0 ; rank.size()>i ; i++){
               //qDebug() <<  query.value(0).toInt() << query.value(1).toString() << query.value(2).toInt()*1000 ;
               QString categorie = listecategorie.at(i);
               QString chemain =  listechemain.at(i) ;
               QString titre = listetitre.at(i);
               imageACharger = new ImageDansDiaporama(static_cast <unsigned int>(rank.at(i) ), categorie.toStdString(),titre.toStdString() , chemain.toStdString());
               ajouterImageEnFin(imageACharger);


           }

        break;
    }

    trierParRangCroissant();  // selon le rang de l'image dans le diaporama

    // post-condition : nbImages() >= 0
 }

void Diaporama::trierParRangCroissant()
{
    ImageDansDiaporama* pteurImage;
    unsigned int taille = nbImages();
    for (unsigned int ici = taille-1; ici >=1 ; ici--)
    {
        // faire monter la bulle ici = déplacer l'élément de rang le plus grand en position ici
        // par échanges successifs
        for (unsigned int i = 0; i < ici; i++)
        {
            if (images[i]->getRangDansDiaporama() > images[i+1]->getRangDansDiaporama())
            {
                // echanger les 2 éléments
                pteurImage = images[i];
                images[i] = images[i+1];
                images[i+1] = pteurImage;
            }
        }
    }
}

