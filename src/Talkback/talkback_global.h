#ifndef TALKBACK_GLOBAL_H
#define TALKBACK_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(TALKBACK_LIBRARY)
#  define TALKBACKSHARED_EXPORT Q_DECL_EXPORT
#else
#  define TALKBACKSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // TALKBACK_GLOBAL_H
