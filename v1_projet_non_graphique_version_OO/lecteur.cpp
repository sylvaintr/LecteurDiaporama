#include "lecteur.h"

Lecteur::Lecteur(string mode, bool loop, Diaporama* enLecture):
    m_mode(mode),
    m_boucle(loop),
    m_diapoEnLecture(enLecture){
}

string Lecteur::getMode()
{
    return this->m_mode;
}
 Diaporama* Lecteur::getDiaporama() 
{
    return this->m_diapoEnLecture;
}
void Lecteur::setMode(const string &newMode)
{
    (*this).m_mode = newMode;
}

bool Lecteur::getBoucle()
{
    return this->m_boucle;
}

void Lecteur::setBoucle(bool newBoucle)
{
    (*this).m_boucle = newBoucle;
}

void Lecteur::avancer()
{
       int pPosImageCourante = (*this).m_diapoEnLecture->getPosActuel(); // pour simplifier le reste de la procédure 
    
    if ((*this).getBoucle() == true)
    {
        if (pPosImageCourante == (*this).m_diapoEnLecture->getImages().size())
        {
            pPosImageCourante = 0;
        }
        else
        {
            pPosImageCourante = pPosImageCourante + 1;
        }
    }
    else
    {
        if (pPosImageCourante != (*this).m_diapoEnLecture->getImages().size())
        {
            pPosImageCourante = pPosImageCourante + 1;
        }
        
    }
    (*this).m_diapoEnLecture->setPosActuel(pPosImageCourante); // pour simplifier le reste ede la procédure 
    
}

void Lecteur::reculer()
{
    int pPosImageCourante = (*this).m_diapoEnLecture->getPosActuel(); // pour simplifier le reste de la procédure 

    if ((*this).getBoucle() == true)
    {
        if (pPosImageCourante == 0)
        {
            pPosImageCourante = (*this).m_diapoEnLecture->getImages().size();
        }
        else
        {
            pPosImageCourante = pPosImageCourante - 1;
        }
    }
    else
    {
        if (pPosImageCourante != 0)
        {
            pPosImageCourante = pPosImageCourante - 1;
        }
    }
    (*this).m_diapoEnLecture->setPosActuel(pPosImageCourante); // pour simplifier le reste de la procédure 
}

void Lecteur::changerDiaporama(Diaporama *UnDiaporama)
{
    (*this).m_diapoEnLecture = UnDiaporama;
}
