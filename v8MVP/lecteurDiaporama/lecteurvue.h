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
    LecteurPresentation *getPresentation() const;
    void setPresentation(LecteurPresentation *newPresantation);
    void majVue(ImageDansDiaporama * img);

    QTimer *getTimer() const;
    void setTimer(QTimer *newTimer);

    void majVueDiaporama(Diaporama *d);
public slots:
    void afficherFenetreAProposDe();
    void demanderQuitter();
    void demanderAvancer();
    void demanderReculer();
    void demanderAutomatique();
    void demanderAccelerer();
    void demanderRalentir();
    void demanderchangementvitesse();
    void demanderVider();
    void demanderChanger();
    void demanderAvancerAuto();
    void demanderChangerImg();
    void demanderChangerCheminImg();
private:
    Ui::LecteurVue *ui;
    LecteurPresentation * _presentation;
    QTimer * timer;

};

#endif // LECTEURVUE_H
