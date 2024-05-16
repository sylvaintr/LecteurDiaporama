TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle

SOURCES += \
        aproposde.cpp \
        diaporama.cpp \
        imageDansDiaporama.cpp \
        lecteur.cpp \
        lecteurpresentation.cpp \
        lecteurvue.cpp \
        main.cpp

HEADERS += \
    aproposde.h \
    diaporama.h \
    imageDansDiaporama.h \
    lecteur.h \
    lecteurpresentation.h \
    lecteurvue.h

QT += widgets

FORMS += \
    aproposde.ui \
    lecteurvue.ui

RESOURCES += \
    ../cartesDisney/image.qrc
