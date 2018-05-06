#include "widget.h"
#include "ui_widget.h"
#include "ifttttest.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    m_iftttAccessManager = new IftttTest(this);
    connect(m_iftttAccessManager, &IftttAccessManager::postFinished, this,
             [this](const QString &result){
        ui->postStatus->setText(result);
    });
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_clicked()
{
    m_iftttAccessManager->requestPost();
    ui->postStatus->setText("POST Started");
}
