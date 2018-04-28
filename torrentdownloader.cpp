#include "torrentdownloader.h"
#include "ui_torrentdownloader.h"
#include "abouttorrentdownloader.h"

TorrentDownloader::TorrentDownloader(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TorrentDownloader)
{
    ui->setupUi(this);
}

TorrentDownloader::~TorrentDownloader()
{
    delete ui;
}

void TorrentDownloader::on_actionAbout_TorrentDownloader_triggered()
{
    AboutTorrentDownloader *about = new AboutTorrentDownloader();
    about->exec();
}
