/********************************************************************************
** Form generated from reading UI file 'masternodelist.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MASTERNODELIST_H
#define UI_MASTERNODELIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MasternodeList
{
public:
    QVBoxLayout *topLayout;
    QVBoxLayout *verticalLayout_Master;
    QFrame *frame_Header;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_Header;
    QLabel *labelOverviewHeaderLeft;
    QSpacerItem *horizontalSpacer;
    QLabel *labelOverviewHeaderRight;
    QFrame *frame_BG;
    QVBoxLayout *verticalLayout_3;
    QFrame *frame_Content;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_2;
    QFrame *frameList;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_note;
    QLabel *updateNote;
    QTableWidget *tableWidgetMyMasternodes;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *startButton;
    QPushButton *startAllButton;
    QPushButton *startMissingButton;
    QPushButton *UpdateButton;
    QLabel *autoupdate_label;
    QLabel *secondsLabel;
    QSpacerItem *horizontalSpacer_5;

    void setupUi(QWidget *MasternodeList)
    {
        if (MasternodeList->objectName().isEmpty())
            MasternodeList->setObjectName(QStringLiteral("MasternodeList"));
        MasternodeList->resize(723, 457);
        topLayout = new QVBoxLayout(MasternodeList);
        topLayout->setObjectName(QStringLiteral("topLayout"));
        topLayout->setContentsMargins(9, 9, 9, 9);
        verticalLayout_Master = new QVBoxLayout();
        verticalLayout_Master->setSpacing(0);
        verticalLayout_Master->setObjectName(QStringLiteral("verticalLayout_Master"));
        frame_Header = new QFrame(MasternodeList);
        frame_Header->setObjectName(QStringLiteral("frame_Header"));
        verticalLayout_4 = new QVBoxLayout(frame_Header);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_Header = new QHBoxLayout();
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

        horizontalLayout_Header->addWidget(labelOverviewHeaderLeft);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_Header->addItem(horizontalSpacer);

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

        verticalLayout_4->addLayout(horizontalLayout_Header);


        verticalLayout_Master->addWidget(frame_Header);

        frame_BG = new QFrame(MasternodeList);
        frame_BG->setObjectName(QStringLiteral("frame_BG"));
        verticalLayout_3 = new QVBoxLayout(frame_BG);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(6, 6, 6, 6);
        frame_Content = new QFrame(frame_BG);
        frame_Content->setObjectName(QStringLiteral("frame_Content"));
        verticalLayout = new QVBoxLayout(frame_Content);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        frameList = new QFrame(frame_Content);
        frameList->setObjectName(QStringLiteral("frameList"));
        verticalLayout_2 = new QVBoxLayout(frameList);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, -1, -1, 1);
        horizontalLayout_note = new QHBoxLayout();
        horizontalLayout_note->setObjectName(QStringLiteral("horizontalLayout_note"));
        horizontalLayout_note->setContentsMargins(-1, -1, -1, 0);
        updateNote = new QLabel(frameList);
        updateNote->setObjectName(QStringLiteral("updateNote"));

        horizontalLayout_note->addWidget(updateNote);


        verticalLayout_2->addLayout(horizontalLayout_note);

        tableWidgetMyMasternodes = new QTableWidget(frameList);
        if (tableWidgetMyMasternodes->columnCount() < 7)
            tableWidgetMyMasternodes->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidgetMyMasternodes->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidgetMyMasternodes->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidgetMyMasternodes->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidgetMyMasternodes->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidgetMyMasternodes->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidgetMyMasternodes->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidgetMyMasternodes->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        tableWidgetMyMasternodes->setObjectName(QStringLiteral("tableWidgetMyMasternodes"));
        tableWidgetMyMasternodes->setMinimumSize(QSize(695, 0));
        QPalette palette;
        QBrush brush(QColor(51, 51, 51, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        QBrush brush1(QColor(85, 85, 85, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        tableWidgetMyMasternodes->setPalette(palette);
        tableWidgetMyMasternodes->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidgetMyMasternodes->setAlternatingRowColors(true);
        tableWidgetMyMasternodes->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidgetMyMasternodes->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidgetMyMasternodes->setSortingEnabled(true);
        tableWidgetMyMasternodes->horizontalHeader()->setStretchLastSection(true);

        verticalLayout_2->addWidget(tableWidgetMyMasternodes);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(-1, -1, -1, 0);
        startButton = new QPushButton(frameList);
        startButton->setObjectName(QStringLiteral("startButton"));

        horizontalLayout_5->addWidget(startButton);

        startAllButton = new QPushButton(frameList);
        startAllButton->setObjectName(QStringLiteral("startAllButton"));

        horizontalLayout_5->addWidget(startAllButton);

        startMissingButton = new QPushButton(frameList);
        startMissingButton->setObjectName(QStringLiteral("startMissingButton"));

        horizontalLayout_5->addWidget(startMissingButton);

        UpdateButton = new QPushButton(frameList);
        UpdateButton->setObjectName(QStringLiteral("UpdateButton"));

        horizontalLayout_5->addWidget(UpdateButton);

        autoupdate_label = new QLabel(frameList);
        autoupdate_label->setObjectName(QStringLiteral("autoupdate_label"));

        horizontalLayout_5->addWidget(autoupdate_label);

        secondsLabel = new QLabel(frameList);
        secondsLabel->setObjectName(QStringLiteral("secondsLabel"));

        horizontalLayout_5->addWidget(secondsLabel);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);


        verticalLayout_2->addLayout(horizontalLayout_5);


        gridLayout_2->addWidget(frameList, 0, 0, 1, 1);


        verticalLayout->addLayout(gridLayout_2);


        verticalLayout_3->addWidget(frame_Content);


        verticalLayout_Master->addWidget(frame_BG);

        verticalLayout_Master->setStretch(1, 1);

        topLayout->addLayout(verticalLayout_Master);


        retranslateUi(MasternodeList);

        QMetaObject::connectSlotsByName(MasternodeList);
    } // setupUi

    void retranslateUi(QWidget *MasternodeList)
    {
        MasternodeList->setWindowTitle(QApplication::translate("MasternodeList", "Form", 0));
        labelOverviewHeaderLeft->setText(QApplication::translate("MasternodeList", "MASTERNODES", 0));
        labelOverviewHeaderRight->setText(QString());
        updateNote->setText(QApplication::translate("MasternodeList", "Note: Status of your masternodes in local wallet can potentially be slightly incorrect.<br />Always wait for wallet to sync additional data and then double check from another node<br />if your node should be running but you still see \"MISSING\" in \"Status\" field.", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidgetMyMasternodes->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MasternodeList", "Alias", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidgetMyMasternodes->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MasternodeList", "Address", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidgetMyMasternodes->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MasternodeList", "Protocol", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidgetMyMasternodes->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MasternodeList", "Status", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidgetMyMasternodes->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("MasternodeList", "Active", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidgetMyMasternodes->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("MasternodeList", "Last Seen (UTC)", 0));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidgetMyMasternodes->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("MasternodeList", "Pubkey", 0));
        startButton->setText(QApplication::translate("MasternodeList", "S&tart alias", 0));
        startAllButton->setText(QApplication::translate("MasternodeList", "Start &all", 0));
        startMissingButton->setText(QApplication::translate("MasternodeList", "Start &MISSING", 0));
        UpdateButton->setText(QApplication::translate("MasternodeList", "&Update status", 0));
        autoupdate_label->setText(QApplication::translate("MasternodeList", "Status will be updated automatically in (sec):", 0));
        secondsLabel->setText(QApplication::translate("MasternodeList", "0", 0));
    } // retranslateUi

};

namespace Ui {
    class MasternodeList: public Ui_MasternodeList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MASTERNODELIST_H
