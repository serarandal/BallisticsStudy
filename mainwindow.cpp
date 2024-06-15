#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <cmath>

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

float MainWindow::getCorrectionFactor()
{
   return this->CorrectionFactor;
}

void MainWindow::handleButton()
{
    QString TextMass = ui->GrainText->text();
    QString TextBoreDiameter = ui->BoreDiameterText->text();
    QString TextBarrelLength = ui->BarrelLengthText->text();
    //QString TextBulletPresure = 12; take the pressure from the ammunition selected
    int BulletPressure = 12;
    double Mass = (TextMass.toDouble()/7000*32174);
    double BoreArea = M_PI*pow((TextBoreDiameter.toDouble()/2),2);
    double BulletVelocity =sqrt((2*BulletPressure*BoreArea*TextBarrelLength.toDouble())/(getCorrectionFactor()*Mass))/12;
    double BulletEnergy = (Mass*pow(BulletVelocity,2))/2;
    double BulletMomentum = Mass*BulletVelocity;
    QString MassAnswer = QString::number(Mass);
    QString BoreAreaAnswer = QString::number(BoreArea);
    QString BulletVelocityAnswer = QString::number(BulletVelocity);
    QString BulletEnergyAnswer = QString::number(BulletEnergy);
    QString BulletMomentumAnswer = QString::number(BulletMomentum);
    ui->BulletMassLabel->setText("Bullet mass is: "+MassAnswer);
    ui->BoreAreaLabel->setText("Bore area is: "+BoreAreaAnswer);
    ui->BulletVelocityLabel->setText("Bullet velocity is: "+ BulletVelocityAnswer);
    ui->KineticEnergyLabel->setText("Kinetic energy is: "+ BulletEnergyAnswer);
    ui->BulletMomentumLabel->setText("Bullet momentum is: "+ BulletMomentumAnswer);


}
