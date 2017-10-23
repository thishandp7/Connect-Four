#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_ConnectFour_CSCI440Project_v01.h"
#include "GameCore.h";
#include "AI_Engine.h";

class ConnectFour_CSCI440Project_v01 : public QMainWindow
{
	Q_OBJECT

public:
	ConnectFour_CSCI440Project_v01(QWidget *parent = Q_NULLPTR);

private slots:
		void on_restartBtn_clicked();
		void on_arrowBtn_clicked();

private:
	Ui::ConnectFour_CSCI440Project_v01Class ui;
	
	static const int ROWS = 7;
	static const int COLS = 6;

	int board[COLS][ROWS];
	int Player;
	bool isBoardNotFilled;

	int PlayerOneClicks;
	int PlayerTwoClicks;

	int ply;

	int AI_ply;

	enum DIRECTIONS {
		Up,
		UpRight,
		Right,
		DownRight,
		Down,
		DownLeft,
		Left,
		UpLeft
	};

	int colCounts[COLS];

	bool isGameOver;

	void initGame();

	void freezeGame();
	void unfreezeGame();
	void displayResults(int player);
	void dropCoin(QObject* button, int Player);
	void endGameMech();
};
