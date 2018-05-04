#ifndef FILESYSTEM_H
#define FILESYSTEM_H

#include<QString>
#include<QDir>

namespace Utils {
    namespace FS {
        QString toNativePath(const QString &path);
        QString fromNaticePath(const QString &path);
        QString getFileExtension(const QString &filename);
        QString getFileName(const QString& filename);
    }
}

#endif // FILESYSTEM_H
