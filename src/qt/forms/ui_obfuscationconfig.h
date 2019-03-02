/********************************************************************************
** Form generated from reading UI file 'obfuscationconfig.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OBFUSCATIONCONFIG_H
#define UI_OBFUSCATIONCONFIG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ObfuscationConfig
{
public:
    QPushButton *buttonBasic;
    QPushButton *buttonHigh;
    QPushButton *buttonMax;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QFrame *line;
    QFrame *line_2;

    void setupUi(QDialog *ObfuscationConfig)
    {
        if (ObfuscationConfig->objectName().isEmpty())
            ObfuscationConfig->setObjectName(QStringLiteral("ObfuscationConfig"));
        ObfuscationConfig->resize(630, 307);
        buttonBasic = new QPushButton(ObfuscationConfig);
        buttonBasic->setObjectName(QStringLiteral("buttonBasic"));
        buttonBasic->setGeometry(QRect(20, 70, 151, 27));
        buttonHigh = new QPushButton(ObfuscationConfig);
        buttonHigh->setObjectName(QStringLiteral("buttonHigh"));
        buttonHigh->setGeometry(QRect(20, 140, 151, 27));
        buttonMax = new QPushButton(ObfuscationConfig);
        buttonMax->setObjectName(QStringLiteral("buttonMax"));
        buttonMax->setGeometry(QRect(20, 210, 151, 27));
        label = new QLabel(ObfuscationConfig);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 20, 571, 31));
        label_2 = new QLabel(ObfuscationConfig);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(190, 70, 421, 21));
        label_3 = new QLabel(ObfuscationConfig);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(190, 140, 411, 21));
        label_4 = new QLabel(ObfuscationConfig);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(190, 210, 421, 21));
        label_6 = new QLabel(ObfuscationConfig);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(40, 100, 561, 21));
        label_7 = new QLabel(ObfuscationConfig);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(40, 170, 561, 21));
        label_8 = new QLabel(ObfuscationConfig);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(40, 240, 561, 21));
        label_9 = new QLabel(ObfuscationConfig);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(40, 260, 561, 21));
        line = new QFrame(ObfuscationConfig);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(10, 120, 601, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(ObfuscationConfig);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(10, 190, 601, 16));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        retranslateUi(ObfuscationConfig);

        QMetaObject::connectSlotsByName(ObfuscationConfig);
    } // setupUi

    void retranslateUi(QDialog *ObfuscationConfig)
    {
        ObfuscationConfig->setWindowTitle(QApplication::translate("ObfuscationConfig", "Configure Obfuscation", 0));
        buttonBasic->setText(QApplication::translate("ObfuscationConfig", "Basic Privacy", 0));
        buttonHigh->setText(QApplication::translate("ObfuscationConfig", "High Privacy", 0));
        buttonMax->setText(QApplication::translate("ObfuscationConfig", "Maximum Privacy", 0));
        label->setText(QApplication::translate("ObfuscationConfig", "Please select a privacy level.", 0));
        label_2->setText(QApplication::translate("ObfuscationConfig", "Use 2 separate masternodes to mix funds up to 10000 ZNZ", 0));
        label_3->setText(QApplication::translate("ObfuscationConfig", "Use 8 separate masternodes to mix funds up to 10000 ZNZ", 0));
        label_4->setText(QApplication::translate("ObfuscationConfig", "Use 16 separate masternodes", 0));
        label_6->setText(QApplication::translate("ObfuscationConfig", "This option is the quickest and will cost about ~0.025 ZNZ to anonymize 10000 ZNZ", 0));
        label_7->setText(QApplication::translate("ObfuscationConfig", "This option is moderately fast and will cost about 0.05 ZNZ to anonymize 10000 ZNZ", 0));
        label_8->setText(QApplication::translate("ObfuscationConfig", "This is the slowest and most secure option. Using maximum anonymity will cost", 0));
        label_9->setText(QApplication::translate("ObfuscationConfig", "0.1 ZNZ per 10000 ZNZ you anonymize.", 0));
    } // retranslateUi

};

namespace Ui {
    class ObfuscationConfig: public Ui_ObfuscationConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OBFUSCATIONCONFIG_H
