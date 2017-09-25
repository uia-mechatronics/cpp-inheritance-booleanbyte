TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    position.cpp \
    bever.cpp \
    dolphin.cpp

HEADERS += \
    ianimal.h \
    ipositionprovider.h \
    position.h \
    bever.h \
    dolphin.h
