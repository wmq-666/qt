#include "idatabase.h"
#include <QFileInfo>

IDatabase::IDatabase() : m_isConnected(false)
{
}

IDatabase::~IDatabase()
{

}

bool IDatabase::connect()
{
    // 数据库路径（确保路径正确）
    QString dbPath = "C:/Users/15417/Desktop/lab/database/student.db";

    // 检查是否已经存在默认连接，如果存在且已打开则直接返回
    if (QSqlDatabase::contains("qt_sql_default_connection")) {
        m_db = QSqlDatabase::database("qt_sql_default_connection");
        if (m_db.isOpen()) return true;
    } else {
        // 创建默认连接（不传第二个参数）
        m_db = QSqlDatabase::addDatabase("QSQLITE");
    }

    m_db.setDatabaseName(dbPath);

    if (!m_db.open()) {
        qDebug() << "数据库连接失败:" << m_db.lastError().text();
        return false;
    }

    qDebug() << "数据库连接成功，路径:" << dbPath;
    return true;
}

bool IDatabase::validateUser(const QString& username, const QString& password)
{
    // 确保数据库已连接
    if (!connect()) {
        return false;
    }

    // 使用参数化查询（更安全）
    QSqlQuery query(m_db);
    query.prepare("SELECT COUNT(*) FROM users WHERE username = ? AND password_hash = ?");
    query.addBindValue(username);
    query.addBindValue(password);

    if (!query.exec()) {
        qDebug() << "用户验证失败:" << query.lastError().text();
        return false;
    }

    if (query.next() && query.value(0).toInt() > 0) {
        qDebug() << "用户验证成功:" << username;
        return true;
    }

    qDebug() << "用户验证失败: 用户名或密码错误";
    return false;
}

QSqlQuery IDatabase::query(const QString& sql)
{
    if (!connect()) {
        return QSqlQuery();
    }

    QSqlQuery q(m_db);
    q.exec(sql);
    return q;
}

QSqlDatabase IDatabase::getDatabase()
{
    connect();  // 确保已连接
    return m_db;
}
