#ifndef MAINWINDOW_H
#define MAINWINDOW_H

/**
 * \file MainWindow.h
 * \brief Classe MainWindow
 * \author Nicolas Biehler/Jean-Baptiste Arzounian
 *
 */

#include <QMainWindow>
#include <QMessageBox>
#include <QString>
#include "onglet.h"
#include "collection_onglet.h"


namespace Ui {
class MainWindow;
}
/*! \class MainWindow
   * \brief classe servant à coder l'interface
   *
   */
class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
                /*!
         *  \brief Constructeur
         *
         *  Constructeur de la classe
         *
         * \param parent : le widget parent
         */
    explicit MainWindow(QWidget *parent);
                    /*!
         *  \brief Destructeur
         *
         *  Destructeur de la classe
         *
         */
    ~MainWindow();
    Onglet *mesonglets; /*!< pointeur sur la collection d'onglets */
    int nbonglet; /*!< nombre d'onglets courants */

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
    void slashPressed();
    void dollarPressed();
    void quotePressed();
    void changerOnglet(int index);
    void refreshUI(int index);
    void evalPressed();
    void Quitter();
    void annuler();
    void retablir();

private:
    Ui::MainWindow *ui; /*!< instance de l'IHM */
};

#endif // MAINWINDOW_H
