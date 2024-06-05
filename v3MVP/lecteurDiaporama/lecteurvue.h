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
    LecteurPresentation *getPresentation() const;
    void setPresentation(LecteurPresentation *newPresantation);
    void majVue(ImageDansDiaporama * img);

public slots:
    void afficherFenetreAProposDe();
    void demanderQuitter();
    void demanderAvancer();
    void demanderReculer();
private:
    Ui::LecteurVue *ui;
    LecteurPresentation * _presantation;

};

#endif // LECTEURVUE_H
