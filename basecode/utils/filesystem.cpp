#include"filesystem.h"

QString Utils::FS::toNativePath(const QString &path)
{
    return QDir::toNativeSeparators(path);
}

QString Utils::FS::fromNaticePath(const QString &path)
{
    return QDir::fromNativeSeparators(path);
}

QString Utils::FS::getFileExtension(const QString &filename)
{
    const int pointerIndex = filename.lastIndexOf(".");
    return ( pointerIndex>= 0)? filename.mid(pointerIndex + 1):QString();
}

QString Utils::FS::getFileName(const QString &filename)
{
    QString name = fromNaticePath(filename);
    const int slashIndex = name.lastIndexOf("/");
    if(slashIndex == -1)
    {
        return name;
    }
    return name.mid(slashIndex + 1);
}
