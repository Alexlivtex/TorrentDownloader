#include"filesystem.h"

QString Utils::FS::toNativePath(const QString &path)
{
    return QDir::toNativeSeparators(path);
}

QString Utils::FS::fromNaticePath(const QString &path)
{
    return QDir::fromNativeSeparators(path);
}
