#include "torrentdownloader.h"
#include "ui_torrentdownloader.h"
#include "abouttorrentdownloader.h"
#include "downloadingitem.h"

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

void TorrentDownloader::on_actionOpen_triggered()
{
    //ui->listWidget->addItem("Hello");
    QListWidgetItem *listItem = new QListWidgetItem(ui->listWidget);

    ui->listWidget->addItem(listItem);

    DownloadingItem *item = new DownloadingItem();

    listItem->setSizeHint(item->sizeHint());

    ui->listWidget->setItemWidget(listItem, item);

}
