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
    QString TextMass = ui->GrainText->text();
    QString TextVelocity = ui->VelocityText->text();
    double Mass = (TextMass.toDouble()/7000*32174);
    double Momentum = Mass * TextVelocity.toDouble();
    double Energy = Momentum * (TextVelocity.toDouble()/2);
    QString Answer = QString::number(Mass);
    QString Answer2 = QString::number(Momentum);
    QString Answer3 = QString::number(Energy);
    ui->BulletMassLabel->setText(("Bullet mass is: "+Answer));
    ui->MomentumLabel->setText("Momentum(lb/s): "+Answer2);
    ui->KineticEnergyLabel->setText("Kinetic Energy: "+Answer3);
}
