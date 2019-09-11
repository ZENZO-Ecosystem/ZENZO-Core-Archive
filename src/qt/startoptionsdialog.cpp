//
// Created by Kolby on 9/4/2019.
//

#if defined(HAVE_CONFIG_H)
#include "config/zenzo-config.h"
#endif

#include <startoptionsdialog.h>
#include <ui_startoptionsdialog.h>




#include <QKeyEvent>
#include <QMessageBox>
#include <QPushButton>

StartOptionsDialog::StartOptionsDialog(const QString error_words, QWidget* parent)
        : QDialog(parent), ui(new Ui::StartOptionsDialog) {
    ui->setupUi(this);

    ui->ErrorLable->setText(error_words);
}

StartOptionsDialog::~StartOptionsDialog() {
    delete ui;
}

void StartOptionsDialog::accept() {
    close();
}
