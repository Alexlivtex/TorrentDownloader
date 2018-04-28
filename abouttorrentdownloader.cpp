#include "abouttorrentdownloader.h"
#include "ui_abouttorrentdownloader.h"

AboutTorrentDownloader::AboutTorrentDownloader(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AboutTorrentDownloader)
{
    ui->setupUi(this);
}

AboutTorrentDownloader::~AboutTorrentDownloader()
{
    delete ui;
}
