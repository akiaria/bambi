QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    article1.cpp \
    article2.cpp \
    article3.cpp \
    article4.cpp \
    article5.cpp \
    article6.cpp \
    dialog.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    article1.h \
    article2.h \
    article3.h \
    article4.h \
    article5.h \
    article6.h \
    dialog.h \
    mainwindow.h

FORMS += \
    article1.ui \
    article2.ui \
    article3.ui \
    article4.ui \
    article5.ui \
    article6.ui \
    dialog.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
