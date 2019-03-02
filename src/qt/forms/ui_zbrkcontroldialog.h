/********************************************************************************
** Form generated from reading UI file 'zbrkcontroldialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZBRKCONTROLDIALOG_H
#define UI_ZBRKCONTROLDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ZZNZControlDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QFormLayout *formLayout;
    QLabel *labelQuantity;
    QLabel *labelQuantity_int;
    QLabel *labelZZNZ;
    QLabel *labelZZNZ_int;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout3;
    QPushButton *pushButtonAll;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout1;
    QTreeWidget *treeWidget;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ZZNZControlDialog)
    {
        if (ZZNZControlDialog->objectName().isEmpty())
            ZZNZControlDialog->setObjectName(QStringLiteral("ZZNZControlDialog"));
        ZZNZControlDialog->resize(681, 450);
        ZZNZControlDialog->setMinimumSize(QSize(681, 450));
        verticalLayout = new QVBoxLayout(ZZNZControlDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        horizontalLayout->setSpacing(-1);
#endif
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, -1, -1, 10);
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setHorizontalSpacing(10);
        formLayout->setVerticalSpacing(10);
        formLayout->setContentsMargins(6, -1, 6, -1);
        labelQuantity = new QLabel(ZZNZControlDialog);
        labelQuantity->setObjectName(QStringLiteral("labelQuantity"));

        formLayout->setWidget(0, QFormLayout::LabelRole, labelQuantity);

        labelQuantity_int = new QLabel(ZZNZControlDialog);
        labelQuantity_int->setObjectName(QStringLiteral("labelQuantity_int"));

        formLayout->setWidget(0, QFormLayout::FieldRole, labelQuantity_int);

        labelZZNZ = new QLabel(ZZNZControlDialog);
        labelZZNZ->setObjectName(QStringLiteral("labelZZNZ"));

        formLayout->setWidget(1, QFormLayout::LabelRole, labelZZNZ);

        labelZZNZ_int = new QLabel(ZZNZControlDialog);
        labelZZNZ_int->setObjectName(QStringLiteral("labelZZNZ_int"));

        formLayout->setWidget(1, QFormLayout::FieldRole, labelZZNZ_int);


        horizontalLayout->addLayout(formLayout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout3 = new QHBoxLayout();
        horizontalLayout3->setSpacing(14);
        horizontalLayout3->setObjectName(QStringLiteral("horizontalLayout3"));
        horizontalLayout3->setContentsMargins(-1, -1, -1, 10);
        pushButtonAll = new QPushButton(ZZNZControlDialog);
        pushButtonAll->setObjectName(QStringLiteral("pushButtonAll"));

        horizontalLayout3->addWidget(pushButtonAll);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout3->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout3);

        verticalLayout1 = new QVBoxLayout();
        verticalLayout1->setObjectName(QStringLiteral("verticalLayout1"));
        treeWidget = new QTreeWidget(ZZNZControlDialog);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(4, QStringLiteral("Confirmations"));
        __qtreewidgetitem->setText(3, QStringLiteral("zZNZ Version"));
        __qtreewidgetitem->setText(2, QStringLiteral("zZNZ ID"));
        __qtreewidgetitem->setText(1, QStringLiteral("Denomination"));
        __qtreewidgetitem->setText(0, QStringLiteral("Select"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(treeWidget->sizePolicy().hasHeightForWidth());
        treeWidget->setSizePolicy(sizePolicy);
        treeWidget->setMinimumSize(QSize(0, 250));
        treeWidget->setAlternatingRowColors(true);
        treeWidget->setSortingEnabled(true);
        treeWidget->setColumnCount(5);
        treeWidget->header()->setDefaultSectionSize(100);

        verticalLayout1->addWidget(treeWidget);

        buttonBox = new QDialogButtonBox(ZZNZControlDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy1);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        verticalLayout1->addWidget(buttonBox);


        verticalLayout->addLayout(verticalLayout1);


        retranslateUi(ZZNZControlDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ZZNZControlDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ZZNZControlDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ZZNZControlDialog);
    } // setupUi

    void retranslateUi(QDialog *ZZNZControlDialog)
    {
        ZZNZControlDialog->setWindowTitle(QApplication::translate("ZZNZControlDialog", "Select zZNZ to Spend", 0));
        labelQuantity->setText(QApplication::translate("ZZNZControlDialog", "Quantity", 0));
        labelQuantity_int->setText(QApplication::translate("ZZNZControlDialog", "0", 0));
        labelZZNZ->setText(QApplication::translate("ZZNZControlDialog", "zZNZ", 0));
        labelZZNZ_int->setText(QApplication::translate("ZZNZControlDialog", "0", 0));
        pushButtonAll->setText(QApplication::translate("ZZNZControlDialog", "Select/Deselect All", 0));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(5, QApplication::translate("ZZNZControlDialog", "Is Spendable", 0));
    } // retranslateUi

};

namespace Ui {
    class ZZNZControlDialog: public Ui_ZZNZControlDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZBRKCONTROLDIALOG_H
