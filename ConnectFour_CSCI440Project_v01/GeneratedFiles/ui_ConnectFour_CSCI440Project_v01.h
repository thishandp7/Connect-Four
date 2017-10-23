/********************************************************************************
** Form generated from reading UI file 'ConnectFour_CSCI440Project_v01.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONNECTFOUR_CSCI440PROJECT_V01_H
#define UI_CONNECTFOUR_CSCI440PROJECT_V01_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConnectFour_CSCI440Project_v01Class
{
public:
    QWidget *centralWidget;
    QLabel *boardBG;
    QPushButton *restartBtn;
    QPushButton *redBtn;
    QPushButton *yellowBtn;
    QLabel *sixOne;
    QLabel *oneOne;
    QLabel *fourZero;
    QLabel *sixTwo;
    QLabel *fourFive;
    QLabel *twoZero;
    QLabel *oneZero;
    QLabel *threeOne;
    QLabel *fiveFive;
    QLabel *oneTwo;
    QLabel *fourOne;
    QLabel *threeFive;
    QLabel *threeFour;
    QLabel *zeroOne;
    QLabel *fourThree;
    QLabel *sixFive;
    QLabel *sixZero;
    QLabel *sixThree;
    QLabel *sixFour;
    QLabel *oneFive;
    QLabel *zeroThree;
    QLabel *fourFour;
    QLabel *fiveFour;
    QLabel *fiveOne;
    QLabel *zeroFive;
    QLabel *twoOne;
    QLabel *zeroTwo;
    QLabel *twoThree;
    QLabel *threeZero;
    QLabel *oneThree;
    QLabel *twoTwo;
    QLabel *fiveZero;
    QLabel *threeThree;
    QLabel *fourTwo;
    QLabel *zeroFour;
    QLabel *twoFive;
    QLabel *fiveThree;
    QLabel *threeTwo;
    QLabel *oneFour;
    QLabel *zeroZero;
    QLabel *fiveTwo;
    QLabel *twoFour;
    QPushButton *col1;
    QPushButton *col2;
    QPushButton *col3;
    QPushButton *col4;
    QPushButton *col5;
    QPushButton *col6;
    QPushButton *col7;
    QLabel *scoreLabel;

    void setupUi(QMainWindow *ConnectFour_CSCI440Project_v01Class)
    {
        if (ConnectFour_CSCI440Project_v01Class->objectName().isEmpty())
            ConnectFour_CSCI440Project_v01Class->setObjectName(QStringLiteral("ConnectFour_CSCI440Project_v01Class"));
        ConnectFour_CSCI440Project_v01Class->setEnabled(true);
        ConnectFour_CSCI440Project_v01Class->resize(940, 805);
        ConnectFour_CSCI440Project_v01Class->setAcceptDrops(false);
        ConnectFour_CSCI440Project_v01Class->setAutoFillBackground(false);
        centralWidget = new QWidget(ConnectFour_CSCI440Project_v01Class);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        boardBG = new QLabel(centralWidget);
        boardBG->setObjectName(QStringLiteral("boardBG"));
        boardBG->setGeometry(QRect(10, 0, 801, 791));
        boardBG->setPixmap(QPixmap(QString::fromUtf8(":/ConnectFour_CSCI440Project_v01/Resources/board_BG.png")));
        boardBG->setScaledContents(true);
        restartBtn = new QPushButton(centralWidget);
        restartBtn->setObjectName(QStringLiteral("restartBtn"));
        restartBtn->setGeometry(QRect(820, 700, 101, 71));
        QFont font;
        font.setPointSize(16);
        restartBtn->setFont(font);
        redBtn = new QPushButton(centralWidget);
        redBtn->setObjectName(QStringLiteral("redBtn"));
        redBtn->setGeometry(QRect(820, 10, 101, 101));
        redBtn->setAutoFillBackground(false);
        redBtn->setStyleSheet(QStringLiteral("border-image: url(:/ConnectFour_CSCI440Project_v01/Resources/red.png);"));
        yellowBtn = new QPushButton(centralWidget);
        yellowBtn->setObjectName(QStringLiteral("yellowBtn"));
        yellowBtn->setEnabled(true);
        yellowBtn->setGeometry(QRect(820, 10, 101, 101));
        yellowBtn->setStyleSheet(QStringLiteral("border-image: url(:/ConnectFour_CSCI440Project_v01/Resources/yellow.png);"));
        sixOne = new QLabel(centralWidget);
        sixOne->setObjectName(QStringLiteral("sixOne"));
        sixOne->setGeometry(QRect(700, 570, 111, 101));
        sixOne->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        oneOne = new QLabel(centralWidget);
        oneOne->setObjectName(QStringLiteral("oneOne"));
        oneOne->setGeometry(QRect(130, 570, 101, 101));
        oneOne->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        fourZero = new QLabel(centralWidget);
        fourZero->setObjectName(QStringLiteral("fourZero"));
        fourZero->setGeometry(QRect(470, 680, 111, 111));
        fourZero->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        sixTwo = new QLabel(centralWidget);
        sixTwo->setObjectName(QStringLiteral("sixTwo"));
        sixTwo->setGeometry(QRect(700, 460, 111, 101));
        sixTwo->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        fourFive = new QLabel(centralWidget);
        fourFive->setObjectName(QStringLiteral("fourFive"));
        fourFive->setGeometry(QRect(470, 120, 111, 101));
        fourFive->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        twoZero = new QLabel(centralWidget);
        twoZero->setObjectName(QStringLiteral("twoZero"));
        twoZero->setGeometry(QRect(240, 680, 111, 111));
        twoZero->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        oneZero = new QLabel(centralWidget);
        oneZero->setObjectName(QStringLiteral("oneZero"));
        oneZero->setGeometry(QRect(130, 680, 101, 111));
        oneZero->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        threeOne = new QLabel(centralWidget);
        threeOne->setObjectName(QStringLiteral("threeOne"));
        threeOne->setGeometry(QRect(360, 570, 101, 101));
        threeOne->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        fiveFive = new QLabel(centralWidget);
        fiveFive->setObjectName(QStringLiteral("fiveFive"));
        fiveFive->setGeometry(QRect(580, 120, 111, 101));
        fiveFive->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        oneTwo = new QLabel(centralWidget);
        oneTwo->setObjectName(QStringLiteral("oneTwo"));
        oneTwo->setGeometry(QRect(130, 460, 101, 101));
        oneTwo->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        fourOne = new QLabel(centralWidget);
        fourOne->setObjectName(QStringLiteral("fourOne"));
        fourOne->setGeometry(QRect(470, 570, 111, 101));
        fourOne->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        threeFive = new QLabel(centralWidget);
        threeFive->setObjectName(QStringLiteral("threeFive"));
        threeFive->setGeometry(QRect(360, 120, 101, 101));
        threeFive->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        threeFour = new QLabel(centralWidget);
        threeFour->setObjectName(QStringLiteral("threeFour"));
        threeFour->setGeometry(QRect(360, 230, 101, 101));
        threeFour->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        zeroOne = new QLabel(centralWidget);
        zeroOne->setObjectName(QStringLiteral("zeroOne"));
        zeroOne->setGeometry(QRect(10, 570, 111, 101));
        zeroOne->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        fourThree = new QLabel(centralWidget);
        fourThree->setObjectName(QStringLiteral("fourThree"));
        fourThree->setGeometry(QRect(470, 340, 111, 111));
        fourThree->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        sixFive = new QLabel(centralWidget);
        sixFive->setObjectName(QStringLiteral("sixFive"));
        sixFive->setGeometry(QRect(700, 120, 111, 101));
        sixFive->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        sixZero = new QLabel(centralWidget);
        sixZero->setObjectName(QStringLiteral("sixZero"));
        sixZero->setGeometry(QRect(700, 680, 111, 111));
        sixZero->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        sixThree = new QLabel(centralWidget);
        sixThree->setObjectName(QStringLiteral("sixThree"));
        sixThree->setGeometry(QRect(700, 340, 111, 111));
        sixThree->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        sixFour = new QLabel(centralWidget);
        sixFour->setObjectName(QStringLiteral("sixFour"));
        sixFour->setGeometry(QRect(700, 230, 111, 101));
        sixFour->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        oneFive = new QLabel(centralWidget);
        oneFive->setObjectName(QStringLiteral("oneFive"));
        oneFive->setGeometry(QRect(130, 120, 101, 101));
        oneFive->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        zeroThree = new QLabel(centralWidget);
        zeroThree->setObjectName(QStringLiteral("zeroThree"));
        zeroThree->setGeometry(QRect(10, 340, 111, 111));
        zeroThree->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        fourFour = new QLabel(centralWidget);
        fourFour->setObjectName(QStringLiteral("fourFour"));
        fourFour->setGeometry(QRect(470, 230, 111, 101));
        fourFour->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        fiveFour = new QLabel(centralWidget);
        fiveFour->setObjectName(QStringLiteral("fiveFour"));
        fiveFour->setGeometry(QRect(580, 230, 111, 101));
        fiveFour->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        fiveOne = new QLabel(centralWidget);
        fiveOne->setObjectName(QStringLiteral("fiveOne"));
        fiveOne->setGeometry(QRect(580, 570, 111, 101));
        fiveOne->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        zeroFive = new QLabel(centralWidget);
        zeroFive->setObjectName(QStringLiteral("zeroFive"));
        zeroFive->setGeometry(QRect(10, 120, 111, 101));
        zeroFive->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        twoOne = new QLabel(centralWidget);
        twoOne->setObjectName(QStringLiteral("twoOne"));
        twoOne->setGeometry(QRect(240, 570, 111, 101));
        twoOne->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        zeroTwo = new QLabel(centralWidget);
        zeroTwo->setObjectName(QStringLiteral("zeroTwo"));
        zeroTwo->setGeometry(QRect(10, 460, 111, 101));
        zeroTwo->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        twoThree = new QLabel(centralWidget);
        twoThree->setObjectName(QStringLiteral("twoThree"));
        twoThree->setGeometry(QRect(240, 340, 111, 111));
        twoThree->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        threeZero = new QLabel(centralWidget);
        threeZero->setObjectName(QStringLiteral("threeZero"));
        threeZero->setGeometry(QRect(360, 680, 101, 111));
        threeZero->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        oneThree = new QLabel(centralWidget);
        oneThree->setObjectName(QStringLiteral("oneThree"));
        oneThree->setGeometry(QRect(130, 340, 101, 111));
        oneThree->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        twoTwo = new QLabel(centralWidget);
        twoTwo->setObjectName(QStringLiteral("twoTwo"));
        twoTwo->setGeometry(QRect(240, 460, 111, 101));
        twoTwo->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        fiveZero = new QLabel(centralWidget);
        fiveZero->setObjectName(QStringLiteral("fiveZero"));
        fiveZero->setGeometry(QRect(580, 680, 111, 111));
        fiveZero->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        threeThree = new QLabel(centralWidget);
        threeThree->setObjectName(QStringLiteral("threeThree"));
        threeThree->setGeometry(QRect(360, 340, 101, 111));
        threeThree->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        fourTwo = new QLabel(centralWidget);
        fourTwo->setObjectName(QStringLiteral("fourTwo"));
        fourTwo->setGeometry(QRect(470, 460, 111, 101));
        fourTwo->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        zeroFour = new QLabel(centralWidget);
        zeroFour->setObjectName(QStringLiteral("zeroFour"));
        zeroFour->setGeometry(QRect(10, 230, 111, 101));
        zeroFour->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        twoFive = new QLabel(centralWidget);
        twoFive->setObjectName(QStringLiteral("twoFive"));
        twoFive->setGeometry(QRect(240, 120, 111, 101));
        twoFive->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        fiveThree = new QLabel(centralWidget);
        fiveThree->setObjectName(QStringLiteral("fiveThree"));
        fiveThree->setGeometry(QRect(580, 340, 111, 111));
        fiveThree->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        threeTwo = new QLabel(centralWidget);
        threeTwo->setObjectName(QStringLiteral("threeTwo"));
        threeTwo->setGeometry(QRect(360, 460, 101, 101));
        threeTwo->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        oneFour = new QLabel(centralWidget);
        oneFour->setObjectName(QStringLiteral("oneFour"));
        oneFour->setGeometry(QRect(130, 230, 101, 101));
        oneFour->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        zeroZero = new QLabel(centralWidget);
        zeroZero->setObjectName(QStringLiteral("zeroZero"));
        zeroZero->setGeometry(QRect(10, 680, 111, 111));
        zeroZero->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        fiveTwo = new QLabel(centralWidget);
        fiveTwo->setObjectName(QStringLiteral("fiveTwo"));
        fiveTwo->setGeometry(QRect(580, 460, 111, 101));
        fiveTwo->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        twoFour = new QLabel(centralWidget);
        twoFour->setObjectName(QStringLiteral("twoFour"));
        twoFour->setGeometry(QRect(240, 230, 111, 101));
        twoFour->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        col1 = new QPushButton(centralWidget);
        col1->setObjectName(QStringLiteral("col1"));
        col1->setGeometry(QRect(12, 0, 111, 111));
        col1->setStyleSheet(QStringLiteral("background-color: rgb(28, 86, 193);"));
        col2 = new QPushButton(centralWidget);
        col2->setObjectName(QStringLiteral("col2"));
        col2->setGeometry(QRect(120, 0, 121, 111));
        col2->setStyleSheet(QStringLiteral("background-color: rgb(28, 86, 193);"));
        col3 = new QPushButton(centralWidget);
        col3->setObjectName(QStringLiteral("col3"));
        col3->setGeometry(QRect(240, 0, 111, 111));
        col3->setStyleSheet(QStringLiteral("background-color: rgb(28, 86, 193);"));
        col4 = new QPushButton(centralWidget);
        col4->setObjectName(QStringLiteral("col4"));
        col4->setGeometry(QRect(350, 0, 121, 111));
        col4->setStyleSheet(QStringLiteral("background-color: rgb(28, 86, 193);"));
        col5 = new QPushButton(centralWidget);
        col5->setObjectName(QStringLiteral("col5"));
        col5->setGeometry(QRect(470, 0, 111, 111));
        col5->setStyleSheet(QStringLiteral("background-color: rgb(28, 86, 193);"));
        col6 = new QPushButton(centralWidget);
        col6->setObjectName(QStringLiteral("col6"));
        col6->setGeometry(QRect(580, 0, 121, 111));
        col6->setStyleSheet(QStringLiteral("background-color: rgb(28, 86, 193);"));
        col7 = new QPushButton(centralWidget);
        col7->setObjectName(QStringLiteral("col7"));
        col7->setGeometry(QRect(700, 0, 111, 111));
        col7->setStyleSheet(QStringLiteral("background-color: rgb(28, 86, 193);"));
        scoreLabel = new QLabel(centralWidget);
        scoreLabel->setObjectName(QStringLiteral("scoreLabel"));
        scoreLabel->setGeometry(QRect(220, 10, 381, 81));
        QFont font1;
        font1.setPointSize(36);
        scoreLabel->setFont(font1);
        scoreLabel->setLayoutDirection(Qt::LeftToRight);
        scoreLabel->setAutoFillBackground(true);
        scoreLabel->setStyleSheet(QStringLiteral("color: rgb(0, 170, 0);"));
        ConnectFour_CSCI440Project_v01Class->setCentralWidget(centralWidget);
        sixOne->raise();
        sixZero->raise();
        sixThree->raise();
        sixFour->raise();
        sixTwo->raise();
        sixFive->raise();
        restartBtn->raise();
        oneOne->raise();
        fourZero->raise();
        fourFive->raise();
        twoZero->raise();
        oneZero->raise();
        threeOne->raise();
        fiveFive->raise();
        oneTwo->raise();
        fourOne->raise();
        threeFive->raise();
        threeFour->raise();
        zeroOne->raise();
        fourThree->raise();
        oneFive->raise();
        zeroThree->raise();
        fourFour->raise();
        fiveFour->raise();
        fiveOne->raise();
        zeroFive->raise();
        twoOne->raise();
        zeroTwo->raise();
        twoThree->raise();
        threeZero->raise();
        oneThree->raise();
        twoTwo->raise();
        fiveZero->raise();
        threeThree->raise();
        fourTwo->raise();
        zeroFour->raise();
        twoFive->raise();
        fiveThree->raise();
        threeTwo->raise();
        oneFour->raise();
        zeroZero->raise();
        fiveTwo->raise();
        twoFour->raise();
        redBtn->raise();
        yellowBtn->raise();
        boardBG->raise();
        col1->raise();
        col2->raise();
        col3->raise();
        col4->raise();
        col5->raise();
        col6->raise();
        col7->raise();
        scoreLabel->raise();

        retranslateUi(ConnectFour_CSCI440Project_v01Class);
        QObject::connect(yellowBtn, SIGNAL(clicked()), ConnectFour_CSCI440Project_v01Class, SLOT(on_yellowBtn_clicked()));
        QObject::connect(redBtn, SIGNAL(clicked()), ConnectFour_CSCI440Project_v01Class, SLOT(on_redBtn_clicked()));
        QObject::connect(restartBtn, SIGNAL(clicked()), ConnectFour_CSCI440Project_v01Class, SLOT(on_restartBtn_clicked()));
        QObject::connect(col1, SIGNAL(clicked()), ConnectFour_CSCI440Project_v01Class, SLOT(on_arrowBtn_clicked()));
        QObject::connect(col2, SIGNAL(clicked()), ConnectFour_CSCI440Project_v01Class, SLOT(on_arrowBtn_clicked()));
        QObject::connect(col3, SIGNAL(clicked()), ConnectFour_CSCI440Project_v01Class, SLOT(on_arrowBtn_clicked()));
        QObject::connect(col4, SIGNAL(clicked()), ConnectFour_CSCI440Project_v01Class, SLOT(on_arrowBtn_clicked()));
        QObject::connect(col5, SIGNAL(clicked()), ConnectFour_CSCI440Project_v01Class, SLOT(on_arrowBtn_clicked()));
        QObject::connect(col6, SIGNAL(clicked()), ConnectFour_CSCI440Project_v01Class, SLOT(on_arrowBtn_clicked()));
        QObject::connect(col7, SIGNAL(clicked()), ConnectFour_CSCI440Project_v01Class, SLOT(on_arrowBtn_clicked()));

        QMetaObject::connectSlotsByName(ConnectFour_CSCI440Project_v01Class);
    } // setupUi

    void retranslateUi(QMainWindow *ConnectFour_CSCI440Project_v01Class)
    {
        ConnectFour_CSCI440Project_v01Class->setWindowTitle(QApplication::translate("ConnectFour_CSCI440Project_v01Class", "ConnectFour_CSCI440Project_v01", Q_NULLPTR));
        boardBG->setText(QString());
        restartBtn->setText(QApplication::translate("ConnectFour_CSCI440Project_v01Class", "Restart", Q_NULLPTR));
        redBtn->setText(QString());
        yellowBtn->setText(QString());
        sixOne->setText(QString());
        oneOne->setText(QString());
        fourZero->setText(QString());
        sixTwo->setText(QString());
        fourFive->setText(QString());
        twoZero->setText(QString());
        oneZero->setText(QString());
        threeOne->setText(QString());
        fiveFive->setText(QString());
        oneTwo->setText(QString());
        fourOne->setText(QString());
        threeFive->setText(QString());
        threeFour->setText(QString());
        zeroOne->setText(QString());
        fourThree->setText(QString());
        sixFive->setText(QString());
        sixZero->setText(QString());
        sixThree->setText(QString());
        sixFour->setText(QString());
        oneFive->setText(QString());
        zeroThree->setText(QString());
        fourFour->setText(QString());
        fiveFour->setText(QString());
        fiveOne->setText(QString());
        zeroFive->setText(QString());
        twoOne->setText(QString());
        zeroTwo->setText(QString());
        twoThree->setText(QString());
        threeZero->setText(QString());
        oneThree->setText(QString());
        twoTwo->setText(QString());
        fiveZero->setText(QString());
        threeThree->setText(QString());
        fourTwo->setText(QString());
        zeroFour->setText(QString());
        twoFive->setText(QString());
        fiveThree->setText(QString());
        threeTwo->setText(QString());
        oneFour->setText(QString());
        zeroZero->setText(QString());
        fiveTwo->setText(QString());
        twoFour->setText(QString());
        col1->setText(QString());
        col2->setText(QString());
        col3->setText(QString());
        col4->setText(QString());
        col5->setText(QString());
        col6->setText(QString());
        col7->setText(QString());
        scoreLabel->setText(QApplication::translate("ConnectFour_CSCI440Project_v01Class", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ConnectFour_CSCI440Project_v01Class: public Ui_ConnectFour_CSCI440Project_v01Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONNECTFOUR_CSCI440PROJECT_V01_H
