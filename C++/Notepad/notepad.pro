QT       += core gui printsupport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = notepad
TEMPLATE = app


SOURCES += main.cpp\
        notepad.cpp \
    finder.cpp

HEADERS  += notepad.h \
    finder.h

FORMS    += notepad.ui \
    finder.ui

RESOURCES += \
    resources.qrc

DISTFILES +=
