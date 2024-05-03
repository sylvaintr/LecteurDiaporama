#include "image.h"

Image::Image(string titre, string cat, string chemin):
    m_titre(titre),
    m_categorie(cat),
    m_chemin(chemin){
}

Image::~Image()
{

}

string Image::getTitre()
{
    return this->m_titre ;
}

string Image::getCategorie()
{
    return this->m_categorie;
}

string Image::getChemin()
{
    return this->m_chemin;
}

void Image::setTitre(string texte)
{
    (*this).m_titre = texte;
}

void Image::setCategorie(string texte)
{
    (*this).m_categorie = texte;
}

void Image::setChemin(string texte)
{
    (*this).m_chemin = texte;
}

void Image::afficher()
{
    cout << "image(titre:" << getTitre() << ", categorie:"
         << getCategorie() << ", chemin:"<< getChemin() << ")" << endl;
}

