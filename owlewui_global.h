#pragma once

#include <QtCore/qglobal.h>

#ifndef BUILD_STATIC
# if defined(OWLEWUI_LIB)
#  define OWLEWUI_EXPORT Q_DECL_EXPORT
# else
#  define OWLEWUI_EXPORT Q_DECL_IMPORT
# endif
#else
# define OWLEWUI_EXPORT
#endif
