#ifndef IMAGE_H
#define IMAGE_H
#include <iostream>
using namespace std;


class Image
{
public:
    Image(string titre, string cat, string chemin);
    ~Image();
    //Getter
    string getCategorie();
    string getTitre();
    string getChemin();
     //Setter
     void setTitre(string);
     void setCategorie(string);
     void setChemin(string);
     //Autres méthode
     void afficher(); //Affiche toutes les caractéristiques de l'image


private :
     string m_titre;
     string m_categorie;
     string m_chemin;
};

#endif // IMAGE_H
