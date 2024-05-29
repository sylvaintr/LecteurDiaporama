#ifndef DATABASE_H
#define DATABASE_H

#include <QSqlDatabase>

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

private:
    QSqlDatabase mybd;
};

#endif // DATABASE_H
