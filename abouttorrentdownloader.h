#ifndef ABOUTTORRENTDOWNLOADER_H
#define ABOUTTORRENTDOWNLOADER_H

#include <QDialog>

namespace Ui {
class AboutTorrentDownloader;
}

class AboutTorrentDownloader : public QDialog
{
    Q_OBJECT

public:
    explicit AboutTorrentDownloader(QWidget *parent = 0);
    ~AboutTorrentDownloader();

private:
    Ui::AboutTorrentDownloader *ui;
};

#endif // ABOUTTORRENTDOWNLOADER_H
