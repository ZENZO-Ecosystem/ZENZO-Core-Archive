/********************************************************************************
** Form generated from reading UI file 'blockexplorer.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BLOCKEXPLORER_H
#define UI_BLOCKEXPLORER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BlockExplorer
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *back;
    QPushButton *forward;
    QLineEdit *searchBox;
    QPushButton *pushSearch;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QHBoxLayout *horizontalLayout_2;
    QLabel *content;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *BlockExplorer)
    {
        if (BlockExplorer->objectName().isEmpty())
            BlockExplorer->setObjectName(QStringLiteral("BlockExplorer"));
        BlockExplorer->resize(800, 600);
        BlockExplorer->setStyleSheet(QStringLiteral(""));
        centralwidget = new QWidget(BlockExplorer);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        centralwidget->setStyleSheet(QStringLiteral(""));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        back = new QPushButton(centralwidget);
        back->setObjectName(QStringLiteral("back"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/back"), QSize(), QIcon::Normal, QIcon::Off);
        back->setIcon(icon);
        back->setFlat(false);

        horizontalLayout->addWidget(back);

        forward = new QPushButton(centralwidget);
        forward->setObjectName(QStringLiteral("forward"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icons/forward"), QSize(), QIcon::Normal, QIcon::Off);
        forward->setIcon(icon1);

        horizontalLayout->addWidget(forward);

        searchBox = new QLineEdit(centralwidget);
        searchBox->setObjectName(QStringLiteral("searchBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(5);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(searchBox->sizePolicy().hasHeightForWidth());
        searchBox->setSizePolicy(sizePolicy);
        searchBox->setMinimumSize(QSize(0, 0));

        horizontalLayout->addWidget(searchBox);

        pushSearch = new QPushButton(centralwidget);
        pushSearch->setObjectName(QStringLiteral("pushSearch"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushSearch->sizePolicy().hasHeightForWidth());
        pushSearch->setSizePolicy(sizePolicy1);
        pushSearch->setMinimumSize(QSize(0, 0));
        pushSearch->setMaximumSize(QSize(16777215, 16777215));
        pushSearch->setAutoDefault(false);
        pushSearch->setFlat(false);

        horizontalLayout->addWidget(pushSearch);


        verticalLayout->addLayout(horizontalLayout);

        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 780, 489));
        horizontalLayout_2 = new QHBoxLayout(scrollAreaWidgetContents);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        content = new QLabel(scrollAreaWidgetContents);
        content->setObjectName(QStringLiteral("content"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(content->sizePolicy().hasHeightForWidth());
        content->setSizePolicy(sizePolicy2);
        content->setTextFormat(Qt::RichText);
        content->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        content->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        horizontalLayout_2->addWidget(content);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        BlockExplorer->setCentralWidget(centralwidget);
        menubar = new QMenuBar(BlockExplorer);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 27));
        BlockExplorer->setMenuBar(menubar);
        statusbar = new QStatusBar(BlockExplorer);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        BlockExplorer->setStatusBar(statusbar);

        retranslateUi(BlockExplorer);

        pushSearch->setDefault(false);


        QMetaObject::connectSlotsByName(BlockExplorer);
    } // setupUi

    void retranslateUi(QMainWindow *BlockExplorer)
    {
        BlockExplorer->setWindowTitle(QApplication::translate("BlockExplorer", "Blockchain Explorer", 0));
        back->setText(QApplication::translate("BlockExplorer", "Back", 0));
        forward->setText(QApplication::translate("BlockExplorer", "Forward", 0));
        searchBox->setInputMask(QString());
        searchBox->setText(QString());
        searchBox->setPlaceholderText(QApplication::translate("BlockExplorer", "Address / Block / Transaction", 0));
        pushSearch->setText(QApplication::translate("BlockExplorer", "Search", 0));
        content->setText(QApplication::translate("BlockExplorer", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class BlockExplorer: public Ui_BlockExplorer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BLOCKEXPLORER_H
