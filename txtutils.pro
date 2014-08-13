TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt


QMAKE_CC = clang
QMAKE_CXX = clang++
QMAKE_CXXFLAGS += -std=c++11
QMAKE_CXXFLAGS += -D_FILE_OFFSET_BITS=64
INCLUDEPATH += /usr/local/Cellar/gcc/4.8.3_1/lib/gcc/x86_64-apple-darwin13.2.0/4.8.3/include/c++/
INCLUDEPATH += /usr/local/include/
INCLUDEPATH += /Library/Frameworks/R.framework/Versions/3.1/Resources/include
INCLUDEPATH += /Library/Frameworks/R.framework/Versions/3.1/Resources/library/Rcpp/include
INCLUDEPATH += /Library/Frameworks/R.framework/Versions/3.1/Resources/library/RcppArmadillo/include
LIBS += -L/Library/Frameworks/R.framework/Versions/3.1/Resources/lib

SOURCES += main.cpp \
    src/countlines.cpp \
    src/fileExists.cpp \
    src/ncols.cpp \
    src/printlines.cpp \
    src/readcols.cpp \
    src/readcol.cpp

HEADERS += \
    src/armaheader.h \
    src/countlines.h \
    src/fileExists.h \
    src/ncols.h \
    src/printlines.h \
    src/readcols.h \
    src/readcol.h \
    src/debugPrint.h

