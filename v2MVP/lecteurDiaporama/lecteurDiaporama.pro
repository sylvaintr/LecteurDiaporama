TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle

SOURCES += \
        diaporama.cpp \
        imageDansDiaporama.cpp \
        lecteur.cpp \
        lecteurpresentation.cpp \
        lecteurvue.cpp \
        main.cpp

HEADERS += \
    diaporama.h \
    imageDansDiaporama.h \
    lecteur.h \
    lecteurpresentation.h \
    lecteurvue.h

QT += widgets

FORMS += \
    lecteurvue.ui

RESOURCES += \
    ../cartesDisney/image.qrc
