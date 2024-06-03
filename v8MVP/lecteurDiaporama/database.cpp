#include "database.h"


database::database()
{





}
bool database::openDataBase()
{
    QSqlDatabase mybd = QSqlDatabase::addDatabase("QODBC");
    mybd.setDatabaseName("Lakartxela");

    bool cc = mybd.open();
 return (cc);
}

void database::closeDataBase()
{
    mybd.close();
}

const QSqlDatabase &database::getMybd() const
{
    return mybd;
}

void database::setMybd(const QSqlDatabase &newMybd)
{
    mybd = newMybd;
}

QStringList database::nomdiaporama()
{
    QStringList listdiaporama;
    if(openDataBase()){

        QSqlQuery query;
        query.exec("SELECT * FROM Diaporamas ORDER BY idDiaporama");
             for(int i=0; query.next(); i++ ){
                 listdiaporama << (query.value(1).toString());
             }
         return(listdiaporama);
    }

}

void database::imagesDUnDiaporama(int id, QList<int> &rank, QStringList &listetitre, QStringList &listecategorie, QStringList &listechemain)
{
    QSqlQuery query;
        query.prepare("SELECT D.uriPhoto, D.titrePhoto , F.nomFamille, DDD.rang FROM Diapos D JOIN DiaposDansDiaporama DDD on DDD.idDiapo =D.idphoto JOIN Familles F on F.idFamille=D.idFam WHERE DDD.idDiaporama = ? ORDER BY DDD.rang");
        query.addBindValue(id);
        query.exec();
       for(int i =0 ; query.next(); i++){
           rank << query.value(3).toInt();
           listecategorie << query.value(2).toString();
           listechemain << ":"+query.value(0).toString()    ;
           listetitre << query.value(1).toString();
       }
}

QStringList database::touteslesimages()
{
    QStringList listeimage;
    QSqlQuery query;
    query.exec("SELECT * FROM Diapos ");
    for(int i = 0; query.next(); i++){
        listeimage << query.value(1).toString();
    }
    return(listeimage);
}
QStringList database::tousleschemins()
{
    QStringList listeimage;
    QSqlQuery query;
    query.exec("SELECT * FROM Diapos ");
    for(int i = 0; query.next(); i++){
        listeimage << query.value(3).toString();
    }
    return(listeimage);
}
void database::mettreJourcheminImg(QString nouvche, int idphoto)
{
    QSqlQuery query;
    query.prepare("UPDATE Diapos SET uriPhoto = ? WHERE idphoto = ?");
    query.addBindValue(nouvche);
    query.addBindValue(idphoto);
    query.exec();
}
void database::mettreJourNomImg(QString nouvNom, int idphoto)
{
    QSqlQuery query;
    query.prepare("UPDATE Diapos SET titrePhoto = ? WHERE idphoto = ?");
    query.addBindValue(nouvNom);
    query.addBindValue(idphoto);
    query.exec();
}

void database::changervitesse(int vitesse, int iddiporama )
{

        QSqlQuery query;
        query.prepare("UPDATE Diaporamas SET vitesseDefilement = ? WHERE idDiaporama = ?");
        query.addBindValue(vitesse);
        query.addBindValue(iddiporama);
        query.exec();

}



