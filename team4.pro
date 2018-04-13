#-------------------------------------------------
#
# Project created by QtCreator 2018-04-12T23:48:33
#
#-------------------------------------------------

QT       -= gui qt

TARGET = team4
TEMPLATE = lib

DEFINES += TEAM4_LIBRARY

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        team4.cpp \
    derivative.cpp \
    variable.cpp \
    gcd.cpp \
    uniq.cpp

HEADERS += \
        team4.h \
        team4_global.h \ 
    haff.h \
    sort.h \
    derivative.h \
    variable.h \
    derivtask.h \
    gcd.h \
    uniq.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
