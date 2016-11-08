#-------------------------------------------------
#
# Project created by QtCreator 2016-10-24T17:16:27
#
#-------------------------------------------------

QT       += core gui
QT += widgets
#greaterThan(QT_MAJOR_VERSION, 4):

TARGET = Bel1
TEMPLATE = app

SOURCES += main.cpp\
        GUI/Settings/settings.cpp \
        GUI/Settings/Camera/addcameramainwidget.cpp \
        GUI/Settings/Camera/addmapwidget.cpp \
        GUI/Settings/Camera/addcamerawidget.cpp \
        Model/cameraitem.cpp \
        Model/cameralistmodel.cpp \
        Model/mapitem.cpp \
        Model/maplistmodel.cpp \
        GUI/Live/live.cpp \
        GUI/Alarm/alarm.cpp \
        GUI/PlayBack/playback.cpp \
        GUI/Live/toolboxmediasourcelistingwidget.cpp \
        GUI/Live/toolboxmapcontrolwidget.cpp \
        GUI/Live/toolboxptzcontrolwidget.cpp \
        GUI/Live/toolboxlayoutcontrolwidget.cpp \
        GUI/Live/toolboxviewcontrolwidget.cpp \
        GUI/Live/toolboxeventscontrolwidget.cpp \
        GUI/Live/toolboxcarouselcontrolwidget.cpp \
        GUI/Live/onexone.cpp \
        GUI/Live/twoxtwo.cpp \
        GUI/Live/threexthree.cpp \
        GUI/Live/fourxfour.cpp \
        Model/Live/mediasourcelistingmodel.cpp \
        Model/Live/mediasourcelistingitem.cpp \
        Model/Live/viewitem.cpp \
        Model/Live/viewmodel.cpp \
        Model/Live/eventsitem.cpp \
        Model/Live/eventsmodel.cpp \
        Model/Live/carouselitem.cpp \
        Model/Live/carouselmodel.cpp \
        Model/cameragroupitem.cpp \
        Model/cameragroupmodel.cpp \
        Model/manufactureitem.cpp \
        Model/manufacturemodel.cpp \
        Model/modelitem.cpp \
        Model/modelmodel.cpp \
        Model/usergroupitem.cpp \
        Model/usergroupmodel.cpp \
        managebelvms.cpp \
        controller.cpp \
        modelsingleton.cpp

HEADERS  +=\
        GUI/Settings/settings.h \
        GUI/Settings/Camera/addcameramainwidget.h \
        GUI/Settings/Camera/addmapwidget.h \
        GUI/Settings/Camera/addcamerawidget.h \
        GUI/Live/live.h \
        GUI/Alarm/alarm.h \
        GUI/PlayBack/playback.h \       
        GUI/Live/toolboxmediasourcelistingwidget.h \
        GUI/Live/toolboxmapcontrolwidget.h \
        GUI/Live/toolboxptzcontrolwidget.h \
        GUI/Live/toolboxlayoutcontrolwidget.h \
        GUI/Live/toolboxviewcontrolwidget.h \
        GUI/Live/toolboxeventscontrolwidget.h \
        GUI/Live/toolboxcarouselcontrolwidget.h \
        GUI/Live/onexone.h \
        GUI/Live/twoxtwo.h \
        GUI/Live/threexthree.h \
        GUI/Live/fourxfour.h \
        Model/cameraitem.h \
        Model/cameralistmodel.h \
        Model/mapitem.h \
        Model/maplistmodel.h \
        Model/Live/mediasourcelistingmodel.h \
        Model/Live/mediasourcelistingitem.h \
        Model/Live/viewitem.h \
        Model/Live/viewmodel.h \
        Model/Live/eventsitem.h \
        Model/Live/eventsmodel.h \
        Model/Live/carouselitem.h \
        Model/Live/carouselmodel.h \
        Model/cameragroupitem.h \
        Model/cameragroupmodel.h \
        Model/manufactureitem.h \
        Model/manufacturemodel.h \
        Model/modelmodel.h \
        Model/usergroupitem.h \
        Model/usergroupmodel.h \
        Model/modelitem.h \
        managebelvms.h \
        controller.h \
        modelsingleton.h


RESOURCES += \
    rec.qrc
