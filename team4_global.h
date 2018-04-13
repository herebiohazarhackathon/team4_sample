#ifndef TEAM4_GLOBAL_H
#define TEAM4_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(TEAM4_LIBRARY)
#  define TEAM4SHARED_EXPORT Q_DECL_EXPORT
#else
#  define TEAM4SHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // TEAM4_GLOBAL_H
