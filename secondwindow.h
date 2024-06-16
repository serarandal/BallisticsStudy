#ifndef SECONDWINDOW_H
#define SECONDWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class SecondWindow;
}
QT_END_NAMESPACE

class SecondWindow : public QMainWindow
{
    Q_OBJECT

public:
    SecondWindow(QWidget *parent = nullptr);
    ~SecondWindow();
    //float getCorrectionFactor();

private:
    Ui::SecondWindow *ui;
    //void handlePushButton();
    //void handleToolButton();
    //float CorrectionFactor = 0.25;
};

#endif // SECONDWINDOW_H
