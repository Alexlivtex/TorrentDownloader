#ifndef DOWNLOADINGITEM_H
#define DOWNLOADINGITEM_H

#include <QWidget>

namespace Ui {
class DownloadingItem;
}

class DownloadingItem : public QWidget
{
    Q_OBJECT

public:
    explicit DownloadingItem(QWidget *parent = 0);
    ~DownloadingItem();

private:
    Ui::DownloadingItem *ui;
};

#endif // DOWNLOADINGITEM_H
