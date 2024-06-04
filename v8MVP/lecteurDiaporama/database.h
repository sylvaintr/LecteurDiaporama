#ifndef DATABASE_H
#define DATABASE_H

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QStringList>

#define DATABASE_NAME "Lakartxela"
#define CONNECT_type "QOBDC"

class database
{
public:
    database();
    bool openDataBase();
    void closeDataBase();
    const QSqlDatabase &getMybd() const;
    void setMybd(const QSqlDatabase &newMybd);
    QStringList nomDiaporama();
    void imagesDUnDiaporama(int id,QList<int>& rank,QStringList& listetitre, QStringList& listecategorie, QStringList& listechemain);
    void caractericitiqueDiaporama(int id );
    QStringList toutesLesImages();
    void mettreJourNomImg(QString,int);
    void changerVitesse(int vitesse, int iddiporama);
    QStringList tousLesChemins();
    void mettreJourCheminImg(QString,int);

private:
    QSqlDatabase mybd;

};

#endif // DATABASE_H
