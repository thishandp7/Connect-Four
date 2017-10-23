#include "GameCore.h"
#include <algorithm>

GameCore* GameCore::singleton = nullptr;

GameCore::GameCore()
{
	//initGameMechs();
}

GameCore* GameCore::getInstance()
{
	if (singleton == nullptr) {
		singleton = new GameCore();
		return singleton;
	}
	else {
		return singleton;
	}
}
void GameCore::destroy() 
{
	if (singleton != nullptr) {
		delete singleton;
		singleton = nullptr;
	}
}
void GameCore::initGameMechs() 
{
	cfIndex = 0;
	direction = DIRECTIONS::Left;
	winner = 0;
	isBoardNotFilled = false;
	restart = false;
	startDisk = 0;
	disk = 0;

	rowCount = 0;
	columnCount = 0;
}
int GameCore::winLoseEval(int board[COLS][ROWS]) {
	
	for (int col = 0; col < COLS; col++)
	{
		for (int row = 0; row < ROWS; row++)
		{
			evalBoard[col][row] = board[col][row];
		}
	}

	bool moveTest = false;

	for (int col = 0; col < 6; col++) {
		for (int row = 0; row < 7; row++) {

			columnCount = 5 - col;
			rowCount = row;

			startDisk = evalBoard[columnCount][rowCount];

			connnectedFour[0] = startDisk;

			if (startDisk != 0) {
				for (int fiveDegrees = 0; fiveDegrees < 5; fiveDegrees++) {
					switch (direction)
					{
					case DIRECTIONS::Left:
						for (int y = 0; y < 3; y++) {
							moveTest = moveLeft(disk);
							if (disk == startDisk && moveTest) {
								cfIndex++;
								connnectedFour[cfIndex] = disk;
							}
							else {
								columnCount = 5 - col;
								rowCount = row;
								cfIndex = 0;
								direction = DIRECTIONS::UpLeft;
								break;
							}
						}
						break;
					case DIRECTIONS::UpLeft:
						for (int y = 0; y < 3; y++) {
							moveTest = moveUpLeft(disk);
							if (disk == startDisk && moveTest) {
								cfIndex++;
								connnectedFour[cfIndex] = disk;
							}
							else {
								columnCount = 5 - col;
								rowCount = row;
								cfIndex = 0;
								direction = DIRECTIONS::Up;
								break;
							}
						}
						break;
					case DIRECTIONS::Up:
						for (int y = 0; y < 3; y++) {
							moveTest = moveUp(disk);
							if (disk == startDisk && moveTest) {
								cfIndex++;
								connnectedFour[cfIndex] = disk;
							}
							else {
								columnCount = 5 - col;
								rowCount = row;
								cfIndex = 0;
								direction = DIRECTIONS::UpRight;
								break;
							}
						}
						break;
					case DIRECTIONS::UpRight:
						for (int y = 0; y < 3; y++) {
							moveTest = moveUpRight(disk);
							if (disk == startDisk && moveTest) {
								cfIndex++;
								connnectedFour[cfIndex] = disk;
							}
							else {
								columnCount = 5 - col;
								rowCount = row;
								cfIndex = 0;
								direction = DIRECTIONS::Right;
								break;
							}
						}
						break;
					case DIRECTIONS::Right:
						for (int y = 0; y < 3; y++) {
							moveTest = moveRight(disk);
							if (disk == startDisk && moveTest) {
								cfIndex++;
								connnectedFour[cfIndex] = disk;
							}
							else {
								columnCount = 5 - col;
								rowCount = row;
								cfIndex = 0;
								direction = DIRECTIONS::Left;
								break;
							}
						}
						break;
					}

					//This method of checking the winner is prone to bugs
					if (connnectedFour[3] == startDisk) {
						for (int x = 0; x < 4; x++) {
							connnectedFour[x] = 0;
						}
						return startDisk;
					}
				}
			}
		}
	}

	return 0;
}
bool GameCore::moveUp(int &playerDisk) {
	if (columnCount > 0) {
		columnCount--;
		playerDisk = evalBoard[columnCount][rowCount];
		return true;
	}
	return false;
}
bool GameCore::moveLeft(int &playerDisk) {
	if (rowCount > 0) {
		rowCount--;
		playerDisk = evalBoard[columnCount][rowCount];
		return true;
	}
	return false;
}
bool GameCore::moveRight(int &playerDisk) {
	if (rowCount < 6) {
		rowCount++;
		playerDisk = evalBoard[columnCount][rowCount];
		return true;
	}
	return false;
}
bool GameCore::moveUpRight(int &playerDisk) {
	if (columnCount > 0 && rowCount < 6) {
		columnCount--;
		rowCount++;
		playerDisk = evalBoard[columnCount][rowCount];
		return true;
	}
	return false;
}
bool GameCore::moveUpLeft(int &playerDisk) {
	if (columnCount > 0 && rowCount > 0) {
		columnCount--;
		rowCount--;
		playerDisk = evalBoard[columnCount][rowCount];
		return true;
	}
	return false;
}

//unused functions
bool GameCore::moveDown(int &playerDisk)
{
	if (columnCount < 5) {
		columnCount++;
		playerDisk = evalBoard[columnCount][rowCount];
		return true;
	}
	return false;
}
bool GameCore::moveDownRight(int &playerDisk)
{
	if (columnCount < 5 && rowCount < 6) {
		columnCount++;
		rowCount++;
		playerDisk = evalBoard[columnCount][rowCount];
		return true;
	}
	return false;
}
bool GameCore::moveDownLeft(int &playerDisk)
{
	if (columnCount < 6 && rowCount > 0) {
		columnCount++;
		rowCount--;
		playerDisk = evalBoard[columnCount][rowCount];
		return true;
	}
	return false;
}
//unused functions

