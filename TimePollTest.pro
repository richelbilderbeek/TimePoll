# Tests of the data of TimePoll, without a test framework.
# Unlike the website, this does not need Wt
include(../RibiClasses/CppStopwatch/CppStopwatch.pri)

INCLUDEPATH += ../TimePoll
SOURCES += timepolldata.cpp timepoll_test.cpp
HEADERS += timepolldata.h

CONFIG += console c++17
CONFIG -= app_bundle
QT -= core gui
QMAKE_CXXFLAGS += -Wall -Wextra -Werror
