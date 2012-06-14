#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QString>
#include "onglet.h"
#include "collection_onglet.h"


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent);
    ~MainWindow();
    Onglet *mesonglets;
    int nbonglet;

private slots:
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
    void fermerOnglet(int index);
    void nouvelOnglet();
    void pointPressed();
    void iPressed();
    void dollarPressed();
    void quotePressed();
    void changerOnglet(int index);
    void refreshUI(int index);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
