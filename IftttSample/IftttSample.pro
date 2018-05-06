QT += core gui
QT += network
QT += widgets

TARGET = IftttSample
TEMPLATE = app

DEFINES += QT_DEPRECATED_WARNINGS

SOURCES += \
        main.cpp \
        widget.cpp \
    iftttaccessmanager.cpp \
    ifttttest.cpp

HEADERS += \
        widget.h \
    iftttaccessmanager.h \
    ifttttest.h

FORMS += \
        widget.ui
