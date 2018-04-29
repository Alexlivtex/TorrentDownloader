#include "downloadingitem.h"
#include "ui_downloadingitem.h"

DownloadingItem::DownloadingItem(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DownloadingItem)
{
    ui->setupUi(this);
}

DownloadingItem::~DownloadingItem()
{
    delete ui;
}
