#ifndef QTCREATORNOTIFY_GLOBAL_HH
#define QTCREATORNOTIFY_GLOBAL_HH

#include <QtGlobal>

#if defined(QTCREATORNOTIFY_LIBRARY)
#  define QTCREATORNOTIFYSHARED_EXPORT Q_DECL_EXPORT
#else
#  define QTCREATORNOTIFYSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // QTCREATORNOTIFY_GLOBAL_H

