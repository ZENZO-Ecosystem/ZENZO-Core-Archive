/********************************************************************************
** Form generated from reading UI file 'bip38tooldialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BIP38TOOLDIALOG_H
#define UI_BIP38TOOLDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qvalidatedlineedit.h"

QT_BEGIN_NAMESPACE

class Ui_Bip38ToolDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tabBip38Encrypt;
    QVBoxLayout *verticalLayout_SM;
    QLabel *infoLabel_ENC;
    QHBoxLayout *horizontalLayout_1_ENC;
    QLabel *label_5;
    QValidatedLineEdit *addressIn_ENC;
    QToolButton *addressBookButton_ENC;
    QToolButton *pasteButton_ENC;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_6;
    QLineEdit *passphraseIn_ENC;
    QHBoxLayout *horizontalLayout_2_ENC;
    QLabel *encryptedKeyLabel_ENC;
    QLineEdit *encryptedKeyOut_ENC;
    QToolButton *copyKeyButton_ENC;
    QHBoxLayout *horizontalLayout_3_ENC;
    QPushButton *encryptKeyButton_ENC;
    QPushButton *clearButton_ENC;
    QSpacerItem *horizontalSpacer_1_ENC;
    QLabel *statusLabel_ENC;
    QSpacerItem *horizontalSpacer_2_ENC;
    QWidget *tabBip38Decrypt;
    QVBoxLayout *verticalLayout_VM;
    QLabel *infoLabel_DEC;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QValidatedLineEdit *encryptedKeyIn_DEC;
    QToolButton *pasteButton_DEC;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *passphraseIn_DEC;
    QHBoxLayout *horizontalLayout_2_DEC;
    QPushButton *decryptKeyButton_DEC;
    QPushButton *clearButton_DEC;
    QSpacerItem *horizontalSpacer_1_DEC;
    QLabel *statusLabel_DEC;
    QSpacerItem *horizontalSpacer_2_DEC;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QValidatedLineEdit *decryptedKeyOut_DEC;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *importAddressButton_DEC;
    QLabel *label_4;
    QLineEdit *addressOut_DEC;

    void setupUi(QDialog *Bip38ToolDialog)
    {
        if (Bip38ToolDialog->objectName().isEmpty())
            Bip38ToolDialog->setObjectName(QStringLiteral("Bip38ToolDialog"));
        Bip38ToolDialog->resize(700, 334);
        Bip38ToolDialog->setModal(true);
        verticalLayout = new QVBoxLayout(Bip38ToolDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tabWidget = new QTabWidget(Bip38ToolDialog);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabBip38Encrypt = new QWidget();
        tabBip38Encrypt->setObjectName(QStringLiteral("tabBip38Encrypt"));
        verticalLayout_SM = new QVBoxLayout(tabBip38Encrypt);
        verticalLayout_SM->setObjectName(QStringLiteral("verticalLayout_SM"));
        infoLabel_ENC = new QLabel(tabBip38Encrypt);
        infoLabel_ENC->setObjectName(QStringLiteral("infoLabel_ENC"));
        infoLabel_ENC->setTextFormat(Qt::PlainText);
        infoLabel_ENC->setWordWrap(true);

        verticalLayout_SM->addWidget(infoLabel_ENC);

        horizontalLayout_1_ENC = new QHBoxLayout();
        horizontalLayout_1_ENC->setObjectName(QStringLiteral("horizontalLayout_1_ENC"));
        label_5 = new QLabel(tabBip38Encrypt);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMinimumSize(QSize(85, 0));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_1_ENC->addWidget(label_5);

        addressIn_ENC = new QValidatedLineEdit(tabBip38Encrypt);
        addressIn_ENC->setObjectName(QStringLiteral("addressIn_ENC"));

        horizontalLayout_1_ENC->addWidget(addressIn_ENC);

        addressBookButton_ENC = new QToolButton(tabBip38Encrypt);
        addressBookButton_ENC->setObjectName(QStringLiteral("addressBookButton_ENC"));
        addressBookButton_ENC->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/address-book"), QSize(), QIcon::Normal, QIcon::Off);
        addressBookButton_ENC->setIcon(icon);

        horizontalLayout_1_ENC->addWidget(addressBookButton_ENC);

        pasteButton_ENC = new QToolButton(tabBip38Encrypt);
        pasteButton_ENC->setObjectName(QStringLiteral("pasteButton_ENC"));
        pasteButton_ENC->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icons/editpaste"), QSize(), QIcon::Normal, QIcon::Off);
        pasteButton_ENC->setIcon(icon1);

        horizontalLayout_1_ENC->addWidget(pasteButton_ENC);


        verticalLayout_SM->addLayout(horizontalLayout_1_ENC);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_6 = new QLabel(tabBip38Encrypt);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setMinimumSize(QSize(85, 0));
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(label_6);

        passphraseIn_ENC = new QLineEdit(tabBip38Encrypt);
        passphraseIn_ENC->setObjectName(QStringLiteral("passphraseIn_ENC"));
        passphraseIn_ENC->setEchoMode(QLineEdit::Password);

        horizontalLayout_5->addWidget(passphraseIn_ENC);


        verticalLayout_SM->addLayout(horizontalLayout_5);

        horizontalLayout_2_ENC = new QHBoxLayout();
        horizontalLayout_2_ENC->setObjectName(QStringLiteral("horizontalLayout_2_ENC"));
        encryptedKeyLabel_ENC = new QLabel(tabBip38Encrypt);
        encryptedKeyLabel_ENC->setObjectName(QStringLiteral("encryptedKeyLabel_ENC"));
        encryptedKeyLabel_ENC->setMinimumSize(QSize(85, 0));
        encryptedKeyLabel_ENC->setTextFormat(Qt::PlainText);
        encryptedKeyLabel_ENC->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2_ENC->addWidget(encryptedKeyLabel_ENC);

        encryptedKeyOut_ENC = new QLineEdit(tabBip38Encrypt);
        encryptedKeyOut_ENC->setObjectName(QStringLiteral("encryptedKeyOut_ENC"));
        QFont font;
        font.setItalic(true);
        encryptedKeyOut_ENC->setFont(font);
        encryptedKeyOut_ENC->setReadOnly(true);

        horizontalLayout_2_ENC->addWidget(encryptedKeyOut_ENC);

        copyKeyButton_ENC = new QToolButton(tabBip38Encrypt);
        copyKeyButton_ENC->setObjectName(QStringLiteral("copyKeyButton_ENC"));
        copyKeyButton_ENC->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icons/editcopy"), QSize(), QIcon::Normal, QIcon::Off);
        copyKeyButton_ENC->setIcon(icon2);

        horizontalLayout_2_ENC->addWidget(copyKeyButton_ENC);


        verticalLayout_SM->addLayout(horizontalLayout_2_ENC);

        horizontalLayout_3_ENC = new QHBoxLayout();
        horizontalLayout_3_ENC->setObjectName(QStringLiteral("horizontalLayout_3_ENC"));
        encryptKeyButton_ENC = new QPushButton(tabBip38Encrypt);
        encryptKeyButton_ENC->setObjectName(QStringLiteral("encryptKeyButton_ENC"));
        encryptKeyButton_ENC->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/icons/edit"), QSize(), QIcon::Normal, QIcon::Off);
        encryptKeyButton_ENC->setIcon(icon3);
        encryptKeyButton_ENC->setAutoDefault(false);

        horizontalLayout_3_ENC->addWidget(encryptKeyButton_ENC);

        clearButton_ENC = new QPushButton(tabBip38Encrypt);
        clearButton_ENC->setObjectName(QStringLiteral("clearButton_ENC"));
        clearButton_ENC->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/icons/remove"), QSize(), QIcon::Normal, QIcon::Off);
        clearButton_ENC->setIcon(icon4);
        clearButton_ENC->setAutoDefault(false);

        horizontalLayout_3_ENC->addWidget(clearButton_ENC);

        horizontalSpacer_1_ENC = new QSpacerItem(40, 48, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3_ENC->addItem(horizontalSpacer_1_ENC);

        statusLabel_ENC = new QLabel(tabBip38Encrypt);
        statusLabel_ENC->setObjectName(QStringLiteral("statusLabel_ENC"));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        statusLabel_ENC->setFont(font1);
        statusLabel_ENC->setWordWrap(true);

        horizontalLayout_3_ENC->addWidget(statusLabel_ENC);

        horizontalSpacer_2_ENC = new QSpacerItem(40, 48, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3_ENC->addItem(horizontalSpacer_2_ENC);


        verticalLayout_SM->addLayout(horizontalLayout_3_ENC);

        tabWidget->addTab(tabBip38Encrypt, QString());
        tabBip38Decrypt = new QWidget();
        tabBip38Decrypt->setObjectName(QStringLiteral("tabBip38Decrypt"));
        verticalLayout_VM = new QVBoxLayout(tabBip38Decrypt);
        verticalLayout_VM->setObjectName(QStringLiteral("verticalLayout_VM"));
        infoLabel_DEC = new QLabel(tabBip38Decrypt);
        infoLabel_DEC->setObjectName(QStringLiteral("infoLabel_DEC"));
        infoLabel_DEC->setTextFormat(Qt::PlainText);
        infoLabel_DEC->setWordWrap(true);

        verticalLayout_VM->addWidget(infoLabel_DEC);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_2 = new QLabel(tabBip38Decrypt);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(85, 0));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(label_2);

        encryptedKeyIn_DEC = new QValidatedLineEdit(tabBip38Decrypt);
        encryptedKeyIn_DEC->setObjectName(QStringLiteral("encryptedKeyIn_DEC"));

        horizontalLayout_3->addWidget(encryptedKeyIn_DEC);

        pasteButton_DEC = new QToolButton(tabBip38Decrypt);
        pasteButton_DEC->setObjectName(QStringLiteral("pasteButton_DEC"));
        pasteButton_DEC->setCursor(QCursor(Qt::PointingHandCursor));
        pasteButton_DEC->setIcon(icon1);

        horizontalLayout_3->addWidget(pasteButton_DEC);


        verticalLayout_VM->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(tabBip38Decrypt);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(85, 0));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label);

        passphraseIn_DEC = new QLineEdit(tabBip38Decrypt);
        passphraseIn_DEC->setObjectName(QStringLiteral("passphraseIn_DEC"));
        passphraseIn_DEC->setEchoMode(QLineEdit::Password);

        horizontalLayout->addWidget(passphraseIn_DEC);


        verticalLayout_VM->addLayout(horizontalLayout);

        horizontalLayout_2_DEC = new QHBoxLayout();
        horizontalLayout_2_DEC->setObjectName(QStringLiteral("horizontalLayout_2_DEC"));
        decryptKeyButton_DEC = new QPushButton(tabBip38Decrypt);
        decryptKeyButton_DEC->setObjectName(QStringLiteral("decryptKeyButton_DEC"));
        decryptKeyButton_DEC->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/icons/transaction_0"), QSize(), QIcon::Normal, QIcon::Off);
        decryptKeyButton_DEC->setIcon(icon5);
        decryptKeyButton_DEC->setAutoDefault(false);

        horizontalLayout_2_DEC->addWidget(decryptKeyButton_DEC);

        clearButton_DEC = new QPushButton(tabBip38Decrypt);
        clearButton_DEC->setObjectName(QStringLiteral("clearButton_DEC"));
        clearButton_DEC->setCursor(QCursor(Qt::PointingHandCursor));
        clearButton_DEC->setIcon(icon4);
        clearButton_DEC->setAutoDefault(false);

        horizontalLayout_2_DEC->addWidget(clearButton_DEC);

        horizontalSpacer_1_DEC = new QSpacerItem(40, 48, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2_DEC->addItem(horizontalSpacer_1_DEC);

        statusLabel_DEC = new QLabel(tabBip38Decrypt);
        statusLabel_DEC->setObjectName(QStringLiteral("statusLabel_DEC"));
        statusLabel_DEC->setFont(font1);
        statusLabel_DEC->setWordWrap(true);

        horizontalLayout_2_DEC->addWidget(statusLabel_DEC);

        horizontalSpacer_2_DEC = new QSpacerItem(40, 48, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2_DEC->addItem(horizontalSpacer_2_DEC);


        verticalLayout_VM->addLayout(horizontalLayout_2_DEC);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_3 = new QLabel(tabBip38Decrypt);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_2->addWidget(label_3);

        decryptedKeyOut_DEC = new QValidatedLineEdit(tabBip38Decrypt);
        decryptedKeyOut_DEC->setObjectName(QStringLiteral("decryptedKeyOut_DEC"));

        horizontalLayout_2->addWidget(decryptedKeyOut_DEC);


        verticalLayout_VM->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        importAddressButton_DEC = new QPushButton(tabBip38Decrypt);
        importAddressButton_DEC->setObjectName(QStringLiteral("importAddressButton_DEC"));
        importAddressButton_DEC->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_4->addWidget(importAddressButton_DEC);

        label_4 = new QLabel(tabBip38Decrypt);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_4->addWidget(label_4);

        addressOut_DEC = new QLineEdit(tabBip38Decrypt);
        addressOut_DEC->setObjectName(QStringLiteral("addressOut_DEC"));

        horizontalLayout_4->addWidget(addressOut_DEC);


        verticalLayout_VM->addLayout(horizontalLayout_4);

        tabWidget->addTab(tabBip38Decrypt, QString());

        verticalLayout->addWidget(tabWidget);


        retranslateUi(Bip38ToolDialog);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Bip38ToolDialog);
    } // setupUi

    void retranslateUi(QDialog *Bip38ToolDialog)
    {
        Bip38ToolDialog->setWindowTitle(QApplication::translate("Bip38ToolDialog", "BIP 38 Tool", 0));
        infoLabel_ENC->setText(QApplication::translate("Bip38ToolDialog", "Enter a ZENZO Address that you would like to encrypt using BIP 38. Enter a passphrase in the middle box. Press encrypt to compute the encrypted private key.", 0));
        label_5->setText(QApplication::translate("Bip38ToolDialog", "Address:", 0));
#ifndef QT_NO_TOOLTIP
        addressIn_ENC->setToolTip(QApplication::translate("Bip38ToolDialog", "The ZENZO address to encrypt", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        addressBookButton_ENC->setToolTip(QApplication::translate("Bip38ToolDialog", "Choose previously used address", 0));
#endif // QT_NO_TOOLTIP
        addressBookButton_ENC->setText(QString());
        addressBookButton_ENC->setShortcut(QApplication::translate("Bip38ToolDialog", "Alt+A", 0));
#ifndef QT_NO_TOOLTIP
        pasteButton_ENC->setToolTip(QApplication::translate("Bip38ToolDialog", "Paste address from clipboard", 0));
#endif // QT_NO_TOOLTIP
        pasteButton_ENC->setText(QString());
        pasteButton_ENC->setShortcut(QApplication::translate("Bip38ToolDialog", "Alt+P", 0));
        label_6->setText(QApplication::translate("Bip38ToolDialog", "Passphrase: ", 0));
        encryptedKeyLabel_ENC->setText(QApplication::translate("Bip38ToolDialog", "Encrypted Key:", 0));
#ifndef QT_NO_TOOLTIP
        copyKeyButton_ENC->setToolTip(QApplication::translate("Bip38ToolDialog", "Copy the current signature to the system clipboard", 0));
#endif // QT_NO_TOOLTIP
        copyKeyButton_ENC->setText(QString());
#ifndef QT_NO_TOOLTIP
        encryptKeyButton_ENC->setToolTip(QApplication::translate("Bip38ToolDialog", "Encrypt the private key for this ZENZO address", 0));
#endif // QT_NO_TOOLTIP
        encryptKeyButton_ENC->setText(QApplication::translate("Bip38ToolDialog", "Encrypt &Key", 0));
#ifndef QT_NO_TOOLTIP
        clearButton_ENC->setToolTip(QApplication::translate("Bip38ToolDialog", "Reset all fields", 0));
#endif // QT_NO_TOOLTIP
        clearButton_ENC->setText(QApplication::translate("Bip38ToolDialog", "Clear &All", 0));
        statusLabel_ENC->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tabBip38Encrypt), QApplication::translate("Bip38ToolDialog", "&BIP 38 Encrypt", 0));
        infoLabel_DEC->setText(QApplication::translate("Bip38ToolDialog", "Enter the BIP 38 encrypted private key. Enter the passphrase in the middle box. Click Decrypt Key to compute the private key. After the key is decrypted, clicking 'Import Address' will add this private key to the wallet.", 0));
        label_2->setText(QApplication::translate("Bip38ToolDialog", "Encrypted Key:", 0));
#ifndef QT_NO_TOOLTIP
        encryptedKeyIn_DEC->setToolTip(QApplication::translate("Bip38ToolDialog", "The encrypted private key", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        pasteButton_DEC->setToolTip(QApplication::translate("Bip38ToolDialog", "Paste address from clipboard", 0));
#endif // QT_NO_TOOLTIP
        pasteButton_DEC->setText(QString());
        pasteButton_DEC->setShortcut(QApplication::translate("Bip38ToolDialog", "Alt+P", 0));
        label->setText(QApplication::translate("Bip38ToolDialog", "Passphrase: ", 0));
#ifndef QT_NO_TOOLTIP
        decryptKeyButton_DEC->setToolTip(QApplication::translate("Bip38ToolDialog", "Decrypt the entered key using the passphrase", 0));
#endif // QT_NO_TOOLTIP
        decryptKeyButton_DEC->setText(QApplication::translate("Bip38ToolDialog", "Decrypt &Key", 0));
#ifndef QT_NO_TOOLTIP
        clearButton_DEC->setToolTip(QApplication::translate("Bip38ToolDialog", "Reset all fields", 0));
#endif // QT_NO_TOOLTIP
        clearButton_DEC->setText(QApplication::translate("Bip38ToolDialog", "Clear &All", 0));
        statusLabel_DEC->setText(QString());
        label_3->setText(QApplication::translate("Bip38ToolDialog", "Decrypted Key:", 0));
        importAddressButton_DEC->setText(QApplication::translate("Bip38ToolDialog", "Import Address", 0));
        label_4->setText(QApplication::translate("Bip38ToolDialog", "Address:", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabBip38Decrypt), QApplication::translate("Bip38ToolDialog", "&BIP 38 Decrypt", 0));
    } // retranslateUi

};

namespace Ui {
    class Bip38ToolDialog: public Ui_Bip38ToolDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BIP38TOOLDIALOG_H
