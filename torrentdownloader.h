#ifndef TORRENTDOWNLOADER_H
#define TORRENTDOWNLOADER_H

#include <QMainWindow>

namespace Ui {
class TorrentDownloader;
}

class TorrentDownloader : public QMainWindow
{
    Q_OBJECT

public:
    explicit TorrentDownloader(QWidget *parent = 0);
    ~TorrentDownloader();

private slots:
    void on_actionAbout_TorrentDownloader_triggered();

    void on_actionOpen_triggered();

private:
    Ui::TorrentDownloader *ui;
};

#endif // TORRENTDOWNLOADER_H
