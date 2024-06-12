#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton, &QPushButton::released, this, &MainWindow::handleButton);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::handleButton()
{
    QString Text = ui->TEST->text();
    double Mass = (Text.toDouble()/7000*32174);
    QString Answer = QString::number(Mass);
    ui->label_3->setText(("Bullet mass is: "+Answer));
}
