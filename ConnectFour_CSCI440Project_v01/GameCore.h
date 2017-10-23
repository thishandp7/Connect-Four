#pragma once
class GameCore
{
private:
	static GameCore* singleton;
	GameCore();
	bool moveUp(int &playerDisk);
	bool moveLeft(int &playerDisk);
	bool moveRight(int &playerDisk);
	bool moveUpRight(int &playerDisk);
	bool moveUpLeft(int &playerDisk);

	//unused functions
	bool moveDownRight(int &playerDisk);
	bool moveDownLeft(int &playerDisk);
	bool moveDown(int &playerDisk);
	//unused functions

	static const int ROWS = 7;
	static const int COLS = 6;
	static const int FOUR = 4;

	int evalBoard[COLS][ROWS];
	int connnectedFour[FOUR];

	int cfIndex;
	int direction;
	int winner;
	bool isBoardNotFilled;
	bool restart;
	int startDisk;
	int disk;

	int rowCount;
	int columnCount;

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

public:
	void initGameMechs();
	int winLoseEval(int board[COLS][ROWS]);
	static GameCore* getInstance();
	void destroy();
};

