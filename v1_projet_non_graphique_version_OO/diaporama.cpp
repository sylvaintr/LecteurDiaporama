#include "diaporama.h"
#include <algorithm>

Diaporama::Diaporama(string title, int vitDefil, int postionActu, vector<ImageDansDiaporama> locaImages):
    m_titre(title),
    m_vitesseDefilement(vitDefil),
    m_posActuel(postionActu),
    m_images(locaImages)
{
}
Diaporama::~Diaporama()
{}

 string Diaporama::getTitre() const
{
     return this->m_titre;
}

void Diaporama::setTitre(const string &newTitre)
{
    (*this).m_titre = newTitre;
}

int Diaporama::getVitesseDefilement() const
{
    return this->m_vitesseDefilement;
}
int Diaporama::getPosActuel() const
{
    return this->m_posActuel;
}

void Diaporama::setVitesseDefilement(int newVitesseDefilement)
{
    (*this).m_vitesseDefilement = newVitesseDefilement;
}
void Diaporama::setPosActuel(int laPosActuel)  {
    (*this).m_posActuel = laPosActuel;
}
int Diaporama::nbImages() const
{
    return m_images.size();
}

const vector<ImageDansDiaporama> Diaporama::getImages() const {
    return m_images;
}


void Diaporama::triCroissantRang()
{
    bool en_desordre = true;
    const int size = (*this).nbImages();
	for (int i = 0; i < size && en_desordre; ++i)
	{
		en_desordre = false;
		for (int j = 1; j < size - i; ++j)
		{
			if ((*this).m_images[j-1].getRang() > (*this).m_images[j].getRang())
			{
				ImageDansDiaporama temp = (*this).m_images[j-1];
				(*this).m_images[j-1] =  (*this).m_images[j];
				(*this).m_images[j] = temp;
				en_desordre = true;
	 			}
		}
	}

}

