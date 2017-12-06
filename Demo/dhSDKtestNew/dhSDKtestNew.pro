TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp



unix: LIBS += -L/usr/local/lib/ \
            -lopencv_core \
            -lopencv_imgproc \
            -lopencv_highgui \
            -lopencv_video \

unix: LIBS += -L/usr/lib/ \
              -L/usr/lib/x86_64-linux-gnu \
              -llapack \
              -lpthread

unix: LIBS += -L/home/gxd/RmCamera/lib/ \
        -lhcnetsdk \
        -lHCCore \
        -lhpr \
        -lPlayCtrl \
        -lSuperRender \
        -lAudioRender \
        -ldhnetsdk \
        -ldhplay \
        -lRmCamera


INCLUDEPATH += /home/gxd/RmCamera/include
DEPENDPATH += /home/gxd/RmCamera/include

INCLUDEPATH += /usr/local/include
DEPENDPATH += /usr/local/include

