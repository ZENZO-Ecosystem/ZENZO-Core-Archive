/********************************************************************************
** Form generated from reading UI file 'overviewpage.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OVERVIEWPAGE_H
#define UI_OVERVIEWPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OverviewPage
{
public:
    QVBoxLayout *topLayout;
    QFrame *frame_BG;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_Master;
    QFrame *frame_Header;
    QVBoxLayout *verticalLayout_Header;
    QHBoxLayout *horizontalLayout_Header;
    QLabel *labelOverviewHeaderLeft;
    QSpacerItem *horizontalSpacer_Header;
    QLabel *labelOverviewHeaderRight;
    QFrame *frame_Content;
    QVBoxLayout *verticalLayout_Content;
    QHBoxLayout *horizontalLayout_Content;
    QVBoxLayout *verticalLayout_left;
    QFrame *frameObfuscation;
    QVBoxLayout *verticalLayout;
    QFrame *frame_CombinedBalances;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5z;
    QLabel *labelWalletStatus;
    QSpacerItem *horizontalSpacer_1;
    QFrame *line_CombinedBalance;
    QGridLayout *gridLayout_3;
    QLabel *labelBalanceTextz;
    QLabel *labelBalancez;
    QLabel *labelTotalTextz;
    QLabel *labelTotalz;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_1;
    QFrame *frame_Balances;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_3;
    QFrame *line_Balance;
    QGridLayout *gridLayout;
    QLabel *labelSpendable;
    QLabel *labelWatchonly;
    QLabel *labelBalanceText;
    QLabel *labelBalance;
    QLabel *labelWatchAvailable;
    QLabel *labelPendingText;
    QLabel *labelUnconfirmed;
    QLabel *labelWatchPending;
    QLabel *labelImmatureText;
    QLabel *labelImmature;
    QLabel *labelWatchImmature;
    QLabel *labelLockedBalanceText;
    QLabel *labelLockedBalance;
    QLabel *labelTotalText;
    QLabel *labelTotal;
    QLabel *labelWatchTotal;
    QSpacerItem *horizontalSpacer_9;
    QSpacerItem *verticalSpacer_3;
    QFrame *frame_ZerocoinBalances;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_5z_3;
    QSpacerItem *horizontalSpacer_11;
    QFrame *line_ZerocoinBalance;
    QGridLayout *gridLayout_5;
    QLabel *labelzBalanceMatureText;
    QLabel *labelzBalanceMature;
    QLabel *labelzBalanceUnconfirmedText;
    QLabel *labelzBalanceUnconfirmed;
    QLabel *labelzBalanceImmatureText;
    QLabel *labelzBalanceImmature;
    QLabel *labelzBalanceText;
    QLabel *labelzBalance;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_4;
    QVBoxLayout *verticalLayout_right;
    QFrame *frame_RecentTransactions;
    QVBoxLayout *verticalLayout_1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QLabel *labelTransactionsStatus;
    QSpacerItem *horizontalSpacer;
    QFrame *line;
    QListView *listTransactions;
    QSpacerItem *verticalSpacer_2;
    QLabel *labelAlerts;

    void setupUi(QWidget *OverviewPage)
    {
        if (OverviewPage->objectName().isEmpty())
            OverviewPage->setObjectName(QStringLiteral("OverviewPage"));
        OverviewPage->resize(978, 841);
        OverviewPage->setMinimumSize(QSize(960, 682));
        topLayout = new QVBoxLayout(OverviewPage);
        topLayout->setObjectName(QStringLiteral("topLayout"));
        topLayout->setContentsMargins(-1, -1, 9, -1);
        frame_BG = new QFrame(OverviewPage);
        frame_BG->setObjectName(QStringLiteral("frame_BG"));
        frame_BG->setMinimumSize(QSize(850, 610));
        frame_BG->setMaximumSize(QSize(16777215, 16777215));
        frame_BG->setFrameShape(QFrame::StyledPanel);
        frame_BG->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame_BG);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 6);
        verticalLayout_Master = new QVBoxLayout();
        verticalLayout_Master->setObjectName(QStringLiteral("verticalLayout_Master"));
        verticalLayout_Master->setContentsMargins(0, 0, 0, 0);
        frame_Header = new QFrame(frame_BG);
        frame_Header->setObjectName(QStringLiteral("frame_Header"));
        verticalLayout_Header = new QVBoxLayout(frame_Header);
        verticalLayout_Header->setObjectName(QStringLiteral("verticalLayout_Header"));
        verticalLayout_Header->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_Header = new QHBoxLayout();
        horizontalLayout_Header->setSpacing(6);
        horizontalLayout_Header->setObjectName(QStringLiteral("horizontalLayout_Header"));
        labelOverviewHeaderLeft = new QLabel(frame_Header);
        labelOverviewHeaderLeft->setObjectName(QStringLiteral("labelOverviewHeaderLeft"));
        labelOverviewHeaderLeft->setMinimumSize(QSize(464, 60));
        labelOverviewHeaderLeft->setMaximumSize(QSize(16777215, 60));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        labelOverviewHeaderLeft->setFont(font);
        labelOverviewHeaderLeft->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_Header->addWidget(labelOverviewHeaderLeft);

        horizontalSpacer_Header = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_Header->addItem(horizontalSpacer_Header);

        labelOverviewHeaderRight = new QLabel(frame_Header);
        labelOverviewHeaderRight->setObjectName(QStringLiteral("labelOverviewHeaderRight"));
        labelOverviewHeaderRight->setMinimumSize(QSize(464, 60));
        labelOverviewHeaderRight->setMaximumSize(QSize(16777215, 60));
        QFont font1;
        font1.setPointSize(14);
        labelOverviewHeaderRight->setFont(font1);
        labelOverviewHeaderRight->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_Header->addWidget(labelOverviewHeaderRight);

        horizontalLayout_Header->setStretch(0, 1);
        horizontalLayout_Header->setStretch(2, 1);

        verticalLayout_Header->addLayout(horizontalLayout_Header);


        verticalLayout_Master->addWidget(frame_Header);

        frame_Content = new QFrame(frame_BG);
        frame_Content->setObjectName(QStringLiteral("frame_Content"));
        verticalLayout_Content = new QVBoxLayout(frame_Content);
        verticalLayout_Content->setObjectName(QStringLiteral("verticalLayout_Content"));
        verticalLayout_Content->setContentsMargins(6, 0, 6, 0);
        horizontalLayout_Content = new QHBoxLayout();
        horizontalLayout_Content->setSpacing(6);
        horizontalLayout_Content->setObjectName(QStringLiteral("horizontalLayout_Content"));
        verticalLayout_left = new QVBoxLayout();
        verticalLayout_left->setObjectName(QStringLiteral("verticalLayout_left"));
        frameObfuscation = new QFrame(frame_Content);
        frameObfuscation->setObjectName(QStringLiteral("frameObfuscation"));
        frameObfuscation->setMinimumSize(QSize(0, 0));
        frameObfuscation->setFrameShape(QFrame::StyledPanel);
        frameObfuscation->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frameObfuscation);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        frame_CombinedBalances = new QFrame(frameObfuscation);
        frame_CombinedBalances->setObjectName(QStringLiteral("frame_CombinedBalances"));
        frame_CombinedBalances->setMinimumSize(QSize(470, 0));
        frame_CombinedBalances->setFrameShape(QFrame::StyledPanel);
        frame_CombinedBalances->setFrameShadow(QFrame::Raised);
        verticalLayout_5 = new QVBoxLayout(frame_CombinedBalances);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_5z = new QLabel(frame_CombinedBalances);
        label_5z->setObjectName(QStringLiteral("label_5z"));
        label_5z->setMinimumSize(QSize(0, 20));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        label_5z->setFont(font2);

        horizontalLayout_5->addWidget(label_5z);

        labelWalletStatus = new QLabel(frame_CombinedBalances);
        labelWalletStatus->setObjectName(QStringLiteral("labelWalletStatus"));
        labelWalletStatus->setCursor(QCursor(Qt::WhatsThisCursor));
        labelWalletStatus->setStyleSheet(QStringLiteral("QLabel { color: red; }"));
        labelWalletStatus->setText(QStringLiteral("(out of sync)"));
        labelWalletStatus->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(labelWalletStatus);

        horizontalSpacer_1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_1);


        verticalLayout_5->addLayout(horizontalLayout_5);

        line_CombinedBalance = new QFrame(frame_CombinedBalances);
        line_CombinedBalance->setObjectName(QStringLiteral("line_CombinedBalance"));
        line_CombinedBalance->setMinimumSize(QSize(0, 1));
        line_CombinedBalance->setMaximumSize(QSize(16777215, 1));
        line_CombinedBalance->setFrameShape(QFrame::HLine);
        line_CombinedBalance->setFrameShadow(QFrame::Sunken);

        verticalLayout_5->addWidget(line_CombinedBalance);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(12);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        labelBalanceTextz = new QLabel(frame_CombinedBalances);
        labelBalanceTextz->setObjectName(QStringLiteral("labelBalanceTextz"));

        gridLayout_3->addWidget(labelBalanceTextz, 1, 0, 1, 1);

        labelBalancez = new QLabel(frame_CombinedBalances);
        labelBalancez->setObjectName(QStringLiteral("labelBalancez"));
        QFont font3;
        font3.setBold(true);
        font3.setWeight(75);
        labelBalancez->setFont(font3);
        labelBalancez->setCursor(QCursor(Qt::IBeamCursor));
        labelBalancez->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 ZNZ"));
        labelBalancez->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelBalancez->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(labelBalancez, 1, 1, 1, 1);

        labelTotalTextz = new QLabel(frame_CombinedBalances);
        labelTotalTextz->setObjectName(QStringLiteral("labelTotalTextz"));

        gridLayout_3->addWidget(labelTotalTextz, 2, 0, 1, 1);

        labelTotalz = new QLabel(frame_CombinedBalances);
        labelTotalz->setObjectName(QStringLiteral("labelTotalz"));
        labelTotalz->setFont(font3);
        labelTotalz->setCursor(QCursor(Qt::IBeamCursor));
        labelTotalz->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 ZNZ"));
        labelTotalz->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelTotalz->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(labelTotalz, 2, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 2, 3, 1, 1);


        verticalLayout_5->addLayout(gridLayout_3);

        verticalSpacer_1 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_1);


        verticalLayout->addWidget(frame_CombinedBalances);

        frame_Balances = new QFrame(frameObfuscation);
        frame_Balances->setObjectName(QStringLiteral("frame_Balances"));
        frame_Balances->setFrameShape(QFrame::StyledPanel);
        frame_Balances->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(frame_Balances);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_5 = new QLabel(frame_Balances);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMinimumSize(QSize(0, 20));
        label_5->setFont(font2);

        horizontalLayout_4->addWidget(label_5);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);


        verticalLayout_4->addLayout(horizontalLayout_4);

        line_Balance = new QFrame(frame_Balances);
        line_Balance->setObjectName(QStringLiteral("line_Balance"));
        line_Balance->setMinimumSize(QSize(0, 1));
        line_Balance->setMaximumSize(QSize(16777215, 1));
        line_Balance->setFrameShape(QFrame::HLine);
        line_Balance->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(line_Balance);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(12);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        labelSpendable = new QLabel(frame_Balances);
        labelSpendable->setObjectName(QStringLiteral("labelSpendable"));
        labelSpendable->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelSpendable, 0, 1, 1, 1);

        labelWatchonly = new QLabel(frame_Balances);
        labelWatchonly->setObjectName(QStringLiteral("labelWatchonly"));
        labelWatchonly->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelWatchonly, 0, 2, 1, 1);

        labelBalanceText = new QLabel(frame_Balances);
        labelBalanceText->setObjectName(QStringLiteral("labelBalanceText"));

        gridLayout->addWidget(labelBalanceText, 1, 0, 1, 1);

        labelBalance = new QLabel(frame_Balances);
        labelBalance->setObjectName(QStringLiteral("labelBalance"));
        labelBalance->setFont(font3);
        labelBalance->setCursor(QCursor(Qt::IBeamCursor));
        labelBalance->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 ZNZ"));
        labelBalance->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelBalance->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelBalance, 1, 1, 1, 1);

        labelWatchAvailable = new QLabel(frame_Balances);
        labelWatchAvailable->setObjectName(QStringLiteral("labelWatchAvailable"));
        labelWatchAvailable->setFont(font3);
        labelWatchAvailable->setCursor(QCursor(Qt::IBeamCursor));
        labelWatchAvailable->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 ZNZ"));
        labelWatchAvailable->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelWatchAvailable->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelWatchAvailable, 1, 2, 1, 1);

        labelPendingText = new QLabel(frame_Balances);
        labelPendingText->setObjectName(QStringLiteral("labelPendingText"));

        gridLayout->addWidget(labelPendingText, 2, 0, 1, 1);

        labelUnconfirmed = new QLabel(frame_Balances);
        labelUnconfirmed->setObjectName(QStringLiteral("labelUnconfirmed"));
        labelUnconfirmed->setFont(font3);
        labelUnconfirmed->setCursor(QCursor(Qt::IBeamCursor));
        labelUnconfirmed->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 ZNZ"));
        labelUnconfirmed->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelUnconfirmed->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelUnconfirmed, 2, 1, 1, 1);

        labelWatchPending = new QLabel(frame_Balances);
        labelWatchPending->setObjectName(QStringLiteral("labelWatchPending"));
        labelWatchPending->setFont(font3);
        labelWatchPending->setCursor(QCursor(Qt::IBeamCursor));
        labelWatchPending->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 ZNZ"));
        labelWatchPending->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelWatchPending->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelWatchPending, 2, 2, 1, 1);

        labelImmatureText = new QLabel(frame_Balances);
        labelImmatureText->setObjectName(QStringLiteral("labelImmatureText"));

        gridLayout->addWidget(labelImmatureText, 3, 0, 1, 1);

        labelImmature = new QLabel(frame_Balances);
        labelImmature->setObjectName(QStringLiteral("labelImmature"));
        labelImmature->setFont(font3);
        labelImmature->setCursor(QCursor(Qt::IBeamCursor));
        labelImmature->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 ZNZ"));
        labelImmature->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelImmature->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelImmature, 3, 1, 1, 1);

        labelWatchImmature = new QLabel(frame_Balances);
        labelWatchImmature->setObjectName(QStringLiteral("labelWatchImmature"));
        labelWatchImmature->setFont(font3);
        labelWatchImmature->setCursor(QCursor(Qt::IBeamCursor));
        labelWatchImmature->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 ZNZ"));
        labelWatchImmature->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelWatchImmature->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelWatchImmature, 3, 2, 1, 1);

        labelLockedBalanceText = new QLabel(frame_Balances);
        labelLockedBalanceText->setObjectName(QStringLiteral("labelLockedBalanceText"));

        gridLayout->addWidget(labelLockedBalanceText, 4, 0, 1, 1);

        labelLockedBalance = new QLabel(frame_Balances);
        labelLockedBalance->setObjectName(QStringLiteral("labelLockedBalance"));
        labelLockedBalance->setFont(font3);
        labelLockedBalance->setCursor(QCursor(Qt::IBeamCursor));
        labelLockedBalance->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 ZNZ"));
        labelLockedBalance->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelLockedBalance->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelLockedBalance, 4, 1, 1, 1);

        labelTotalText = new QLabel(frame_Balances);
        labelTotalText->setObjectName(QStringLiteral("labelTotalText"));

        gridLayout->addWidget(labelTotalText, 5, 0, 1, 1);

        labelTotal = new QLabel(frame_Balances);
        labelTotal->setObjectName(QStringLiteral("labelTotal"));
        labelTotal->setFont(font3);
        labelTotal->setCursor(QCursor(Qt::IBeamCursor));
        labelTotal->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 ZNZ"));
        labelTotal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelTotal->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelTotal, 5, 1, 1, 1);

        labelWatchTotal = new QLabel(frame_Balances);
        labelWatchTotal->setObjectName(QStringLiteral("labelWatchTotal"));
        labelWatchTotal->setFont(font3);
        labelWatchTotal->setCursor(QCursor(Qt::IBeamCursor));
        labelWatchTotal->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 ZNZ"));
        labelWatchTotal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelWatchTotal->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelWatchTotal, 5, 2, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_9, 5, 3, 1, 1);


        verticalLayout_4->addLayout(gridLayout);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_3);


        verticalLayout->addWidget(frame_Balances);

        frame_ZerocoinBalances = new QFrame(frameObfuscation);
        frame_ZerocoinBalances->setObjectName(QStringLiteral("frame_ZerocoinBalances"));
        frame_ZerocoinBalances->setFrameShape(QFrame::StyledPanel);
        frame_ZerocoinBalances->setFrameShadow(QFrame::Raised);
        verticalLayout_7 = new QVBoxLayout(frame_ZerocoinBalances);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_5z_3 = new QLabel(frame_ZerocoinBalances);
        label_5z_3->setObjectName(QStringLiteral("label_5z_3"));
        label_5z_3->setMinimumSize(QSize(0, 20));
        label_5z_3->setFont(font2);

        horizontalLayout_8->addWidget(label_5z_3);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_11);


        verticalLayout_7->addLayout(horizontalLayout_8);

        line_ZerocoinBalance = new QFrame(frame_ZerocoinBalances);
        line_ZerocoinBalance->setObjectName(QStringLiteral("line_ZerocoinBalance"));
        line_ZerocoinBalance->setMinimumSize(QSize(0, 1));
        line_ZerocoinBalance->setMaximumSize(QSize(16777215, 1));
        line_ZerocoinBalance->setFrameShape(QFrame::HLine);
        line_ZerocoinBalance->setFrameShadow(QFrame::Sunken);

        verticalLayout_7->addWidget(line_ZerocoinBalance);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setSpacing(12);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        labelzBalanceMatureText = new QLabel(frame_ZerocoinBalances);
        labelzBalanceMatureText->setObjectName(QStringLiteral("labelzBalanceMatureText"));

        gridLayout_5->addWidget(labelzBalanceMatureText, 1, 0, 1, 1);

        labelzBalanceMature = new QLabel(frame_ZerocoinBalances);
        labelzBalanceMature->setObjectName(QStringLiteral("labelzBalanceMature"));
        labelzBalanceMature->setFont(font3);
        labelzBalanceMature->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 ZNZ"));
        labelzBalanceMature->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(labelzBalanceMature, 1, 1, 1, 1);

        labelzBalanceUnconfirmedText = new QLabel(frame_ZerocoinBalances);
        labelzBalanceUnconfirmedText->setObjectName(QStringLiteral("labelzBalanceUnconfirmedText"));

        gridLayout_5->addWidget(labelzBalanceUnconfirmedText, 2, 0, 1, 1);

        labelzBalanceUnconfirmed = new QLabel(frame_ZerocoinBalances);
        labelzBalanceUnconfirmed->setObjectName(QStringLiteral("labelzBalanceUnconfirmed"));
        labelzBalanceUnconfirmed->setFont(font3);
        labelzBalanceUnconfirmed->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 ZNZ"));
        labelzBalanceUnconfirmed->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(labelzBalanceUnconfirmed, 2, 1, 1, 1);

        labelzBalanceImmatureText = new QLabel(frame_ZerocoinBalances);
        labelzBalanceImmatureText->setObjectName(QStringLiteral("labelzBalanceImmatureText"));

        gridLayout_5->addWidget(labelzBalanceImmatureText, 3, 0, 1, 1);

        labelzBalanceImmature = new QLabel(frame_ZerocoinBalances);
        labelzBalanceImmature->setObjectName(QStringLiteral("labelzBalanceImmature"));
        labelzBalanceImmature->setFont(font3);
        labelzBalanceImmature->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 ZNZ"));
        labelzBalanceImmature->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(labelzBalanceImmature, 3, 1, 1, 1);

        labelzBalanceText = new QLabel(frame_ZerocoinBalances);
        labelzBalanceText->setObjectName(QStringLiteral("labelzBalanceText"));

        gridLayout_5->addWidget(labelzBalanceText, 4, 0, 1, 1);

        labelzBalance = new QLabel(frame_ZerocoinBalances);
        labelzBalance->setObjectName(QStringLiteral("labelzBalance"));
        labelzBalance->setFont(font3);
        labelzBalance->setCursor(QCursor(Qt::IBeamCursor));
        labelzBalance->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 ZNZ"));
        labelzBalance->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelzBalance->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_5->addWidget(labelzBalance, 4, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_4, 4, 2, 1, 1);


        verticalLayout_7->addLayout(gridLayout_5);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_4);


        verticalLayout->addWidget(frame_ZerocoinBalances);


        verticalLayout_left->addWidget(frameObfuscation);

        verticalLayout_left->setStretch(0, 1);

        horizontalLayout_Content->addLayout(verticalLayout_left);

        verticalLayout_right = new QVBoxLayout();
        verticalLayout_right->setObjectName(QStringLiteral("verticalLayout_right"));
        frame_RecentTransactions = new QFrame(frame_Content);
        frame_RecentTransactions->setObjectName(QStringLiteral("frame_RecentTransactions"));
        frame_RecentTransactions->setMinimumSize(QSize(0, 0));
        frame_RecentTransactions->setFrameShape(QFrame::StyledPanel);
        frame_RecentTransactions->setFrameShadow(QFrame::Raised);
        verticalLayout_1 = new QVBoxLayout(frame_RecentTransactions);
        verticalLayout_1->setObjectName(QStringLiteral("verticalLayout_1"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_4 = new QLabel(frame_RecentTransactions);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMinimumSize(QSize(0, 20));
        label_4->setFont(font2);

        horizontalLayout_2->addWidget(label_4);

        labelTransactionsStatus = new QLabel(frame_RecentTransactions);
        labelTransactionsStatus->setObjectName(QStringLiteral("labelTransactionsStatus"));
        labelTransactionsStatus->setCursor(QCursor(Qt::WhatsThisCursor));
        labelTransactionsStatus->setStyleSheet(QStringLiteral("QLabel { color: red; }"));
        labelTransactionsStatus->setText(QStringLiteral("(out of sync)"));
        labelTransactionsStatus->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(labelTransactionsStatus);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout_1->addLayout(horizontalLayout_2);

        line = new QFrame(frame_RecentTransactions);
        line->setObjectName(QStringLiteral("line"));
        line->setMinimumSize(QSize(0, 1));
        line->setMaximumSize(QSize(16777215, 1));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_1->addWidget(line);

        listTransactions = new QListView(frame_RecentTransactions);
        listTransactions->setObjectName(QStringLiteral("listTransactions"));
        listTransactions->setMinimumSize(QSize(0, 0));
        listTransactions->setStyleSheet(QStringLiteral("QListView { background: transparent; }"));
        listTransactions->setFrameShape(QFrame::NoFrame);
        listTransactions->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listTransactions->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listTransactions->setSelectionMode(QAbstractItemView::NoSelection);

        verticalLayout_1->addWidget(listTransactions);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_1->addItem(verticalSpacer_2);

        labelAlerts = new QLabel(frame_RecentTransactions);
        labelAlerts->setObjectName(QStringLiteral("labelAlerts"));
        labelAlerts->setMaximumSize(QSize(16777215, 16777215));
        labelAlerts->setStyleSheet(QStringLiteral("background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 0, stop:0 #F0D0A0, stop:1 #F8D488); color:#000000;"));
        labelAlerts->setWordWrap(true);
        labelAlerts->setMargin(3);

        verticalLayout_1->addWidget(labelAlerts);


        verticalLayout_right->addWidget(frame_RecentTransactions);

        verticalLayout_right->setStretch(0, 1);

        horizontalLayout_Content->addLayout(verticalLayout_right);

        horizontalLayout_Content->setStretch(0, 1);
        horizontalLayout_Content->setStretch(1, 1);

        verticalLayout_Content->addLayout(horizontalLayout_Content);


        verticalLayout_Master->addWidget(frame_Content);

        verticalLayout_Master->setStretch(1, 1);

        verticalLayout_3->addLayout(verticalLayout_Master);

        verticalLayout_3->setStretch(0, 1);

        topLayout->addWidget(frame_BG);

        topLayout->setStretch(0, 1);

        retranslateUi(OverviewPage);

        QMetaObject::connectSlotsByName(OverviewPage);
    } // setupUi

    void retranslateUi(QWidget *OverviewPage)
    {
        OverviewPage->setWindowTitle(QApplication::translate("OverviewPage", "Form", 0));
        labelOverviewHeaderLeft->setText(QApplication::translate("OverviewPage", "OVERVIEW", 0));
        labelOverviewHeaderRight->setText(QString());
#ifndef QT_NO_TOOLTIP
        label_5z->setToolTip(QApplication::translate("OverviewPage", "Combined Balance (including unconfirmed and immature coins)", 0));
#endif // QT_NO_TOOLTIP
        label_5z->setText(QApplication::translate("OverviewPage", "Combined Balance", 0));
#ifndef QT_NO_TOOLTIP
        labelWalletStatus->setToolTip(QApplication::translate("OverviewPage", "The displayed information may be out of date. Your wallet automatically synchronizes with the Zenzo network after a connection is established, but this process has not completed yet.", 0));
#endif // QT_NO_TOOLTIP
        labelBalanceTextz->setText(QApplication::translate("OverviewPage", "Available:", 0));
#ifndef QT_NO_TOOLTIP
        labelBalancez->setToolTip(QApplication::translate("OverviewPage", "Your current spendable balance", 0));
#endif // QT_NO_TOOLTIP
        labelTotalTextz->setText(QApplication::translate("OverviewPage", "Total:", 0));
#ifndef QT_NO_TOOLTIP
        labelTotalz->setToolTip(QApplication::translate("OverviewPage", "Total Balance, including all unavailable coins.", 0));
#endif // QT_NO_TOOLTIP
        label_5->setText(QApplication::translate("OverviewPage", "ZNZ Balance", 0));
        labelSpendable->setText(QApplication::translate("OverviewPage", "Spendable:", 0));
        labelWatchonly->setText(QApplication::translate("OverviewPage", "Watch-only:", 0));
        labelBalanceText->setText(QApplication::translate("OverviewPage", "Available:", 0));
#ifndef QT_NO_TOOLTIP
        labelBalance->setToolTip(QApplication::translate("OverviewPage", "Your current spendable balance", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelWatchAvailable->setToolTip(QApplication::translate("OverviewPage", "Your current balance in watch-only addresses", 0));
#endif // QT_NO_TOOLTIP
        labelPendingText->setText(QApplication::translate("OverviewPage", "Pending:", 0));
#ifndef QT_NO_TOOLTIP
        labelUnconfirmed->setToolTip(QApplication::translate("OverviewPage", "Total of transactions that have yet to be confirmed, and do not yet count toward the spendable balance", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelWatchPending->setToolTip(QApplication::translate("OverviewPage", "Unconfirmed transactions to watch-only addresses", 0));
#endif // QT_NO_TOOLTIP
        labelImmatureText->setText(QApplication::translate("OverviewPage", "Immature:", 0));
#ifndef QT_NO_TOOLTIP
        labelImmature->setToolTip(QApplication::translate("OverviewPage", "Staked or masternode rewards that has not yet matured", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelWatchImmature->setToolTip(QApplication::translate("OverviewPage", "Staked or masternode rewards in watch-only addresses that has not yet matured", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelLockedBalanceText->setToolTip(QApplication::translate("OverviewPage", "Locked ZNZ or Masternode collaterals. These are excluded from zZNZ minting.", 0));
#endif // QT_NO_TOOLTIP
        labelLockedBalanceText->setText(QApplication::translate("OverviewPage", "Locked:", 0));
#ifndef QT_NO_TOOLTIP
        labelLockedBalance->setToolTip(QApplication::translate("OverviewPage", "Locked ZNZ or Masternode collaterals. These are excluded from zZNZ minting.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelTotalText->setToolTip(QApplication::translate("OverviewPage", "Your current Zenzo balance, unconfirmed and immature transactions included", 0));
#endif // QT_NO_TOOLTIP
        labelTotalText->setText(QApplication::translate("OverviewPage", "Total:", 0));
#ifndef QT_NO_TOOLTIP
        labelTotal->setToolTip(QApplication::translate("OverviewPage", "Your current Zenzo balance, unconfirmed and immature transactions included", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelWatchTotal->setToolTip(QApplication::translate("OverviewPage", "Current total balance in watch-only addresses", 0));
#endif // QT_NO_TOOLTIP
        label_5z_3->setText(QApplication::translate("OverviewPage", "zZNZ Balance", 0));
#ifndef QT_NO_TOOLTIP
        labelzBalanceMatureText->setToolTip(QApplication::translate("OverviewPage", "Mature: more than 20 confirmation and more than 1 mint of the same denomination after it was minted.\n"
"These zZNZ are spendable.", 0));
#endif // QT_NO_TOOLTIP
        labelzBalanceMatureText->setText(QApplication::translate("OverviewPage", "Available:", 0));
#ifndef QT_NO_TOOLTIP
        labelzBalanceMature->setToolTip(QApplication::translate("OverviewPage", "Mature: more than 20 confirmation and more than 1 mint of the same denomination after it was minted.\n"
"These zZNZ are spendable.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelzBalanceUnconfirmedText->setToolTip(QApplication::translate("OverviewPage", "Unconfirmed: less than 20 confirmations\n"
"Immature: confirmed, but less than 1 mint of the same denomination after it was minted", 0));
#endif // QT_NO_TOOLTIP
        labelzBalanceUnconfirmedText->setText(QApplication::translate("OverviewPage", "Unconfirmed:", 0));
#ifndef QT_NO_TOOLTIP
        labelzBalanceUnconfirmed->setToolTip(QApplication::translate("OverviewPage", "Unconfirmed: less than 20 confirmations\n"
"Immature: confirmed, but less than 1 mint of the same denomination after it was minted", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelzBalanceImmatureText->setToolTip(QApplication::translate("OverviewPage", "Unconfirmed: less than 20 confirmations\n"
"Immature: confirmed, but less than 1 mint of the same denomination after it was minted", 0));
#endif // QT_NO_TOOLTIP
        labelzBalanceImmatureText->setText(QApplication::translate("OverviewPage", "Immature:", 0));
#ifndef QT_NO_TOOLTIP
        labelzBalanceImmature->setToolTip(QApplication::translate("OverviewPage", "Unconfirmed: less than 20 confirmations\n"
"Immature: confirmed, but less than 1 mint of the same denomination after it was minted", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelzBalanceText->setToolTip(QApplication::translate("OverviewPage", "Your current zZNZ balance, unconfirmed and immature zZNZ included.", 0));
#endif // QT_NO_TOOLTIP
        labelzBalanceText->setText(QApplication::translate("OverviewPage", "Total:", 0));
#ifndef QT_NO_TOOLTIP
        labelzBalance->setToolTip(QApplication::translate("OverviewPage", "Your current zZNZ balance, unconfirmed and immature zZNZ included.", 0));
#endif // QT_NO_TOOLTIP
        label_4->setText(QApplication::translate("OverviewPage", "Recent transactions", 0));
#ifndef QT_NO_TOOLTIP
        labelTransactionsStatus->setToolTip(QApplication::translate("OverviewPage", "The displayed information may be out of date. Your wallet automatically synchronizes with the Zenzo network after a connection is established, but this process has not completed yet.", 0));
#endif // QT_NO_TOOLTIP
        labelAlerts->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class OverviewPage: public Ui_OverviewPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OVERVIEWPAGE_H
