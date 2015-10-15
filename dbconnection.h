#ifndef DBCONNECTION_H
#define DBCONNECTION_H
#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QString>

class dbconnect{
private:
    QSqlDatabase db;
    QSqlQuery query;
public:
  dbconnect()
  {
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("mydoor.db");

    if (!db.open()) {
       QMessageBox::critical(0,"Cannot open database","Unable to establish a database connection.",QMessageBox::Cancel);
   }
   //  db.exec("SET NAMES 'UTF-8'");
  }

public:

    bool exe(const QString& str)
      {
        return query.exec(str);
      }
    QSqlQuery getquery(){
      return query;
    }


};

#endif // DBCONNECTION_H
