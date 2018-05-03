#ifndef FILESYSTEM_H
#define FILESYSTEM_H

#include<QString>
#include<QDir>

namespace Utils {
    namespace FS {
        QString toNativePath(const QString &path);
        QString fromNaticePath(const QString &path);
    }
}

#endif // FILESYSTEM_H
