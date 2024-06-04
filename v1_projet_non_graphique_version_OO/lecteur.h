#ifndef LECTEUR_H
#define LECTEUR_H
#include <iostream>
#include "diaporama.h"
#include "imagedansdiaporama.h"
using namespace std;

class Lecteur
{
public:
    Lecteur(string mode, bool loop, Diaporama* enLecture);
    ~Lecteur();

    //Getter
    string getMode();
    bool getBoucle();
    Diaporama* getDiaporama();

    //Setter
    void setMode(const string &newMode);
    void setBoucle(bool newBoucle);

    //Autres méthodes
    void avancer();            // incrémente pPosImageCourante, modulo nbImages(pDiaporama)
    void reculer();             // décrémente pPosImageCourante, modulo nbImages(pDiaporama)
    void changerDiaporama(Diaporama * UnDiaporama);    // permet de choisir un diaporama



private:
    string m_mode;
    bool m_boucle;
    Diaporama * m_diapoEnLecture;

};

#endif // LECTEUR_H
