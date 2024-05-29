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
