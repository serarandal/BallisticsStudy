#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
//#include "secondwindow.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    float getCorrectionFactor();
    //SecondWindow getSecondWindow();

private:
    Ui::MainWindow *ui;
    void handlePushButton();
    void handleToolButton();
    float CorrectionFactor = 0.25;
    //SecondWindow *SecondWindow;
};
#endif // MAINWINDOW_H
