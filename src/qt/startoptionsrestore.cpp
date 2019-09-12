//
// Created by Kolby on 9/4/2019.
//


#include <startoptionsrestore.h>
#include <ui_startoptionsrestore.h>
#include <QLineEdit>
#include <QLabel>




QString editLineCorrectCss = "QLineEdit{border-bottom:1px solid #00aeff;}";
QString editLineInvalidCss = "QLineEdit{border-bottom:1px solid red;}";

StartOptionsRestore::StartOptionsRestore(QStringList _wordList, int rows, QWidget *parent)
        : QWidget(parent), wordList(_wordList), ui(new Ui::StartOptionsRestore)
{
    ui->setupUi(this);

    for(int i=0; i<rows; i++){
        for(int k=0; k<6; k++){

            QLineEdit* label = new QLineEdit(this);
            label->setStyleSheet("QLabel{background-color:#e3e3e3;padding-left:8px;padding-right:8px;padding-top:2px;padding-bottom:2px;border-radius:4px;}");
            label->setMinimumSize(80,36);
            label->setSizePolicy(QSizePolicy::Fixed,QSizePolicy::Fixed);
            label->setContentsMargins(8,12,8,12);
            label->setAlignment(Qt::AlignCenter);
            editList.push_back(label);
            connect(label, SIGNAL(textChanged(const QString &)), this, SLOT(textChanged(const QString &)));
            ui->gridLayoutRevealed->addWidget(label, i, k, Qt::AlignCenter);
        }
    }


}

void StartOptionsRestore::textChanged(const QString &text){

    QObject *senderObj = sender();
    QLineEdit* label = static_cast<QLineEdit*>(senderObj);
    if(wordList.contains(text)){
        label->setStyleSheet(editLineCorrectCss);
    }else{
        label->setStyleSheet(editLineInvalidCss);
    }

}

std::vector<std::string> StartOptionsRestore::getOrderedStrings(){
    std::vector<std::string> list;
    for(QLineEdit* label : editList){
        list.push_back(label->text().toStdString());
    }
    return list;
}

StartOptionsRestore::~StartOptionsRestore() {
    delete ui;
}
