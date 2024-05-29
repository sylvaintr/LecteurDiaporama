#ifndef LECTEURVUE_H
#define LECTEURVUE_H

#include <QObject>
#include <QMainWindow>
#include <QTimer>
#include "lecteurpresentation.h"
#include "aproposde.h"
#include "imageDansDiaporama.h"
#include "diaporama.h"

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
    LecteurPresentation *getPresantation() const;
    void setPresantation(LecteurPresentation *newPresantation);
    void majvue(ImageDansDiaporama * img);

    QTimer *getTimer() const;
    void setTimer(QTimer *newTimer);

    void majvuediaporama(Diaporama *d);
public slots:
    void afficherfenetreapropode();
    void demanderquiter();
    void demanderAvancer();
    void demanderReculer();
    void demanderAutomatique();
    void demanderAccelerer();
    void demanderRalentir();
    void demanderchangementvitesse();
    void demanderVider();
    void demanderChanger();
    void demanderAvancerauto();
    void demanderChangerimg();
private:
    Ui::LecteurVue *ui;
    LecteurPresentation * _presantation;
    QTimer * timer;

};

#endif // LECTEURVUE_H
