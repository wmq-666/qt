#include "idatabase.h"
#include <QFileInfo>

IDatabase::IDatabase() : m_isConnected(false)
{
}

IDatabase::~IDatabase()
{
    if (m_db.isOpen()) {
        m_db.close();
    }
}

bool IDatabase::connect()
{
    // 如果已经连接，直接返回成功
    if (m_isConnected && m_db.isOpen()) {
        return true;
    }

    // 数据库路径
    QString dbPath = "C:/Users/15417/Desktop/lab/database/student.db";

    // 检查文件是否存在
    if (!QFileInfo::exists(dbPath)) {
        qDebug() << "数据库文件不存在:" << dbPath;
        return false;
    }

    // 创建连接（每次都使用新的连接名）
    static int counter = 0;
    QString connectionName = QString("DB_%1").arg(++counter);

    m_db = QSqlDatabase::addDatabase("QSQLITE", connectionName);
    m_db.setDatabaseName(dbPath);

    if (!m_db.open()) {
        qDebug() << "数据库连接失败:" << m_db.lastError().text();
        m_isConnected = false;
        return false;
    }

    m_isConnected = true;
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
