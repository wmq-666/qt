#ifndef IDATABASE_H
#define IDATABASE_H

#include <QtSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>

class IDatabase
{
public:
    IDatabase();
    ~IDatabase();

    // 核心功能：连接数据库
    bool connect();

    // 核心功能：验证用户
    bool validateUser(const QString& username, const QString& password);

    // 辅助功能（可选保留）
    QSqlQuery query(const QString& sql);
    QSqlDatabase getDatabase();

private:
    QSqlDatabase m_db;
    bool m_isConnected;
};

#endif // IDATABASE_H
