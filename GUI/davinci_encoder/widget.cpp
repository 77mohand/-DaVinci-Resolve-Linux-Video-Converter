#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->main_text->setText("Davinci Resolve Linux Convert video");
    ui->main_text->move(1,1);
    ui->main_text->setFont(QFont("cairo", 18));
    ui->main_text->setStyleSheet("color:yellow");
}

Widget::~Widget()
{
    delete ui;
}
