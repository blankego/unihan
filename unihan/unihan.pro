#-------------------------------------------------
#
# Project created by QtCreator 2011-04-19T20:11:27
#
#-------------------------------------------------

QT       -= core gui

TARGET = unihan
TEMPLATE = lib

QMAKE_CXXFLAGS	+= -std=gnu++0x

CONFIG += staticlib

SOURCES += unihan.cpp

HEADERS += unihan.h \
    bUtil.h
unix:!symbian {
    maemo5 {
        target.path = /opt/usr/lib
    } else {
        target.path = /usr/local/lib
    }
    INSTALLS += target
}
