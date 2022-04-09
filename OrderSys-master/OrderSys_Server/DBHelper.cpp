#include "DBHelper.h"
#include <QDebug>
DBHelper::DBHelper()
{
    if(QSqlDatabase::contains("qt_sql_default_connection")){
        db = QSqlDatabase::database("qt_sql_default_connection");
    }else{
        db = QSqlDatabase::addDatabase("QSQLITE");
    }
    db.setHostName("localhost");
    db.setPort(3306);
    db.setUserName("root");
    db.setPassword("123456");
    db.setDatabaseName("order_sys.db");
    if(!db.open()){
        qDebug() << "数据库连接失败";
    }

    QSqlQuery query;
//    if (query.exec(QString("drop table orders);")) == false){
//        qDebug() << "drop error:exec";
//    }
    if (query.exec(QString("create table if not exists user(id integer, usertype integer, username char, password integer);")) == false){
        qDebug() << "error:exec";
    }
    if (query.exec(QString("create table if not exists menu(dishid integer, dishname char,price integer, status integer);")) == false){
        qDebug() << "error:exec";
    }
    if (query.exec(QString("create table if not exists bills("
                           "billid datetime, "
                           "tableid integer,"
                           "dishid integer,"
                           "dishname char,"
                           "price integer,"
                           "username char，"
                           "status integer);")) == false){
        qDebug() << "error:exec";
    }
    if (query.exec(QString("create table if not exists orders("
                           "orderid datetime, "
                           "tableid integer,"
                           "dishid integer,"
                           "status integer,"
                           "comment char);")) == false){
        qDebug() << "error:exec";
    }


    if (query.exec(QString("insert into [user]([id], [usertype], [username], [password]) select 111, 2, 'l', 111 where not exists (select * from [user] where [username]='l');")) == false){
        qDebug() << "error:exec";
    }
    if (query.exec(QString("insert into [user]([id], [usertype], [username], [password]) select 222, 0, '管理员', 222 where not exists (select * from [user] where [username]='管理员');")) == false){
        qDebug() << "error:exec";
    }
}

QSqlDatabase DBHelper::getDB()
{
    return db;
}

DBHelper::~DBHelper()
{
    db.close();
}

