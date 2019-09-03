// Copyright (c) 2018-2019 The ZENZO developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOIN_QT_BACKUPDIALOG_H
#define BITCOIN_QT_BACKUPDIALOG_H

#include <QAbstractButton>
#include <QAction>
#include <QDialog>
#include <QList>
#include <QMenu>
#include <QPoint>
#include <QString>
#include <QTreeWidgetItem>

class WalletModel;

namespace Ui
{
class BackupPage;
}

QT_BEGIN_NAMESPACE
QT_END_NAMESPACE

/** Widget that shows the wallet's active HD seed phrase
  */
class BackupPage : public QDialog
{
    Q_OBJECT

public:

    explicit BackupPage(QWidget* parent);
    ~BackupPage();
    QString getSeed();
    const QString& getReturnValue() const { return returnValue; }

private:
    Ui::BackupPage* ui;
    QMenu* contextMenu;
    QString key;
    QString returnValue;

private slots:
    void copySeed();
};

#endif // BITCOIN_QT_BACKUPDIALOG_H

