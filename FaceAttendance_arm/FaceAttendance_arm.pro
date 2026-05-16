QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11


# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    faceattendance.cpp

HEADERS += \
    faceattendance.h

#添加opencv3.4.1头文件
INCLUDEPATH += /opt/opencv3-arm/include
INCLUDEPATH += /opt/opencv3-arm/include/opencv2

#添加opencv3.4.1的库
LIBS += -L/opt/opencv3-arm/lib \
        -lopencv_core \
        -lopencv_ml \
        -lopencv_dnn \
        -lopencv_flann \
        -lopencv_photo \
        -lopencv_shape \
        -lopencv_video \
        -lopencv_highgui \
        -lopencv_imgproc \
        -lopencv_videoio \
        -lopencv_superres \
        -lopencv_imgcodecs \
        -lopencv_stitching \
        -lopencv_videostab \
        -lopencv_features2d \
        -lopencv_calib3d \
        -lopencv_objdetect


# 将交叉编译器的 lib 路径放在最前面
QMAKE_LIBDIR = /usr/local/arm/gcc-linaro-7.5.0-2019.12-x86_64_arm-linux-gnueabihf/arm-linux-gnueabihf/lib
LIBS += -L$$QMAKE_LIBDIR -lstdc++ -lpthread

# 添加链接器搜索路径（运行时库路径）
QMAKE_LFLAGS += -Wl,-rpath-link=/usr/local/arm/gcc-linaro-7.5.0-2019.12-x86_64_arm-linux-gnueabihf/arm-linux-gnueabihf/lib

FORMS += \
    faceattendance.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    fonts.qrc \
    res.qrc

