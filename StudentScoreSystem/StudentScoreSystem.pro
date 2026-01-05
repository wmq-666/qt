QT += core gui sql charts widgets

CONFIG += c++17

# 指定生成的可执行文件名
TARGET = StudentScoreSystem

# 添加资源文件
RESOURCES += resources.qrc

# 源文件 - 确保顺序正确
SOURCES += \
    main.cpp \
    login.cpp \
    welcome.cpp \
    score.cpp \
    statistics.cpp \
    trend.cpp \
    idatabase.cpp

# 头文件
HEADERS += \
    login.h \
    welcome.h \
    score.h \
    statistics.h \
    trend.h \
    idatabase.h

# UI文件
FORMS += \
    login.ui \
    welcome.ui \
    score.ui \
    statistics.ui \
    trend.ui

# 移除或注释掉这些行
# MOC_DIR = moc
# OBJECTS_DIR = obj

# 使用相对路径
INCLUDEPATH += .
DEPENDPATH += .

# 在 Windows 上
win32 {
    # 确保使用正确的编译器
    QMAKE_CXX = g++
    QMAKE_CC = gcc
    QMAKE_LINK = g++
}
