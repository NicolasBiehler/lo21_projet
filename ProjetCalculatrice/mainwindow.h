#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QString>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:
    void num0Pressed();
    void num1Pressed();
    void num2Pressed();
    void num3Pressed();
    void num4Pressed();
    void num5Pressed();
    void num6Pressed();
    void num7Pressed();
    void num8Pressed();
    void num9Pressed();
    void SINPressed();
    void SINHPressed();
    void COSPressed();
    void COSHPressed();
    void TANPressed();
    void TANHPressed();
    void LNPressed();
    void LOGPressed();
    void SQRPressed();
    void SQRTPressed();
    void CUBEPressed();
    void INVPressed();
    void POWPressed();
    void MODPressed();
    void SIGNPressed();
    void FACTPressed();
    void ADDPressed();
    void MINUSPressed();
    void MULTPressed();
    void DIVPressed();
    void spacePressed();
    void ratioClicked();
    void integerClicked();
    void realClicked();
    void radianClicked();
    void degreClicked();
    void trueComplexClicked();
    void falseComplexClicked();
    void fermerOnglet();
    void nouvelOnglet();
    void nouvelOngletbis();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
