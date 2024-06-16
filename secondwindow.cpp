#include "secondwindow.h"
#include "./ui_secondwindow.h"

SecondWindow::SecondWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::SecondWindow)
{
    ui->setupUi(this);
    //connect(ui->pushButton, &QPushButton::released, this, &MainWindow::handlePushButton);
    //connect(ui->toolButton,&QToolButton::released,this,&MainWindow::handleToolButton);
}
SecondWindow::~SecondWindow()
{
    delete ui;
}
