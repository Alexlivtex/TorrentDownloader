#include "torrentdownloader.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TorrentDownloader w;
    w.show();

    return a.exec();
}
