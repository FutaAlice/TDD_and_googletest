QT -= gui

CONFIG += c++14 console
CONFIG -= app_bundle

DEFINES += QT_DEPRECATED_WARNINGS

SOURCES += main.cpp \
    macro_test.cpp \
    macro_test_f.cpp \
    macro_test_p.cpp

LIBS += -lgtest
