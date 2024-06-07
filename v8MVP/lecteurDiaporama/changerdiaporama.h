#ifndef CHANGERDIAPORAMA_H
#define CHANGERDIAPORAMA_H

#include <QDialog>
#include <QSqlQuery>


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

    LecteurPresentation *getPresentation() const;
    void setPresentation(LecteurPresentation *newPresantation);
    void majinterface();
public slots:
    void annuler();
    void valider();
private:
    Ui::changerdiaporama *ui;
    LecteurPresentation * _presentation;

};

#endif // CHANGERDIAPORAMA_H
