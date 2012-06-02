/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Sat Jun 2 11:03:04 2012
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpinBox>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QTextEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_Quit;
    QAction *actionAbout;
    QAction *actionAnnuler;
    QAction *actionR_tablir;
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLineEdit *inputLine;
    QPushButton *pushButton;
    QPushButton *num3;
    QPushButton *num6;
    QPushButton *num9;
    QPushButton *iButton;
    QPushButton *egalButton;
    QFrame *line_12;
    QPushButton *deleteButton;
    QPushButton *dollarButton;
    QPushButton *num8;
    QPushButton *num5;
    QPushButton *num2;
    QPushButton *virgule;
    QPushButton *num7;
    QPushButton *num4;
    QPushButton *num1;
    QPushButton *num0;
    QWidget *gridLayoutWidget;
    QGridLayout *Operators;
    QPushButton *minusButton;
    QPushButton *multiplyButton;
    QPushButton *divButton;
    QPushButton *addButton;
    QLabel *label;
    QFrame *line_2;
    QFrame *line_6;
    QFrame *line_10;
    QFrame *line_9;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QFrame *line_5;
    QFrame *line_11;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QPushButton *pushButton_13;
    QPushButton *pushButton_14;
    QPushButton *pushButton_15;
    QPushButton *pushButton_16;
    QPushButton *pushButton_17;
    QLabel *label_4;
    QLabel *label_5;
    QWidget *gridLayoutWidget_2;
    QGridLayout *Pile;
    QTextEdit *textEdit;
    QFrame *line_3;
    QFrame *line;
    QFrame *line_4;
    QLabel *label_7;
    QPushButton *pushButton_18;
    QLabel *label_6;
    QPushButton *pushButton_19;
    QPushButton *pushButton_20;
    QPushButton *pushButton_21;
    QPushButton *pushButton_22;
    QPushButton *pushButton_23;
    QLabel *label_8;
    QSpinBox *spinBox;
    QLabel *label_3;
    QFrame *line_8;
    QLabel *label_2;
    QFrame *line_7;
    QPushButton *pushButton_24;
    QWidget *tab_2;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuHelp;
    QMenu *menuEdition;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(751, 536);
        MainWindow->setAutoFillBackground(true);
        MainWindow->setAnimated(false);
        MainWindow->setDocumentMode(false);
        MainWindow->setDockOptions(QMainWindow::AllowTabbedDocks|QMainWindow::ForceTabbedDocks);
        action_Quit = new QAction(MainWindow);
        action_Quit->setObjectName(QString::fromUtf8("action_Quit"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionAnnuler = new QAction(MainWindow);
        actionAnnuler->setObjectName(QString::fromUtf8("actionAnnuler"));
        actionR_tablir = new QAction(MainWindow);
        actionR_tablir->setObjectName(QString::fromUtf8("actionR_tablir"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 741, 491));
        tabWidget->setAutoFillBackground(true);
        tabWidget->setDocumentMode(true);
        tabWidget->setTabsClosable(true);
        tabWidget->setMovable(true);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        widget = new QWidget(tab);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 10, 341, 231));
        gridLayout = new QGridLayout(widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        inputLine = new QLineEdit(widget);
        inputLine->setObjectName(QString::fromUtf8("inputLine"));
        inputLine->setReadOnly(true);

        gridLayout->addWidget(inputLine, 0, 0, 1, 3);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 6, 2, 1, 1);

        num3 = new QPushButton(widget);
        num3->setObjectName(QString::fromUtf8("num3"));

        gridLayout->addWidget(num3, 5, 2, 1, 1);

        num6 = new QPushButton(widget);
        num6->setObjectName(QString::fromUtf8("num6"));

        gridLayout->addWidget(num6, 4, 2, 1, 1);

        num9 = new QPushButton(widget);
        num9->setObjectName(QString::fromUtf8("num9"));

        gridLayout->addWidget(num9, 3, 2, 1, 1);

        iButton = new QPushButton(widget);
        iButton->setObjectName(QString::fromUtf8("iButton"));

        gridLayout->addWidget(iButton, 2, 2, 1, 1);

        egalButton = new QPushButton(widget);
        egalButton->setObjectName(QString::fromUtf8("egalButton"));

        gridLayout->addWidget(egalButton, 7, 0, 2, 3);

        line_12 = new QFrame(widget);
        line_12->setObjectName(QString::fromUtf8("line_12"));
        line_12->setFrameShape(QFrame::HLine);
        line_12->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_12, 1, 0, 1, 3);

        deleteButton = new QPushButton(widget);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));

        gridLayout->addWidget(deleteButton, 2, 0, 1, 1);

        dollarButton = new QPushButton(widget);
        dollarButton->setObjectName(QString::fromUtf8("dollarButton"));

        gridLayout->addWidget(dollarButton, 2, 1, 1, 1);

        num8 = new QPushButton(widget);
        num8->setObjectName(QString::fromUtf8("num8"));

        gridLayout->addWidget(num8, 3, 1, 1, 1);

        num5 = new QPushButton(widget);
        num5->setObjectName(QString::fromUtf8("num5"));

        gridLayout->addWidget(num5, 4, 1, 1, 1);

        num2 = new QPushButton(widget);
        num2->setObjectName(QString::fromUtf8("num2"));

        gridLayout->addWidget(num2, 5, 1, 1, 1);

        virgule = new QPushButton(widget);
        virgule->setObjectName(QString::fromUtf8("virgule"));

        gridLayout->addWidget(virgule, 6, 1, 1, 1);

        num7 = new QPushButton(widget);
        num7->setObjectName(QString::fromUtf8("num7"));

        gridLayout->addWidget(num7, 3, 0, 1, 1);

        num4 = new QPushButton(widget);
        num4->setObjectName(QString::fromUtf8("num4"));

        gridLayout->addWidget(num4, 4, 0, 1, 1);

        num1 = new QPushButton(widget);
        num1->setObjectName(QString::fromUtf8("num1"));

        gridLayout->addWidget(num1, 5, 0, 1, 1);

        num0 = new QPushButton(widget);
        num0->setObjectName(QString::fromUtf8("num0"));

        gridLayout->addWidget(num0, 6, 0, 1, 1);

        gridLayoutWidget = new QWidget(tab);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 250, 341, 214));
        Operators = new QGridLayout(gridLayoutWidget);
        Operators->setSpacing(6);
        Operators->setContentsMargins(11, 11, 11, 11);
        Operators->setObjectName(QString::fromUtf8("Operators"));
        Operators->setContentsMargins(0, 0, 0, 0);
        minusButton = new QPushButton(gridLayoutWidget);
        minusButton->setObjectName(QString::fromUtf8("minusButton"));

        Operators->addWidget(minusButton, 5, 2, 1, 1);

        multiplyButton = new QPushButton(gridLayoutWidget);
        multiplyButton->setObjectName(QString::fromUtf8("multiplyButton"));

        Operators->addWidget(multiplyButton, 6, 2, 1, 1);

        divButton = new QPushButton(gridLayoutWidget);
        divButton->setObjectName(QString::fromUtf8("divButton"));

        Operators->addWidget(divButton, 7, 2, 1, 2);

        addButton = new QPushButton(gridLayoutWidget);
        addButton->setObjectName(QString::fromUtf8("addButton"));

        Operators->addWidget(addButton, 4, 2, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("Verdana"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAutoFillBackground(true);
        label->setScaledContents(true);
        label->setAlignment(Qt::AlignCenter);

        Operators->addWidget(label, 1, 2, 1, 6);

        line_2 = new QFrame(gridLayoutWidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        Operators->addWidget(line_2, 2, 2, 1, 6);

        line_6 = new QFrame(gridLayoutWidget);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setFrameShape(QFrame::VLine);
        line_6->setFrameShadow(QFrame::Sunken);

        Operators->addWidget(line_6, 1, 8, 8, 1);

        line_10 = new QFrame(gridLayoutWidget);
        line_10->setObjectName(QString::fromUtf8("line_10"));
        line_10->setFrameShape(QFrame::HLine);
        line_10->setFrameShadow(QFrame::Sunken);

        Operators->addWidget(line_10, 9, 1, 1, 8);

        line_9 = new QFrame(gridLayoutWidget);
        line_9->setObjectName(QString::fromUtf8("line_9"));
        line_9->setFrameShape(QFrame::HLine);
        line_9->setFrameShadow(QFrame::Sunken);

        Operators->addWidget(line_9, 0, 1, 1, 8);

        pushButton_2 = new QPushButton(gridLayoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        Operators->addWidget(pushButton_2, 4, 3, 1, 1);

        pushButton_3 = new QPushButton(gridLayoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        Operators->addWidget(pushButton_3, 5, 3, 1, 1);

        pushButton_4 = new QPushButton(gridLayoutWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        Operators->addWidget(pushButton_4, 6, 3, 1, 1);

        line_5 = new QFrame(gridLayoutWidget);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setFrameShape(QFrame::VLine);
        line_5->setFrameShadow(QFrame::Sunken);

        Operators->addWidget(line_5, 1, 1, 8, 1);

        line_11 = new QFrame(gridLayoutWidget);
        line_11->setObjectName(QString::fromUtf8("line_11"));
        line_11->setFrameShape(QFrame::VLine);
        line_11->setFrameShadow(QFrame::Sunken);

        Operators->addWidget(line_11, 3, 4, 6, 1);

        pushButton_5 = new QPushButton(gridLayoutWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        Operators->addWidget(pushButton_5, 4, 5, 1, 1);

        pushButton_6 = new QPushButton(gridLayoutWidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));

        Operators->addWidget(pushButton_6, 5, 5, 1, 1);

        pushButton_7 = new QPushButton(gridLayoutWidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));

        Operators->addWidget(pushButton_7, 6, 5, 1, 1);

        pushButton_8 = new QPushButton(gridLayoutWidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));

        Operators->addWidget(pushButton_8, 4, 6, 1, 1);

        pushButton_9 = new QPushButton(gridLayoutWidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));

        Operators->addWidget(pushButton_9, 5, 6, 1, 1);

        pushButton_10 = new QPushButton(gridLayoutWidget);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));

        Operators->addWidget(pushButton_10, 6, 6, 1, 1);

        pushButton_11 = new QPushButton(gridLayoutWidget);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));

        Operators->addWidget(pushButton_11, 7, 5, 1, 1);

        pushButton_12 = new QPushButton(gridLayoutWidget);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));

        Operators->addWidget(pushButton_12, 7, 6, 1, 1);

        pushButton_13 = new QPushButton(gridLayoutWidget);
        pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));

        Operators->addWidget(pushButton_13, 8, 5, 1, 3);

        pushButton_14 = new QPushButton(gridLayoutWidget);
        pushButton_14->setObjectName(QString::fromUtf8("pushButton_14"));

        Operators->addWidget(pushButton_14, 4, 7, 1, 1);

        pushButton_15 = new QPushButton(gridLayoutWidget);
        pushButton_15->setObjectName(QString::fromUtf8("pushButton_15"));

        Operators->addWidget(pushButton_15, 5, 7, 1, 1);

        pushButton_16 = new QPushButton(gridLayoutWidget);
        pushButton_16->setObjectName(QString::fromUtf8("pushButton_16"));

        Operators->addWidget(pushButton_16, 6, 7, 1, 1);

        pushButton_17 = new QPushButton(gridLayoutWidget);
        pushButton_17->setObjectName(QString::fromUtf8("pushButton_17"));

        Operators->addWidget(pushButton_17, 7, 7, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Verdana"));
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setItalic(true);
        font1.setUnderline(true);
        font1.setWeight(50);
        label_4->setFont(font1);
        label_4->setAlignment(Qt::AlignCenter);

        Operators->addWidget(label_4, 3, 2, 1, 2);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font1);
        label_5->setAlignment(Qt::AlignCenter);

        Operators->addWidget(label_5, 3, 5, 1, 3);

        gridLayoutWidget_2 = new QWidget(tab);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(450, 0, 281, 461));
        Pile = new QGridLayout(gridLayoutWidget_2);
        Pile->setSpacing(6);
        Pile->setContentsMargins(11, 11, 11, 11);
        Pile->setObjectName(QString::fromUtf8("Pile"));
        Pile->setContentsMargins(0, 0, 0, 0);
        textEdit = new QTextEdit(gridLayoutWidget_2);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        Pile->addWidget(textEdit, 4, 1, 8, 2);

        line_3 = new QFrame(gridLayoutWidget_2);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);

        Pile->addWidget(line_3, 2, 0, 11, 1);

        line = new QFrame(gridLayoutWidget_2);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        Pile->addWidget(line, 3, 1, 1, 3);

        line_4 = new QFrame(gridLayoutWidget_2);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);

        Pile->addWidget(line_4, 2, 4, 13, 1);

        label_7 = new QLabel(gridLayoutWidget_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font1);
        label_7->setAlignment(Qt::AlignCenter);

        Pile->addWidget(label_7, 4, 3, 1, 1);

        pushButton_18 = new QPushButton(gridLayoutWidget_2);
        pushButton_18->setObjectName(QString::fromUtf8("pushButton_18"));

        Pile->addWidget(pushButton_18, 5, 3, 1, 1);

        label_6 = new QLabel(gridLayoutWidget_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font1);
        label_6->setAlignment(Qt::AlignCenter);

        Pile->addWidget(label_6, 6, 3, 1, 1);

        pushButton_19 = new QPushButton(gridLayoutWidget_2);
        pushButton_19->setObjectName(QString::fromUtf8("pushButton_19"));

        Pile->addWidget(pushButton_19, 7, 3, 1, 1);

        pushButton_20 = new QPushButton(gridLayoutWidget_2);
        pushButton_20->setObjectName(QString::fromUtf8("pushButton_20"));

        Pile->addWidget(pushButton_20, 8, 3, 1, 1);

        pushButton_21 = new QPushButton(gridLayoutWidget_2);
        pushButton_21->setObjectName(QString::fromUtf8("pushButton_21"));

        Pile->addWidget(pushButton_21, 10, 3, 1, 1);

        pushButton_22 = new QPushButton(gridLayoutWidget_2);
        pushButton_22->setObjectName(QString::fromUtf8("pushButton_22"));

        Pile->addWidget(pushButton_22, 11, 3, 1, 1);

        pushButton_23 = new QPushButton(gridLayoutWidget_2);
        pushButton_23->setObjectName(QString::fromUtf8("pushButton_23"));

        Pile->addWidget(pushButton_23, 12, 3, 1, 1);

        label_8 = new QLabel(gridLayoutWidget_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Verdana"));
        font2.setPointSize(10);
        font2.setItalic(true);
        font2.setUnderline(true);
        label_8->setFont(font2);
        label_8->setAlignment(Qt::AlignCenter);

        Pile->addWidget(label_8, 9, 3, 1, 1);

        spinBox = new QSpinBox(gridLayoutWidget_2);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));

        Pile->addWidget(spinBox, 12, 2, 2, 1);

        label_3 = new QLabel(gridLayoutWidget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Verdana"));
        font3.setPointSize(9);
        label_3->setFont(font3);
        label_3->setAutoFillBackground(true);
        label_3->setFrameShape(QFrame::NoFrame);
        label_3->setTextFormat(Qt::AutoText);
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_3->setWordWrap(true);
        label_3->setIndent(-1);

        Pile->addWidget(label_3, 12, 1, 2, 1);

        line_8 = new QFrame(gridLayoutWidget_2);
        line_8->setObjectName(QString::fromUtf8("line_8"));
        line_8->setFrameShape(QFrame::HLine);
        line_8->setFrameShadow(QFrame::Sunken);

        Pile->addWidget(line_8, 14, 0, 1, 4);

        label_2 = new QLabel(gridLayoutWidget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);

        Pile->addWidget(label_2, 2, 1, 1, 3);

        line_7 = new QFrame(gridLayoutWidget_2);
        line_7->setObjectName(QString::fromUtf8("line_7"));
        line_7->setFrameShape(QFrame::HLine);
        line_7->setFrameShadow(QFrame::Sunken);

        Pile->addWidget(line_7, 1, 0, 1, 5);

        pushButton_24 = new QPushButton(gridLayoutWidget_2);
        pushButton_24->setObjectName(QString::fromUtf8("pushButton_24"));

        Pile->addWidget(pushButton_24, 13, 3, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidget->addTab(tab_2, QString());
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 751, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        menuEdition = new QMenu(menuBar);
        menuEdition->setObjectName(QString::fromUtf8("menuEdition"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdition->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(action_Quit);
        menuHelp->addAction(actionAbout);
        menuEdition->addAction(actionAnnuler);
        menuEdition->addAction(actionR_tablir);

        retranslateUi(MainWindow);
        QObject::connect(action_Quit, SIGNAL(triggered()), MainWindow, SLOT(close()));
        QObject::connect(deleteButton, SIGNAL(clicked()), inputLine, SLOT(clear()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Calculatrice \303\240 notation polonaise inverse", 0, QApplication::UnicodeUTF8));
        action_Quit->setText(QApplication::translate("MainWindow", "Quit", 0, QApplication::UnicodeUTF8));
        actionAbout->setText(QApplication::translate("MainWindow", "About", 0, QApplication::UnicodeUTF8));
        actionAnnuler->setText(QApplication::translate("MainWindow", "Annuler", 0, QApplication::UnicodeUTF8));
        actionR_tablir->setText(QApplication::translate("MainWindow", "R\303\251tablir", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("MainWindow", "Space", 0, QApplication::UnicodeUTF8));
        num3->setText(QApplication::translate("MainWindow", "3", 0, QApplication::UnicodeUTF8));
        num3->setShortcut(QApplication::translate("MainWindow", "3", 0, QApplication::UnicodeUTF8));
        num6->setText(QApplication::translate("MainWindow", "6", 0, QApplication::UnicodeUTF8));
        num6->setShortcut(QApplication::translate("MainWindow", "6", 0, QApplication::UnicodeUTF8));
        num9->setText(QApplication::translate("MainWindow", "9", 0, QApplication::UnicodeUTF8));
        num9->setShortcut(QApplication::translate("MainWindow", "9", 0, QApplication::UnicodeUTF8));
        iButton->setText(QApplication::translate("MainWindow", "i", 0, QApplication::UnicodeUTF8));
        iButton->setShortcut(QApplication::translate("MainWindow", "I", 0, QApplication::UnicodeUTF8));
        egalButton->setText(QApplication::translate("MainWindow", "EVAL", 0, QApplication::UnicodeUTF8));
        egalButton->setShortcut(QApplication::translate("MainWindow", "=", 0, QApplication::UnicodeUTF8));
        deleteButton->setText(QApplication::translate("MainWindow", "del", 0, QApplication::UnicodeUTF8));
        deleteButton->setShortcut(QApplication::translate("MainWindow", "Backspace", 0, QApplication::UnicodeUTF8));
        dollarButton->setText(QApplication::translate("MainWindow", "$", 0, QApplication::UnicodeUTF8));
        dollarButton->setShortcut(QApplication::translate("MainWindow", "$", 0, QApplication::UnicodeUTF8));
        num8->setText(QApplication::translate("MainWindow", "8", 0, QApplication::UnicodeUTF8));
        num8->setShortcut(QApplication::translate("MainWindow", "8", 0, QApplication::UnicodeUTF8));
        num5->setText(QApplication::translate("MainWindow", "5", 0, QApplication::UnicodeUTF8));
        num5->setShortcut(QApplication::translate("MainWindow", "5", 0, QApplication::UnicodeUTF8));
        num2->setText(QApplication::translate("MainWindow", "2", 0, QApplication::UnicodeUTF8));
        num2->setShortcut(QApplication::translate("MainWindow", "2", 0, QApplication::UnicodeUTF8));
        virgule->setText(QApplication::translate("MainWindow", ",", 0, QApplication::UnicodeUTF8));
        virgule->setShortcut(QApplication::translate("MainWindow", ",", 0, QApplication::UnicodeUTF8));
        num7->setText(QApplication::translate("MainWindow", "7", 0, QApplication::UnicodeUTF8));
        num7->setShortcut(QApplication::translate("MainWindow", "7", 0, QApplication::UnicodeUTF8));
        num4->setText(QApplication::translate("MainWindow", "4", 0, QApplication::UnicodeUTF8));
        num4->setShortcut(QApplication::translate("MainWindow", "4", 0, QApplication::UnicodeUTF8));
        num1->setText(QApplication::translate("MainWindow", "1", 0, QApplication::UnicodeUTF8));
        num1->setShortcut(QApplication::translate("MainWindow", "1", 0, QApplication::UnicodeUTF8));
        num0->setText(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
        num0->setShortcut(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
        minusButton->setText(QApplication::translate("MainWindow", "-", 0, QApplication::UnicodeUTF8));
        minusButton->setShortcut(QApplication::translate("MainWindow", "-", 0, QApplication::UnicodeUTF8));
        multiplyButton->setText(QApplication::translate("MainWindow", "*", 0, QApplication::UnicodeUTF8));
        multiplyButton->setShortcut(QApplication::translate("MainWindow", "*", 0, QApplication::UnicodeUTF8));
        divButton->setText(QApplication::translate("MainWindow", "/", 0, QApplication::UnicodeUTF8));
        divButton->setShortcut(QApplication::translate("MainWindow", "/", 0, QApplication::UnicodeUTF8));
        addButton->setText(QApplication::translate("MainWindow", "+", 0, QApplication::UnicodeUTF8));
        addButton->setShortcut(QApplication::translate("MainWindow", "+", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "Op\303\251rateurs", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("MainWindow", "POW", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("MainWindow", "MOD", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("MainWindow", "SIGN", 0, QApplication::UnicodeUTF8));
        pushButton_5->setText(QApplication::translate("MainWindow", "SIN", 0, QApplication::UnicodeUTF8));
        pushButton_6->setText(QApplication::translate("MainWindow", "COS", 0, QApplication::UnicodeUTF8));
        pushButton_7->setText(QApplication::translate("MainWindow", "TAN", 0, QApplication::UnicodeUTF8));
        pushButton_8->setText(QApplication::translate("MainWindow", "SINH", 0, QApplication::UnicodeUTF8));
        pushButton_9->setText(QApplication::translate("MainWindow", "COSH", 0, QApplication::UnicodeUTF8));
        pushButton_10->setText(QApplication::translate("MainWindow", "TANH", 0, QApplication::UnicodeUTF8));
        pushButton_11->setText(QApplication::translate("MainWindow", "LN", 0, QApplication::UnicodeUTF8));
        pushButton_12->setText(QApplication::translate("MainWindow", "LOG", 0, QApplication::UnicodeUTF8));
        pushButton_13->setText(QApplication::translate("MainWindow", "!", 0, QApplication::UnicodeUTF8));
        pushButton_14->setText(QApplication::translate("MainWindow", "INV", 0, QApplication::UnicodeUTF8));
        pushButton_15->setText(QApplication::translate("MainWindow", "SQRT", 0, QApplication::UnicodeUTF8));
        pushButton_16->setText(QApplication::translate("MainWindow", "SQR", 0, QApplication::UnicodeUTF8));
        pushButton_17->setText(QApplication::translate("MainWindow", "CUBE", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "Binaires", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "Unaires", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("MainWindow", "Binaires", 0, QApplication::UnicodeUTF8));
        pushButton_18->setText(QApplication::translate("MainWindow", "SWAP", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("MainWindow", "Unaires", 0, QApplication::UnicodeUTF8));
        pushButton_19->setText(QApplication::translate("MainWindow", "SUM", 0, QApplication::UnicodeUTF8));
        pushButton_20->setText(QApplication::translate("MainWindow", "MEAN", 0, QApplication::UnicodeUTF8));
        pushButton_21->setText(QApplication::translate("MainWindow", "CLEAR", 0, QApplication::UnicodeUTF8));
        pushButton_22->setText(QApplication::translate("MainWindow", "DUP", 0, QApplication::UnicodeUTF8));
        pushButton_23->setText(QApplication::translate("MainWindow", "DROP", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("MainWindow", "Autres", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "Nombre d'\303\251l\303\251ments de la pile \303\240 afficher :", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "Pile", 0, QApplication::UnicodeUTF8));
        pushButton_24->setText(QApplication::translate("MainWindow", "PushButton", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Tab 1", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Tab 2", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0, QApplication::UnicodeUTF8));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", 0, QApplication::UnicodeUTF8));
        menuEdition->setTitle(QApplication::translate("MainWindow", "Edition", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
