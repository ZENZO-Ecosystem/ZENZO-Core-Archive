// Copyright (c) 2018-2019 The ZENZO developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#if defined(HAVE_CONFIG_H)
#include "config/zenzo-config.h"
#endif

#include "qt/backupdialog.h"
#include "ui_backupdialog.h"

#include "bitcoingui.h"
#include "init.h"
#include "wallet.h"
#include "hdchain.h"
#include "guiutil.h"

#include <QIcon>
#include <QMenu>
#include <QString>
#include <QMessageBox>
#include <QSortFilterProxyModel>

BackupPage::BackupPage(QWidget* parent) : QDialog(parent),
                                           ui(new Ui::BackupPage)
{
    ui->setupUi(this);

    this->setWindowTitle("ZENZO Core - Wallet Backup");

    key = BackupPage::getSeed();
    ui->textSeed->setText(key);

    // Build context menu
    contextMenu = new QMenu();
    contextMenu->addSeparator();


    connect(ui->closeButton, SIGNAL(clicked()), this, SLOT(accept()));
    connect(ui->copySeed, SIGNAL(clicked()), this, SLOT(copySeed()));
}



BackupPage::~BackupPage()
{
    delete ui;
}

// Pull active HDChain and return the seed
QString BackupPage::getSeed ()
{
    CHDChain hdChainCurrent;
    if (!pwalletMain->GetHDChain(hdChainCurrent))
        return QString::fromStdString("This wallet is not a HD wallet.");

    if (!pwalletMain->GetDecryptedHDChain(hdChainCurrent))
        return QString::fromStdString("Cannot decrypt HD seed.");

    SecureString ssMnemonic;
    SecureString ssMnemonicPassphrase;
    hdChainCurrent.GetMnemonic(ssMnemonic, ssMnemonicPassphrase);

    return QString::fromStdString(ssMnemonic.c_str());
}

// Pull HDChain and copy the seed to the clipboard
void BackupPage::copySeed ()
{
    GUIUtil::setClipboard(BackupPage::getSeed());
}
