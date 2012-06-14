/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Thu Jun 14 19:08:27 2012
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
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpinBox>
#include <QtGui/QStatusBar>
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
    QAction *actionNouvel_Onglet;
    QWidget *centralWidget;
    QFrame *frame;
    QWidget *layoutWidget;
    QGridLayout *AffichageRes;
    QTextEdit *textEdit;
    QFrame *line_3;
    QFrame *line_8;
    QFrame *line_4;
    QSpinBox *nbelementaff;
    QLabel *nbelement;
    QLabel *Affichage;
    QFrame *line;
    QLabel *label_7;
    QPushButton *swapButton;
    QLabel *label_6;
    QPushButton *sumButton;
    QPushButton *meanButton;
    QLabel *label_8;
    QPushButton *clearButton;
    QPushButton *dupButton;
    QPushButton *dropButton;
    QLineEdit *inputLine;
    QFrame *line_7;
    QLabel *label_12;
    QSpinBox *ySwap;
    QLabel *label_13;
    QSpinBox *xSwap;
    QLabel *label_14;
    QSpinBox *xSum;
    QLabel *label_15;
    QSpinBox *xMean;
    QWidget *layoutWidget1;
    QGridLayout *Parameters;
    QLabel *label_2;
    QRadioButton *trueComplexButton;
    QRadioButton *falseComplexButton;
    QLabel *label_3;
    QLabel *label_9;
    QRadioButton *degreButton;
    QRadioButton *radianButton;
    QLabel *label_10;
    QRadioButton *integerButton;
    QRadioButton *ratioButton;
    QRadioButton *realButton;
    QWidget *layoutWidget2;
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
    QPushButton *powButton;
    QPushButton *modButton;
    QPushButton *signButton;
    QFrame *line_5;
    QFrame *line_11;
    QPushButton *sinButton;
    QPushButton *cosButton;
    QPushButton *tanButton;
    QPushButton *sinhButton;
    QPushButton *coshButton;
    QPushButton *tanhButton;
    QPushButton *lnButton;
    QPushButton *logButton;
    QPushButton *factButton;
    QPushButton *invButton;
    QPushButton *sqrtButton;
    QPushButton *sqrButton;
    QPushButton *cubeButton;
    QLabel *label_4;
    QLabel *label_5;
    QWidget *layoutWidget3;
    QGridLayout *NumPad;
    QPushButton *quoteButton;
    QPushButton *dollarButton;
    QPushButton *iButton;
    QPushButton *num7;
    QPushButton *num8;
    QPushButton *num9;
    QPushButton *num4;
    QPushButton *num5;
    QPushButton *num6;
    QPushButton *num1;
    QPushButton *num2;
    QPushButton *num3;
    QPushButton *num0;
    QPushButton *virgule;
    QPushButton *spaceButton;
    QPushButton *deleteButton;
    QPushButton *evalButton;
    QFrame *line_12;
    QFrame *line_13;
    QLabel *label_11;
    QFrame *line_14;
    QFrame *line_15;
    QFrame *line_16;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QSpinBox *spinBox_6;
    QPushButton *pushButton_2;
    QSpinBox *spinBox_7;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuHelp;
    QMenu *menuEdition;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(848, 622);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setAutoFillBackground(true);
        MainWindow->setAnimated(false);
        MainWindow->setDocumentMode(true);
        MainWindow->setDockOptions(QMainWindow::AllowTabbedDocks|QMainWindow::ForceTabbedDocks);
        action_Quit = new QAction(MainWindow);
        action_Quit->setObjectName(QString::fromUtf8("action_Quit"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionAnnuler = new QAction(MainWindow);
        actionAnnuler->setObjectName(QString::fromUtf8("actionAnnuler"));
        actionR_tablir = new QAction(MainWindow);
        actionR_tablir->setObjectName(QString::fromUtf8("actionR_tablir"));
        actionNouvel_Onglet = new QAction(MainWindow);
        actionNouvel_Onglet->setObjectName(QString::fromUtf8("actionNouvel_Onglet"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        sizePolicy.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy);
        centralWidget->setAcceptDrops(false);
        frame = new QFrame(centralWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 850, 579));
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setMinimumSize(QSize(850, 579));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        layoutWidget = new QWidget(frame);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(470, 20, 357, 385));
        AffichageRes = new QGridLayout(layoutWidget);
        AffichageRes->setSpacing(6);
        AffichageRes->setContentsMargins(11, 11, 11, 11);
        AffichageRes->setObjectName(QString::fromUtf8("AffichageRes"));
        AffichageRes->setSizeConstraint(QLayout::SetDefaultConstraint);
        AffichageRes->setContentsMargins(0, 0, 0, 0);
        textEdit = new QTextEdit(layoutWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setAutoFormatting(QTextEdit::AutoNone);
        textEdit->setReadOnly(true);

        AffichageRes->addWidget(textEdit, 6, 1, 8, 2);

        line_3 = new QFrame(layoutWidget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);

        AffichageRes->addWidget(line_3, 2, 0, 14, 1);

        line_8 = new QFrame(layoutWidget);
        line_8->setObjectName(QString::fromUtf8("line_8"));
        line_8->setFrameShape(QFrame::HLine);
        line_8->setFrameShadow(QFrame::Sunken);

        AffichageRes->addWidget(line_8, 15, 1, 1, 5);

        line_4 = new QFrame(layoutWidget);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);

        AffichageRes->addWidget(line_4, 2, 6, 14, 1);

        nbelementaff = new QSpinBox(layoutWidget);
        nbelementaff->setObjectName(QString::fromUtf8("nbelementaff"));
        nbelementaff->setValue(5);

        AffichageRes->addWidget(nbelementaff, 5, 2, 1, 1);

        nbelement = new QLabel(layoutWidget);
        nbelement->setObjectName(QString::fromUtf8("nbelement"));
        QFont font;
        font.setFamily(QString::fromUtf8("Verdana"));
        font.setPointSize(9);
        nbelement->setFont(font);
        nbelement->setAutoFillBackground(true);
        nbelement->setFrameShape(QFrame::NoFrame);
        nbelement->setTextFormat(Qt::AutoText);
        nbelement->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        nbelement->setWordWrap(true);
        nbelement->setIndent(-1);

        AffichageRes->addWidget(nbelement, 5, 1, 1, 1);

        Affichage = new QLabel(layoutWidget);
        Affichage->setObjectName(QString::fromUtf8("Affichage"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Verdana"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        Affichage->setFont(font1);
        Affichage->setAlignment(Qt::AlignCenter);

        AffichageRes->addWidget(Affichage, 3, 1, 1, 5);

        line = new QFrame(layoutWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        AffichageRes->addWidget(line, 4, 1, 1, 5);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Verdana"));
        font2.setPointSize(10);
        font2.setBold(false);
        font2.setItalic(true);
        font2.setUnderline(true);
        font2.setWeight(50);
        label_7->setFont(font2);
        label_7->setAlignment(Qt::AlignCenter);

        AffichageRes->addWidget(label_7, 5, 3, 1, 1);

        swapButton = new QPushButton(layoutWidget);
        swapButton->setObjectName(QString::fromUtf8("swapButton"));

        AffichageRes->addWidget(swapButton, 6, 3, 1, 1);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font2);
        label_6->setAlignment(Qt::AlignCenter);

        AffichageRes->addWidget(label_6, 7, 3, 1, 3);

        sumButton = new QPushButton(layoutWidget);
        sumButton->setObjectName(QString::fromUtf8("sumButton"));

        AffichageRes->addWidget(sumButton, 8, 3, 1, 1);

        meanButton = new QPushButton(layoutWidget);
        meanButton->setObjectName(QString::fromUtf8("meanButton"));

        AffichageRes->addWidget(meanButton, 9, 3, 1, 1);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Verdana"));
        font3.setPointSize(10);
        font3.setItalic(true);
        font3.setUnderline(true);
        label_8->setFont(font3);
        label_8->setAlignment(Qt::AlignCenter);

        AffichageRes->addWidget(label_8, 10, 3, 1, 3);

        clearButton = new QPushButton(layoutWidget);
        clearButton->setObjectName(QString::fromUtf8("clearButton"));

        AffichageRes->addWidget(clearButton, 11, 3, 1, 3);

        dupButton = new QPushButton(layoutWidget);
        dupButton->setObjectName(QString::fromUtf8("dupButton"));

        AffichageRes->addWidget(dupButton, 12, 3, 1, 3);

        dropButton = new QPushButton(layoutWidget);
        dropButton->setObjectName(QString::fromUtf8("dropButton"));

        AffichageRes->addWidget(dropButton, 13, 3, 1, 3);

        inputLine = new QLineEdit(layoutWidget);
        inputLine->setObjectName(QString::fromUtf8("inputLine"));
        inputLine->setReadOnly(true);

        AffichageRes->addWidget(inputLine, 14, 1, 1, 5);

        line_7 = new QFrame(layoutWidget);
        line_7->setObjectName(QString::fromUtf8("line_7"));
        line_7->setFrameShape(QFrame::HLine);
        line_7->setFrameShadow(QFrame::Sunken);

        AffichageRes->addWidget(line_7, 2, 1, 1, 5);

        label_12 = new QLabel(layoutWidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        AffichageRes->addWidget(label_12, 6, 4, 1, 1);

        ySwap = new QSpinBox(layoutWidget);
        ySwap->setObjectName(QString::fromUtf8("ySwap"));

        AffichageRes->addWidget(ySwap, 6, 5, 1, 1);

        label_13 = new QLabel(layoutWidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        AffichageRes->addWidget(label_13, 5, 4, 1, 1);

        xSwap = new QSpinBox(layoutWidget);
        xSwap->setObjectName(QString::fromUtf8("xSwap"));

        AffichageRes->addWidget(xSwap, 5, 5, 1, 1);

        label_14 = new QLabel(layoutWidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        AffichageRes->addWidget(label_14, 8, 4, 1, 1);

        xSum = new QSpinBox(layoutWidget);
        xSum->setObjectName(QString::fromUtf8("xSum"));

        AffichageRes->addWidget(xSum, 8, 5, 1, 1);

        label_15 = new QLabel(layoutWidget);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        AffichageRes->addWidget(label_15, 9, 4, 1, 1);

        xMean = new QSpinBox(layoutWidget);
        xMean->setObjectName(QString::fromUtf8("xMean"));

        AffichageRes->addWidget(xMean, 9, 5, 1, 1);

        layoutWidget1 = new QWidget(frame);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(500, 430, 297, 122));
        Parameters = new QGridLayout(layoutWidget1);
        Parameters->setSpacing(6);
        Parameters->setContentsMargins(11, 11, 11, 11);
        Parameters->setObjectName(QString::fromUtf8("Parameters"));
        Parameters->setSizeConstraint(QLayout::SetDefaultConstraint);
        Parameters->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignCenter);

        Parameters->addWidget(label_2, 0, 0, 1, 3);

        trueComplexButton = new QRadioButton(layoutWidget1);
        trueComplexButton->setObjectName(QString::fromUtf8("trueComplexButton"));
        trueComplexButton->setFont(font);
        trueComplexButton->setAutoExclusive(false);

        Parameters->addWidget(trueComplexButton, 3, 1, 1, 1);

        falseComplexButton = new QRadioButton(layoutWidget1);
        falseComplexButton->setObjectName(QString::fromUtf8("falseComplexButton"));
        falseComplexButton->setFont(font);
        falseComplexButton->setChecked(true);
        falseComplexButton->setAutoExclusive(false);

        Parameters->addWidget(falseComplexButton, 3, 2, 1, 1);

        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        Parameters->addWidget(label_3, 3, 0, 1, 1);

        label_9 = new QLabel(layoutWidget1);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font);

        Parameters->addWidget(label_9, 4, 0, 1, 1);

        degreButton = new QRadioButton(layoutWidget1);
        degreButton->setObjectName(QString::fromUtf8("degreButton"));
        degreButton->setFont(font);
        degreButton->setCheckable(true);
        degreButton->setChecked(true);
        degreButton->setAutoRepeat(false);
        degreButton->setAutoExclusive(false);

        Parameters->addWidget(degreButton, 4, 1, 1, 1);

        radianButton = new QRadioButton(layoutWidget1);
        radianButton->setObjectName(QString::fromUtf8("radianButton"));
        radianButton->setFont(font);
        radianButton->setAutoExclusive(false);

        Parameters->addWidget(radianButton, 4, 2, 1, 1);

        label_10 = new QLabel(layoutWidget1);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFont(font);

        Parameters->addWidget(label_10, 1, 0, 2, 1);

        integerButton = new QRadioButton(layoutWidget1);
        integerButton->setObjectName(QString::fromUtf8("integerButton"));
        integerButton->setFont(font);
        integerButton->setChecked(false);
        integerButton->setAutoExclusive(false);

        Parameters->addWidget(integerButton, 1, 1, 1, 1);

        ratioButton = new QRadioButton(layoutWidget1);
        ratioButton->setObjectName(QString::fromUtf8("ratioButton"));
        ratioButton->setFont(font);
        ratioButton->setChecked(true);
        ratioButton->setAutoExclusive(false);

        Parameters->addWidget(ratioButton, 1, 2, 2, 1);

        realButton = new QRadioButton(layoutWidget1);
        realButton->setObjectName(QString::fromUtf8("realButton"));
        realButton->setFont(font);
        realButton->setAutoExclusive(false);

        Parameters->addWidget(realButton, 2, 1, 1, 1);

        layoutWidget2 = new QWidget(frame);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 330, 428, 214));
        Operators = new QGridLayout(layoutWidget2);
        Operators->setSpacing(6);
        Operators->setContentsMargins(11, 11, 11, 11);
        Operators->setObjectName(QString::fromUtf8("Operators"));
        Operators->setSizeConstraint(QLayout::SetDefaultConstraint);
        Operators->setContentsMargins(0, 0, 0, 0);
        minusButton = new QPushButton(layoutWidget2);
        minusButton->setObjectName(QString::fromUtf8("minusButton"));

        Operators->addWidget(minusButton, 5, 2, 1, 1);

        multiplyButton = new QPushButton(layoutWidget2);
        multiplyButton->setObjectName(QString::fromUtf8("multiplyButton"));

        Operators->addWidget(multiplyButton, 6, 2, 1, 1);

        divButton = new QPushButton(layoutWidget2);
        divButton->setObjectName(QString::fromUtf8("divButton"));

        Operators->addWidget(divButton, 7, 2, 1, 2);

        addButton = new QPushButton(layoutWidget2);
        addButton->setObjectName(QString::fromUtf8("addButton"));

        Operators->addWidget(addButton, 4, 2, 1, 1);

        label = new QLabel(layoutWidget2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font1);
        label->setAutoFillBackground(true);
        label->setScaledContents(true);
        label->setAlignment(Qt::AlignCenter);

        Operators->addWidget(label, 1, 2, 1, 6);

        line_2 = new QFrame(layoutWidget2);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        Operators->addWidget(line_2, 2, 2, 1, 6);

        line_6 = new QFrame(layoutWidget2);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setFrameShape(QFrame::VLine);
        line_6->setFrameShadow(QFrame::Sunken);

        Operators->addWidget(line_6, 1, 8, 8, 1);

        line_10 = new QFrame(layoutWidget2);
        line_10->setObjectName(QString::fromUtf8("line_10"));
        line_10->setFrameShape(QFrame::HLine);
        line_10->setFrameShadow(QFrame::Sunken);

        Operators->addWidget(line_10, 9, 1, 1, 8);

        line_9 = new QFrame(layoutWidget2);
        line_9->setObjectName(QString::fromUtf8("line_9"));
        line_9->setFrameShape(QFrame::HLine);
        line_9->setFrameShadow(QFrame::Sunken);

        Operators->addWidget(line_9, 0, 1, 1, 8);

        powButton = new QPushButton(layoutWidget2);
        powButton->setObjectName(QString::fromUtf8("powButton"));

        Operators->addWidget(powButton, 4, 3, 1, 1);

        modButton = new QPushButton(layoutWidget2);
        modButton->setObjectName(QString::fromUtf8("modButton"));

        Operators->addWidget(modButton, 5, 3, 1, 1);

        signButton = new QPushButton(layoutWidget2);
        signButton->setObjectName(QString::fromUtf8("signButton"));

        Operators->addWidget(signButton, 6, 3, 1, 1);

        line_5 = new QFrame(layoutWidget2);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setFrameShape(QFrame::VLine);
        line_5->setFrameShadow(QFrame::Sunken);

        Operators->addWidget(line_5, 1, 1, 8, 1);

        line_11 = new QFrame(layoutWidget2);
        line_11->setObjectName(QString::fromUtf8("line_11"));
        line_11->setFrameShape(QFrame::VLine);
        line_11->setFrameShadow(QFrame::Sunken);

        Operators->addWidget(line_11, 3, 4, 6, 1);

        sinButton = new QPushButton(layoutWidget2);
        sinButton->setObjectName(QString::fromUtf8("sinButton"));

        Operators->addWidget(sinButton, 4, 5, 1, 1);

        cosButton = new QPushButton(layoutWidget2);
        cosButton->setObjectName(QString::fromUtf8("cosButton"));

        Operators->addWidget(cosButton, 5, 5, 1, 1);

        tanButton = new QPushButton(layoutWidget2);
        tanButton->setObjectName(QString::fromUtf8("tanButton"));

        Operators->addWidget(tanButton, 6, 5, 1, 1);

        sinhButton = new QPushButton(layoutWidget2);
        sinhButton->setObjectName(QString::fromUtf8("sinhButton"));

        Operators->addWidget(sinhButton, 4, 6, 1, 1);

        coshButton = new QPushButton(layoutWidget2);
        coshButton->setObjectName(QString::fromUtf8("coshButton"));

        Operators->addWidget(coshButton, 5, 6, 1, 1);

        tanhButton = new QPushButton(layoutWidget2);
        tanhButton->setObjectName(QString::fromUtf8("tanhButton"));

        Operators->addWidget(tanhButton, 6, 6, 1, 1);

        lnButton = new QPushButton(layoutWidget2);
        lnButton->setObjectName(QString::fromUtf8("lnButton"));

        Operators->addWidget(lnButton, 7, 5, 1, 1);

        logButton = new QPushButton(layoutWidget2);
        logButton->setObjectName(QString::fromUtf8("logButton"));

        Operators->addWidget(logButton, 7, 6, 1, 1);

        factButton = new QPushButton(layoutWidget2);
        factButton->setObjectName(QString::fromUtf8("factButton"));

        Operators->addWidget(factButton, 8, 5, 1, 3);

        invButton = new QPushButton(layoutWidget2);
        invButton->setObjectName(QString::fromUtf8("invButton"));

        Operators->addWidget(invButton, 4, 7, 1, 1);

        sqrtButton = new QPushButton(layoutWidget2);
        sqrtButton->setObjectName(QString::fromUtf8("sqrtButton"));

        Operators->addWidget(sqrtButton, 5, 7, 1, 1);

        sqrButton = new QPushButton(layoutWidget2);
        sqrButton->setObjectName(QString::fromUtf8("sqrButton"));

        Operators->addWidget(sqrButton, 6, 7, 1, 1);

        cubeButton = new QPushButton(layoutWidget2);
        cubeButton->setObjectName(QString::fromUtf8("cubeButton"));
        cubeButton->setCheckable(false);

        Operators->addWidget(cubeButton, 7, 7, 1, 1);

        label_4 = new QLabel(layoutWidget2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font2);
        label_4->setAlignment(Qt::AlignCenter);

        Operators->addWidget(label_4, 3, 2, 1, 2);

        label_5 = new QLabel(layoutWidget2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font2);
        label_5->setAlignment(Qt::AlignCenter);

        Operators->addWidget(label_5, 3, 5, 1, 3);

        layoutWidget3 = new QWidget(frame);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(10, 80, 421, 227));
        NumPad = new QGridLayout(layoutWidget3);
        NumPad->setSpacing(6);
        NumPad->setContentsMargins(11, 11, 11, 11);
        NumPad->setObjectName(QString::fromUtf8("NumPad"));
        NumPad->setSizeConstraint(QLayout::SetDefaultConstraint);
        NumPad->setContentsMargins(0, 0, 0, 0);
        quoteButton = new QPushButton(layoutWidget3);
        quoteButton->setObjectName(QString::fromUtf8("quoteButton"));

        NumPad->addWidget(quoteButton, 4, 1, 1, 1);

        dollarButton = new QPushButton(layoutWidget3);
        dollarButton->setObjectName(QString::fromUtf8("dollarButton"));

        NumPad->addWidget(dollarButton, 4, 2, 1, 1);

        iButton = new QPushButton(layoutWidget3);
        iButton->setObjectName(QString::fromUtf8("iButton"));

        NumPad->addWidget(iButton, 4, 3, 1, 1);

        num7 = new QPushButton(layoutWidget3);
        num7->setObjectName(QString::fromUtf8("num7"));

        NumPad->addWidget(num7, 5, 1, 1, 1);

        num8 = new QPushButton(layoutWidget3);
        num8->setObjectName(QString::fromUtf8("num8"));

        NumPad->addWidget(num8, 5, 2, 1, 1);

        num9 = new QPushButton(layoutWidget3);
        num9->setObjectName(QString::fromUtf8("num9"));

        NumPad->addWidget(num9, 5, 3, 1, 1);

        num4 = new QPushButton(layoutWidget3);
        num4->setObjectName(QString::fromUtf8("num4"));

        NumPad->addWidget(num4, 6, 1, 1, 1);

        num5 = new QPushButton(layoutWidget3);
        num5->setObjectName(QString::fromUtf8("num5"));

        NumPad->addWidget(num5, 6, 2, 1, 1);

        num6 = new QPushButton(layoutWidget3);
        num6->setObjectName(QString::fromUtf8("num6"));

        NumPad->addWidget(num6, 6, 3, 1, 1);

        num1 = new QPushButton(layoutWidget3);
        num1->setObjectName(QString::fromUtf8("num1"));

        NumPad->addWidget(num1, 7, 1, 1, 1);

        num2 = new QPushButton(layoutWidget3);
        num2->setObjectName(QString::fromUtf8("num2"));

        NumPad->addWidget(num2, 7, 2, 1, 1);

        num3 = new QPushButton(layoutWidget3);
        num3->setObjectName(QString::fromUtf8("num3"));

        NumPad->addWidget(num3, 7, 3, 1, 1);

        num0 = new QPushButton(layoutWidget3);
        num0->setObjectName(QString::fromUtf8("num0"));

        NumPad->addWidget(num0, 8, 1, 1, 1);

        virgule = new QPushButton(layoutWidget3);
        virgule->setObjectName(QString::fromUtf8("virgule"));

        NumPad->addWidget(virgule, 8, 2, 1, 1);

        spaceButton = new QPushButton(layoutWidget3);
        spaceButton->setObjectName(QString::fromUtf8("spaceButton"));

        NumPad->addWidget(spaceButton, 8, 3, 1, 1);

        deleteButton = new QPushButton(layoutWidget3);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));

        NumPad->addWidget(deleteButton, 9, 1, 1, 1);

        evalButton = new QPushButton(layoutWidget3);
        evalButton->setObjectName(QString::fromUtf8("evalButton"));

        NumPad->addWidget(evalButton, 9, 2, 1, 2);

        line_12 = new QFrame(layoutWidget3);
        line_12->setObjectName(QString::fromUtf8("line_12"));
        line_12->setFrameShape(QFrame::HLine);
        line_12->setFrameShadow(QFrame::Sunken);

        NumPad->addWidget(line_12, 10, 1, 1, 3);

        line_13 = new QFrame(layoutWidget3);
        line_13->setObjectName(QString::fromUtf8("line_13"));
        line_13->setFrameShape(QFrame::HLine);
        line_13->setFrameShadow(QFrame::Sunken);

        NumPad->addWidget(line_13, 3, 1, 1, 3);

        label_11 = new QLabel(layoutWidget3);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font1);
        label_11->setAlignment(Qt::AlignCenter);

        NumPad->addWidget(label_11, 1, 1, 1, 3);

        line_14 = new QFrame(layoutWidget3);
        line_14->setObjectName(QString::fromUtf8("line_14"));
        line_14->setFrameShape(QFrame::HLine);
        line_14->setFrameShadow(QFrame::Sunken);

        NumPad->addWidget(line_14, 0, 1, 1, 3);

        line_15 = new QFrame(layoutWidget3);
        line_15->setObjectName(QString::fromUtf8("line_15"));
        line_15->setFrameShape(QFrame::VLine);
        line_15->setFrameShadow(QFrame::Sunken);

        NumPad->addWidget(line_15, 1, 0, 9, 1);

        line_16 = new QFrame(layoutWidget3);
        line_16->setObjectName(QString::fromUtf8("line_16"));
        line_16->setFrameShape(QFrame::VLine);
        line_16->setFrameShadow(QFrame::Sunken);

        NumPad->addWidget(line_16, 1, 4, 9, 1);

        horizontalLayoutWidget = new QWidget(frame);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(90, 30, 254, 31));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(horizontalLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        spinBox_6 = new QSpinBox(horizontalLayoutWidget);
        spinBox_6->setObjectName(QString::fromUtf8("spinBox_6"));

        horizontalLayout->addWidget(spinBox_6);

        pushButton_2 = new QPushButton(horizontalLayoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        spinBox_7 = new QSpinBox(horizontalLayoutWidget);
        spinBox_7->setObjectName(QString::fromUtf8("spinBox_7"));

        horizontalLayout->addWidget(spinBox_7);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 848, 21));
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
        menuFile->addAction(actionNouvel_Onglet);
        menuFile->addAction(action_Quit);
        menuHelp->addAction(actionAbout);
        menuEdition->addAction(actionAnnuler);
        menuEdition->addAction(actionR_tablir);

        retranslateUi(MainWindow);
        QObject::connect(action_Quit, SIGNAL(triggered()), MainWindow, SLOT(close()));
        QObject::connect(deleteButton, SIGNAL(clicked()), inputLine, SLOT(clear()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Calculatrice \303\240 notation polonaise inverse", 0, QApplication::UnicodeUTF8));
        action_Quit->setText(QApplication::translate("MainWindow", "Quitter", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        action_Quit->setStatusTip(QApplication::translate("MainWindow", "Quitter le programme", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        action_Quit->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        action_Quit->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", 0, QApplication::UnicodeUTF8));
        actionAbout->setText(QApplication::translate("MainWindow", "About", 0, QApplication::UnicodeUTF8));
        actionAnnuler->setText(QApplication::translate("MainWindow", "Annuler", 0, QApplication::UnicodeUTF8));
        actionAnnuler->setShortcut(QApplication::translate("MainWindow", "Ctrl+Z", 0, QApplication::UnicodeUTF8));
        actionR_tablir->setText(QApplication::translate("MainWindow", "R\303\251tablir", 0, QApplication::UnicodeUTF8));
        actionR_tablir->setShortcut(QApplication::translate("MainWindow", "Ctrl+Y", 0, QApplication::UnicodeUTF8));
        actionNouvel_Onglet->setText(QApplication::translate("MainWindow", "Nouvel Onglet", 0, QApplication::UnicodeUTF8));
        actionNouvel_Onglet->setShortcut(QApplication::translate("MainWindow", "Ctrl+T", 0, QApplication::UnicodeUTF8));
        nbelement->setText(QApplication::translate("MainWindow", "Nombre d'\303\251l\303\251ments de la pile \303\240 afficher :", 0, QApplication::UnicodeUTF8));
        Affichage->setText(QApplication::translate("MainWindow", "Affichage", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("MainWindow", "Binaires", 0, QApplication::UnicodeUTF8));
        swapButton->setText(QApplication::translate("MainWindow", "SWAP", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("MainWindow", "Unaires", 0, QApplication::UnicodeUTF8));
        sumButton->setText(QApplication::translate("MainWindow", "SUM", 0, QApplication::UnicodeUTF8));
        meanButton->setText(QApplication::translate("MainWindow", "MEAN", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("MainWindow", "Autres", 0, QApplication::UnicodeUTF8));
        clearButton->setText(QApplication::translate("MainWindow", "CLEAR", 0, QApplication::UnicodeUTF8));
        clearButton->setShortcut(QApplication::translate("MainWindow", "Del", 0, QApplication::UnicodeUTF8));
        dupButton->setText(QApplication::translate("MainWindow", "DUP", 0, QApplication::UnicodeUTF8));
        dupButton->setShortcut(QApplication::translate("MainWindow", "D", 0, QApplication::UnicodeUTF8));
        dropButton->setText(QApplication::translate("MainWindow", "DROP", 0, QApplication::UnicodeUTF8));
        dropButton->setShortcut(QApplication::translate("MainWindow", "Shift+D", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("MainWindow", "y :", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("MainWindow", "x :", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("MainWindow", "x :", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("MainWindow", "x :", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "Modes Param\303\251trables", 0, QApplication::UnicodeUTF8));
        trueComplexButton->setText(QApplication::translate("MainWindow", "Oui", 0, QApplication::UnicodeUTF8));
        falseComplexButton->setText(QApplication::translate("MainWindow", "Non", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "Complexes :", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("MainWindow", "Degr\303\251s :", 0, QApplication::UnicodeUTF8));
        degreButton->setText(QApplication::translate("MainWindow", "Degr\303\251", 0, QApplication::UnicodeUTF8));
        radianButton->setText(QApplication::translate("MainWindow", "Radiant", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("MainWindow", "Type de constante :", 0, QApplication::UnicodeUTF8));
        integerButton->setText(QApplication::translate("MainWindow", "enti\303\250re", 0, QApplication::UnicodeUTF8));
        ratioButton->setText(QApplication::translate("MainWindow", "rationnelle", 0, QApplication::UnicodeUTF8));
        realButton->setText(QApplication::translate("MainWindow", "r\303\251elle", 0, QApplication::UnicodeUTF8));
        minusButton->setText(QApplication::translate("MainWindow", "-", 0, QApplication::UnicodeUTF8));
        minusButton->setShortcut(QApplication::translate("MainWindow", "-", 0, QApplication::UnicodeUTF8));
        multiplyButton->setText(QApplication::translate("MainWindow", "*", 0, QApplication::UnicodeUTF8));
        multiplyButton->setShortcut(QApplication::translate("MainWindow", "*", 0, QApplication::UnicodeUTF8));
        divButton->setText(QApplication::translate("MainWindow", "/", 0, QApplication::UnicodeUTF8));
        divButton->setShortcut(QApplication::translate("MainWindow", "/", 0, QApplication::UnicodeUTF8));
        addButton->setText(QApplication::translate("MainWindow", "+", 0, QApplication::UnicodeUTF8));
        addButton->setShortcut(QApplication::translate("MainWindow", "+", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "Op\303\251rateurs", 0, QApplication::UnicodeUTF8));
        powButton->setText(QApplication::translate("MainWindow", "POW", 0, QApplication::UnicodeUTF8));
        powButton->setShortcut(QApplication::translate("MainWindow", "P", 0, QApplication::UnicodeUTF8));
        modButton->setText(QApplication::translate("MainWindow", "MOD", 0, QApplication::UnicodeUTF8));
        modButton->setShortcut(QApplication::translate("MainWindow", "M", 0, QApplication::UnicodeUTF8));
        signButton->setText(QApplication::translate("MainWindow", "SIGN", 0, QApplication::UnicodeUTF8));
        sinButton->setText(QApplication::translate("MainWindow", "SIN", 0, QApplication::UnicodeUTF8));
        sinButton->setShortcut(QApplication::translate("MainWindow", "S", 0, QApplication::UnicodeUTF8));
        cosButton->setText(QApplication::translate("MainWindow", "COS", 0, QApplication::UnicodeUTF8));
        cosButton->setShortcut(QApplication::translate("MainWindow", "C", 0, QApplication::UnicodeUTF8));
        tanButton->setText(QApplication::translate("MainWindow", "TAN", 0, QApplication::UnicodeUTF8));
        tanButton->setShortcut(QApplication::translate("MainWindow", "T", 0, QApplication::UnicodeUTF8));
        sinhButton->setText(QApplication::translate("MainWindow", "SINH", 0, QApplication::UnicodeUTF8));
        sinhButton->setShortcut(QApplication::translate("MainWindow", "Shift+S", 0, QApplication::UnicodeUTF8));
        coshButton->setText(QApplication::translate("MainWindow", "COSH", 0, QApplication::UnicodeUTF8));
        coshButton->setShortcut(QApplication::translate("MainWindow", "Shift+C", 0, QApplication::UnicodeUTF8));
        tanhButton->setText(QApplication::translate("MainWindow", "TANH", 0, QApplication::UnicodeUTF8));
        tanhButton->setShortcut(QApplication::translate("MainWindow", "Shift+T", 0, QApplication::UnicodeUTF8));
        lnButton->setText(QApplication::translate("MainWindow", "LN", 0, QApplication::UnicodeUTF8));
        lnButton->setShortcut(QApplication::translate("MainWindow", "L", 0, QApplication::UnicodeUTF8));
        logButton->setText(QApplication::translate("MainWindow", "LOG", 0, QApplication::UnicodeUTF8));
        logButton->setShortcut(QApplication::translate("MainWindow", "Shift+L", 0, QApplication::UnicodeUTF8));
        factButton->setText(QApplication::translate("MainWindow", "!", 0, QApplication::UnicodeUTF8));
        factButton->setShortcut(QApplication::translate("MainWindow", "F", 0, QApplication::UnicodeUTF8));
        invButton->setText(QApplication::translate("MainWindow", "INV", 0, QApplication::UnicodeUTF8));
        sqrtButton->setText(QApplication::translate("MainWindow", "SQRT", 0, QApplication::UnicodeUTF8));
        sqrtButton->setShortcut(QApplication::translate("MainWindow", "Shift+Q", 0, QApplication::UnicodeUTF8));
        sqrButton->setText(QApplication::translate("MainWindow", "SQR", 0, QApplication::UnicodeUTF8));
        sqrButton->setShortcut(QApplication::translate("MainWindow", "Q", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        cubeButton->setToolTip(QApplication::translate("MainWindow", "Crtl+C", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        cubeButton->setText(QApplication::translate("MainWindow", "CUBE", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "Binaires", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "Unaires", 0, QApplication::UnicodeUTF8));
        quoteButton->setText(QApplication::translate("MainWindow", "'", 0, QApplication::UnicodeUTF8));
        quoteButton->setShortcut(QApplication::translate("MainWindow", "'", 0, QApplication::UnicodeUTF8));
        dollarButton->setText(QApplication::translate("MainWindow", "$", 0, QApplication::UnicodeUTF8));
        dollarButton->setShortcut(QApplication::translate("MainWindow", "$", 0, QApplication::UnicodeUTF8));
        iButton->setText(QApplication::translate("MainWindow", "i", 0, QApplication::UnicodeUTF8));
        iButton->setShortcut(QApplication::translate("MainWindow", "I", 0, QApplication::UnicodeUTF8));
        num7->setText(QApplication::translate("MainWindow", "7", 0, QApplication::UnicodeUTF8));
        num7->setShortcut(QApplication::translate("MainWindow", "7", 0, QApplication::UnicodeUTF8));
        num8->setText(QApplication::translate("MainWindow", "8", 0, QApplication::UnicodeUTF8));
        num8->setShortcut(QApplication::translate("MainWindow", "8", 0, QApplication::UnicodeUTF8));
        num9->setText(QApplication::translate("MainWindow", "9", 0, QApplication::UnicodeUTF8));
        num9->setShortcut(QApplication::translate("MainWindow", "9", 0, QApplication::UnicodeUTF8));
        num4->setText(QApplication::translate("MainWindow", "4", 0, QApplication::UnicodeUTF8));
        num4->setShortcut(QApplication::translate("MainWindow", "4", 0, QApplication::UnicodeUTF8));
        num5->setText(QApplication::translate("MainWindow", "5", 0, QApplication::UnicodeUTF8));
        num5->setShortcut(QApplication::translate("MainWindow", "5", 0, QApplication::UnicodeUTF8));
        num6->setText(QApplication::translate("MainWindow", "6", 0, QApplication::UnicodeUTF8));
        num6->setShortcut(QApplication::translate("MainWindow", "6", 0, QApplication::UnicodeUTF8));
        num1->setText(QApplication::translate("MainWindow", "1", 0, QApplication::UnicodeUTF8));
        num1->setShortcut(QApplication::translate("MainWindow", "1", 0, QApplication::UnicodeUTF8));
        num2->setText(QApplication::translate("MainWindow", "2", 0, QApplication::UnicodeUTF8));
        num2->setShortcut(QApplication::translate("MainWindow", "2", 0, QApplication::UnicodeUTF8));
        num3->setText(QApplication::translate("MainWindow", "3", 0, QApplication::UnicodeUTF8));
        num3->setShortcut(QApplication::translate("MainWindow", "3", 0, QApplication::UnicodeUTF8));
        num0->setText(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
        num0->setShortcut(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
        virgule->setText(QApplication::translate("MainWindow", ",", 0, QApplication::UnicodeUTF8));
        virgule->setShortcut(QApplication::translate("MainWindow", ",", 0, QApplication::UnicodeUTF8));
        spaceButton->setText(QApplication::translate("MainWindow", "Space", 0, QApplication::UnicodeUTF8));
        spaceButton->setShortcut(QApplication::translate("MainWindow", "Space", 0, QApplication::UnicodeUTF8));
        deleteButton->setText(QApplication::translate("MainWindow", "del", 0, QApplication::UnicodeUTF8));
        deleteButton->setShortcut(QApplication::translate("MainWindow", "Backspace", 0, QApplication::UnicodeUTF8));
        evalButton->setText(QApplication::translate("MainWindow", "EVAL", 0, QApplication::UnicodeUTF8));
        evalButton->setShortcut(QApplication::translate("MainWindow", "=", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("MainWindow", "NumPad", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("MainWindow", "Annuler", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("MainWindow", "R\303\251tablir", 0, QApplication::UnicodeUTF8));
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
