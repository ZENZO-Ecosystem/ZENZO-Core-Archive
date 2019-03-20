/********************************************************************************
** Form generated from reading UI file 'multisenddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MULTISENDDIALOG_H
#define UI_MULTISENDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_MultiSendDialog
{
public:
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_Main;
    QLabel *label_2;
    QFrame *line;
    QVBoxLayout *verticalLayout_Settings;
    QHBoxLayout *horizontalLayout;
    QCheckBox *multiSendStakeCheckBox;
    QCheckBox *multiSendMasternodeCheckBox;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label;
    QLineEdit *multiSendPercentEdit;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_5;
    QLineEdit *multiSendAddressEdit;
    QToolButton *addressBookButton;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *labelAddressLabelEdit;
    QFrame *line_2;
    QVBoxLayout *verticalLayout_Buttons;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *viewButton;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *addButton;
    QPushButton *deleteButton;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *activateButton;
    QPushButton *disableButton;
    QLabel *message;

    void setupUi(QDialog *MultiSendDialog)
    {
        if (MultiSendDialog->objectName().isEmpty())
            MultiSendDialog->setObjectName(QStringLiteral("MultiSendDialog"));
        MultiSendDialog->setWindowModality(Qt::NonModal);
        MultiSendDialog->resize(594, 526);
        verticalLayout = new QVBoxLayout(MultiSendDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(6, 6, 6, 6);
        verticalLayout_Main = new QVBoxLayout();
        verticalLayout_Main->setObjectName(QStringLiteral("verticalLayout_Main"));
        label_2 = new QLabel(MultiSendDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setLineWidth(1);
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_2->setWordWrap(true);

        verticalLayout_Main->addWidget(label_2);

        line = new QFrame(MultiSendDialog);
        line->setObjectName(QStringLiteral("line"));
        line->setMinimumSize(QSize(0, 1));
        line->setMaximumSize(QSize(16777215, 1));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_Main->addWidget(line);

        verticalLayout_Settings = new QVBoxLayout();
        verticalLayout_Settings->setObjectName(QStringLiteral("verticalLayout_Settings"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        multiSendStakeCheckBox = new QCheckBox(MultiSendDialog);
        multiSendStakeCheckBox->setObjectName(QStringLiteral("multiSendStakeCheckBox"));

        horizontalLayout->addWidget(multiSendStakeCheckBox);

        multiSendMasternodeCheckBox = new QCheckBox(MultiSendDialog);
        multiSendMasternodeCheckBox->setObjectName(QStringLiteral("multiSendMasternodeCheckBox"));

        horizontalLayout->addWidget(multiSendMasternodeCheckBox);


        verticalLayout_Settings->addLayout(horizontalLayout);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label = new QLabel(MultiSendDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(100, 0));

        horizontalLayout_6->addWidget(label);

        multiSendPercentEdit = new QLineEdit(MultiSendDialog);
        multiSendPercentEdit->setObjectName(QStringLiteral("multiSendPercentEdit"));

        horizontalLayout_6->addWidget(multiSendPercentEdit);


        verticalLayout_Settings->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_5 = new QLabel(MultiSendDialog);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMinimumSize(QSize(100, 0));

        horizontalLayout_7->addWidget(label_5);

        multiSendAddressEdit = new QLineEdit(MultiSendDialog);
        multiSendAddressEdit->setObjectName(QStringLiteral("multiSendAddressEdit"));

        horizontalLayout_7->addWidget(multiSendAddressEdit);

        addressBookButton = new QToolButton(MultiSendDialog);
        addressBookButton->setObjectName(QStringLiteral("addressBookButton"));
        addressBookButton->setMaximumSize(QSize(16777215, 32));
        addressBookButton->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/address-book"), QSize(), QIcon::Normal, QIcon::Off);
        addressBookButton->setIcon(icon);

        horizontalLayout_7->addWidget(addressBookButton);


        verticalLayout_Settings->addLayout(horizontalLayout_7);


        verticalLayout_Main->addLayout(verticalLayout_Settings);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(MultiSendDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMinimumSize(QSize(100, 0));

        horizontalLayout_3->addWidget(label_3);

        labelAddressLabelEdit = new QLineEdit(MultiSendDialog);
        labelAddressLabelEdit->setObjectName(QStringLiteral("labelAddressLabelEdit"));

        horizontalLayout_3->addWidget(labelAddressLabelEdit);


        verticalLayout_Main->addLayout(horizontalLayout_3);

        line_2 = new QFrame(MultiSendDialog);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setMinimumSize(QSize(0, 1));
        line_2->setMaximumSize(QSize(16777215, 1));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_Main->addWidget(line_2);

        verticalLayout_Buttons = new QVBoxLayout();
        verticalLayout_Buttons->setObjectName(QStringLiteral("verticalLayout_Buttons"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        viewButton = new QPushButton(MultiSendDialog);
        viewButton->setObjectName(QStringLiteral("viewButton"));
        viewButton->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_4->addWidget(viewButton);


        verticalLayout_Buttons->addLayout(horizontalLayout_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        addButton = new QPushButton(MultiSendDialog);
        addButton->setObjectName(QStringLiteral("addButton"));
        addButton->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_2->addWidget(addButton);

        deleteButton = new QPushButton(MultiSendDialog);
        deleteButton->setObjectName(QStringLiteral("deleteButton"));
        deleteButton->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_2->addWidget(deleteButton);


        verticalLayout_Buttons->addLayout(horizontalLayout_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        activateButton = new QPushButton(MultiSendDialog);
        activateButton->setObjectName(QStringLiteral("activateButton"));
        activateButton->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_5->addWidget(activateButton);

        disableButton = new QPushButton(MultiSendDialog);
        disableButton->setObjectName(QStringLiteral("disableButton"));
        disableButton->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_5->addWidget(disableButton);


        verticalLayout_Buttons->addLayout(horizontalLayout_5);


        verticalLayout_Main->addLayout(verticalLayout_Buttons);

        message = new QLabel(MultiSendDialog);
        message->setObjectName(QStringLiteral("message"));
        message->setMinimumSize(QSize(0, 180));
        message->setFrameShape(QFrame::Panel);
        message->setFrameShadow(QFrame::Plain);
        message->setLineWidth(1);
        message->setMidLineWidth(1);
        message->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        message->setWordWrap(true);

        verticalLayout_Main->addWidget(message);

        verticalLayout_Main->setStretch(0, 1);
        verticalLayout_Main->setStretch(1, 1);
        verticalLayout_Main->setStretch(2, 1);
        verticalLayout_Main->setStretch(4, 1);
        verticalLayout_Main->setStretch(5, 1);
        verticalLayout_Main->setStretch(6, 1);

        verticalLayout->addLayout(verticalLayout_Main);


        retranslateUi(MultiSendDialog);

        QMetaObject::connectSlotsByName(MultiSendDialog);
    } // setupUi

    void retranslateUi(QDialog *MultiSendDialog)
    {
        MultiSendDialog->setWindowTitle(QApplication::translate("MultiSendDialog", "MultiSend", 0));
        label_2->setText(QApplication::translate("MultiSendDialog", "MultiSend allows you to automatically send up to 100% of your stake or masternode reward to a list of other ZENZO addresses after it matures.\n"
"To Add: enter percentage to give and ZENZO address to add to the MultiSend vector.\n"
"To Delete: Enter address to delete and press delete.\n"
"MultiSend will not be activated unless you have clicked Activate", 0));
        multiSendStakeCheckBox->setText(QApplication::translate("MultiSendDialog", "Send For Stakes", 0));
        multiSendMasternodeCheckBox->setText(QApplication::translate("MultiSendDialog", "Send For Masternode Rewards", 0));
#ifndef QT_NO_TOOLTIP
        label->setToolTip(QApplication::translate("MultiSendDialog", "Percentage of stake to send", 0));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("MultiSendDialog", "Percentage:", 0));
#ifndef QT_NO_TOOLTIP
        multiSendPercentEdit->setToolTip(QApplication::translate("MultiSendDialog", "Enter whole numbers 1 - 100", 0));
#endif // QT_NO_TOOLTIP
        multiSendPercentEdit->setPlaceholderText(QApplication::translate("MultiSendDialog", "Enter % to Give (1-100)", 0));
#ifndef QT_NO_TOOLTIP
        label_5->setToolTip(QApplication::translate("MultiSendDialog", "Address to send portion of stake to", 0));
#endif // QT_NO_TOOLTIP
        label_5->setText(QApplication::translate("MultiSendDialog", "Address:", 0));
#ifndef QT_NO_TOOLTIP
        multiSendAddressEdit->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        multiSendAddressEdit->setPlaceholderText(QApplication::translate("MultiSendDialog", "Enter Address to Send to", 0));
#ifndef QT_NO_TOOLTIP
        addressBookButton->setToolTip(QApplication::translate("MultiSendDialog", "Choose an address from the address book", 0));
#endif // QT_NO_TOOLTIP
        addressBookButton->setText(QString());
        addressBookButton->setShortcut(QApplication::translate("MultiSendDialog", "Alt+A", 0));
        label_3->setText(QApplication::translate("MultiSendDialog", "Label:", 0));
        labelAddressLabelEdit->setPlaceholderText(QApplication::translate("MultiSendDialog", "Enter a label for this address to add it to your address book", 0));
#ifndef QT_NO_TOOLTIP
        viewButton->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        viewButton->setStatusTip(QApplication::translate("MultiSendDialog", "View MultiSend Vector", 0));
#endif // QT_NO_STATUSTIP
        viewButton->setText(QApplication::translate("MultiSendDialog", "View MultiSend", 0));
#ifndef QT_NO_TOOLTIP
        addButton->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        addButton->setStatusTip(QApplication::translate("MultiSendDialog", "Add to MultiSend Vector", 0));
#endif // QT_NO_STATUSTIP
        addButton->setText(QApplication::translate("MultiSendDialog", "Add", 0));
#ifndef QT_NO_TOOLTIP
        deleteButton->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        deleteButton->setStatusTip(QApplication::translate("MultiSendDialog", "Delete Address From MultiSend Vector", 0));
#endif // QT_NO_STATUSTIP
        deleteButton->setText(QApplication::translate("MultiSendDialog", "Delete", 0));
#ifndef QT_NO_STATUSTIP
        activateButton->setStatusTip(QApplication::translate("MultiSendDialog", "Activate MultiSend", 0));
#endif // QT_NO_STATUSTIP
        activateButton->setText(QApplication::translate("MultiSendDialog", "Activate", 0));
#ifndef QT_NO_STATUSTIP
        disableButton->setStatusTip(QApplication::translate("MultiSendDialog", "Deactivate MultiSend", 0));
#endif // QT_NO_STATUSTIP
        disableButton->setText(QApplication::translate("MultiSendDialog", "Deactivate", 0));
        message->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MultiSendDialog: public Ui_MultiSendDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MULTISENDDIALOG_H
