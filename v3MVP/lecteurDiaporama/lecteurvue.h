#ifndef LECTEURVUE_H
#define LECTEURVUE_H

#include <QObject>
#include <QMainWindow>
#include "lecteurpresentation.h"
#include "aproposde.h"
#include "imageDansDiaporama.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class LecteurVue;
}
QT_END_NAMESPACE

class LecteurVue : public QMainWindow
{
    Q_OBJECT

public:
    explicit LecteurVue(QWidget *parent = nullptr);
    ~LecteurVue();
    void nouvelleConnexion(QObject* p);
    void supprimerConnexion(QObject* p);
    LecteurPresentation *getPresantation() const;
    void setPresantation(LecteurPresentation *newPresantation);
    void majvue(ImageDansDiaporama * img);

public slots:
    void afficherfenetreapropode();
    void demanderquiter();
    void demanderAvancer();
    void demanderReculer();
private:
    Ui::LecteurVue *ui;
    LecteurPresentation * _presantation;

};

#endif // LECTEURVUE_H
