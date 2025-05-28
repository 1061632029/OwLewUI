#pragma once

#include <QtGui/qtguiglobal.h>
#include <QtWidgets/qtwidgets-config.h>


#  if defined(OWLEW_QT_STATIC)
#    define OWLEWQ_WIDGETS_EXPORT _declspec(dllexport)
#  else
#    define OWLEWQ_WIDGETS_EXPORT _declspec(dllimport)
#  endif

