#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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

private:
    Ui::MainWindow *ui;
    void handleButton();
    float CorrectionFactor = 0.25;
};
#endif // MAINWINDOW_H
