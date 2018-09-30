/********************************************************************************
** Form generated from reading UI file 'helpmessagedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELPMESSAGEDIALOG_H
#define UI_HELPMESSAGEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HelpMessageDialog
{
public:
    QHBoxLayout *horizontalLayout_2;
    QLabel *graphic;
    QVBoxLayout *verticalLayout;
    QTextEdit *helpMessage;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QLabel *aboutMessage;
    QDialogButtonBox *okButton;

    void setupUi(QDialog *HelpMessageDialog)
    {
        if (HelpMessageDialog->objectName().isEmpty())
            HelpMessageDialog->setObjectName(QStringLiteral("HelpMessageDialog"));
        HelpMessageDialog->resize(585, 488);
        QFont font;
        font.setPointSize(10);
        HelpMessageDialog->setFont(font);
        HelpMessageDialog->setWindowTitle(QStringLiteral("Zenzo Core - Command-line options"));
        horizontalLayout_2 = new QHBoxLayout(HelpMessageDialog);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        graphic = new QLabel(HelpMessageDialog);
        graphic->setObjectName(QStringLiteral("graphic"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(graphic->sizePolicy().hasHeightForWidth());
        graphic->setSizePolicy(sizePolicy);
        graphic->setPixmap(QPixmap(QString::fromUtf8(":/images/about")));

        horizontalLayout_2->addWidget(graphic);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        helpMessage = new QTextEdit(HelpMessageDialog);
        helpMessage->setObjectName(QStringLiteral("helpMessage"));
        helpMessage->setReadOnly(true);

        verticalLayout->addWidget(helpMessage);

        scrollArea = new QScrollArea(HelpMessageDialog);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 479, 213));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        aboutMessage = new QLabel(scrollAreaWidgetContents);
        aboutMessage->setObjectName(QStringLiteral("aboutMessage"));
        aboutMessage->setCursor(QCursor(Qt::IBeamCursor));
        aboutMessage->setTextFormat(Qt::PlainText);
        aboutMessage->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        aboutMessage->setOpenExternalLinks(true);
        aboutMessage->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        verticalLayout_2->addWidget(aboutMessage);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        okButton = new QDialogButtonBox(HelpMessageDialog);
        okButton->setObjectName(QStringLiteral("okButton"));
        okButton->setOrientation(Qt::Horizontal);
        okButton->setStandardButtons(QDialogButtonBox::Ok);

        verticalLayout->addWidget(okButton);


        horizontalLayout_2->addLayout(verticalLayout);


        retranslateUi(HelpMessageDialog);
        QObject::connect(okButton, SIGNAL(accepted()), HelpMessageDialog, SLOT(accept()));
        QObject::connect(okButton, SIGNAL(rejected()), HelpMessageDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(HelpMessageDialog);
    } // setupUi

    void retranslateUi(QDialog *HelpMessageDialog)
    {
        Q_UNUSED(HelpMessageDialog);
    } // retranslateUi

};

namespace Ui {
    class HelpMessageDialog: public Ui_HelpMessageDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELPMESSAGEDIALOG_H
