#ifndef CHANGERDIAPORAMA_H
#define CHANGERDIAPORAMA_H

#include <QDialog>
#include <QSqlQuery>
#include "database.h"

class LecteurPresentation;
namespace Ui {
class changerdiaporama;
}

class changerdiaporama : public QDialog
{
    Q_OBJECT

public:
    explicit changerdiaporama(QWidget *parent = nullptr);
    ~changerdiaporama();
    int getDiaporamaid() const;
    void setDiaporamaid(int newDiaporamaid);

    LecteurPresentation *presantation() const;
    void setPresantation(LecteurPresentation *newPresantation);

public slots:
    void annuler();
    void valider();
private:
    Ui::changerdiaporama *ui;
    LecteurPresentation * _presantation;
    database *db;
};

#endif // CHANGERDIAPORAMA_H
