QT += core gui sql


TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle

SOURCES += \
        aproposde.cpp \
        changerdiaporama.cpp \
        database.cpp \
        diaporama.cpp \
        imageDansDiaporama.cpp \
        lecteur.cpp \
        lecteurpresentation.cpp \
        lecteurvue.cpp \
        main.cpp

HEADERS += \
    aproposde.h \
    changerdiaporama.h \
    database.h \
    diaporama.h \
    imageDansDiaporama.h \
    lecteur.h \
    lecteurpresentation.h \
    lecteurvue.h

QT += widgets

FORMS += \
    aproposde.ui \
    changerdiaporama.ui \
    lecteurvue.ui

RESOURCES += \
    ../cartesDisney/image.qrc
