#include "diaporama.h"
#include <QSqlQuery>

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
        QSqlQuery query;
            query.prepare("SELECT D.uriPhoto, D.titrePhoto , F.nomFamille, DDD.rang FROM Diapos D JOIN DiaposDansDiaporama DDD on DDD.idDiapo =D.idphoto JOIN Familles F on F.idFamille=D.idFam WHERE DDD.idDiaporama = ? ORDER BY DDD.rang");
            query.addBindValue(id);
            query.exec();
           for(int i =0 ; query.next(); i++){
               //qDebug() <<  query.value(0).toInt() << query.value(1).toString() << query.value(2).toInt()*1000 ;
               QString categorie = query.value(2).toString();
               QString chemain = ":"+query.value(0).toString()    ;
               QString titre = query.value(1).toString();
               imageACharger = new ImageDansDiaporama(static_cast <unsigned int>( query.value(3).toInt()), categorie.toStdString(),titre.toStdString() , chemain.toStdString());
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

