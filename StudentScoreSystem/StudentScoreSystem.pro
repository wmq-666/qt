QT       += core gui sql charts

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0
# 指定生成的可执行文件名
TARGET = StudentScoreSystem
# 添加资源文件（可选）
RESOURCES += \
    resources.qrc


SOURCES += \
    idatabase.cpp \
    main.cpp \
    login.cpp \
    score.cpp \
    statistics.cpp \
    trend.cpp \
    welcome.cpp

HEADERS += \
    idatabase.h \
    login.h \
    score.h \
    statistics.h \
    trend.h \
    welcome.h

FORMS += \
    login.ui \
    score.ui \
    statistics.ui \
    trend.ui \
    welcome.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
