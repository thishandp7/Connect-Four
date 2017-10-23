#include "ConnectFour_CSCI440Project_v01.h"
#include <iostream>
#include <string>

ConnectFour_CSCI440Project_v01::ConnectFour_CSCI440Project_v01(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	initGame();
}
void ConnectFour_CSCI440Project_v01::on_restartBtn_clicked() 
{
	initGame();
	unfreezeGame();
	ui.scoreLabel->setVisible(false);
}
void ConnectFour_CSCI440Project_v01::initGame()
{
	for (int row = 0; row < 7; row++) {
		for (int col = 0; col < 6; col++) {
			board[col][row] = 0;
		}
	}

	GameCore::getInstance()->initGameMechs();

	isGameOver = false;

	PlayerTwoClicks = 0;
	PlayerOneClicks = 0;
	ply = 0;

	isBoardNotFilled = true;

	Player = 0;

	for (int i = 0; i <= COLS; i++)
	{
		colCounts[i] = 5;
	}

	ui.scoreLabel->setVisible(false);

	QString white = "background-color: rgb(255, 255, 255)";

	ui.zeroZero->setStyleSheet(white);
	ui.zeroOne->setStyleSheet(white);
	ui.zeroTwo->setStyleSheet(white);
	ui.zeroThree->setStyleSheet(white);
	ui.zeroFour->setStyleSheet(white);
	ui.zeroFive->setStyleSheet(white);

	ui.oneZero->setStyleSheet(white);
	ui.oneOne->setStyleSheet(white);
	ui.oneTwo->setStyleSheet(white);
	ui.oneThree->setStyleSheet(white);
	ui.oneFour->setStyleSheet(white);
	ui.oneFive->setStyleSheet(white);

	ui.twoZero->setStyleSheet(white);
	ui.twoOne->setStyleSheet(white);
	ui.twoTwo->setStyleSheet(white);
	ui.twoThree->setStyleSheet(white);
	ui.twoFour->setStyleSheet(white);
	ui.twoFive->setStyleSheet(white);

	ui.threeZero->setStyleSheet(white);
	ui.threeOne->setStyleSheet(white);
	ui.threeTwo->setStyleSheet(white);
	ui.threeThree->setStyleSheet(white);
	ui.threeFour->setStyleSheet(white);
	ui.threeFive->setStyleSheet(white);

	ui.fourZero->setStyleSheet(white);
	ui.fourOne->setStyleSheet(white);
	ui.fourTwo->setStyleSheet(white);
	ui.fourThree->setStyleSheet(white);
	ui.fourFour->setStyleSheet(white);
	ui.fourFive->setStyleSheet(white);

	ui.fiveZero->setStyleSheet(white);
	ui.fiveOne->setStyleSheet(white);
	ui.fiveTwo->setStyleSheet(white);
	ui.fiveThree->setStyleSheet(white);
	ui.fiveFour->setStyleSheet(white);
	ui.fiveFive->setStyleSheet(white);

	ui.sixZero->setStyleSheet(white);
	ui.sixOne->setStyleSheet(white);
	ui.sixTwo->setStyleSheet(white);
	ui.sixThree->setStyleSheet(white);
	ui.sixFour->setStyleSheet(white);
	ui.sixFive->setStyleSheet(white);
}
void ConnectFour_CSCI440Project_v01::on_arrowBtn_clicked()
{
	QObject* button = QObject::sender();

	dropCoin(button, 1);

	AI_ply = AI_Engine::getInstance()->nextMove(board, colCounts);

	switch (AI_ply)
	{
	case 1:
		button = ui.col1;
		break;
	case 2:
		button = ui.col2;
		break;
	case 3:
		button = ui.col3;
		break;
	case 4:
		button = ui.col4;
		break;
	case 5:
		button = ui.col5;
		break;
	case 6:
		button = ui.col6;
		break;
	case 7:
		button = ui.col7;
		break;
	}

	if ((AI_ply >= 1) && (AI_ply <= 7)) {
		dropCoin(button, 2);
	}
	
}
void ConnectFour_CSCI440Project_v01::freezeGame() {
	ui.col1->setEnabled(false);
	ui.col2->setEnabled(false);
	ui.col3->setEnabled(false);
	ui.col4->setEnabled(false);
	ui.col5->setEnabled(false);
	ui.col6->setEnabled(false);
	ui.col7->setEnabled(false);
}
void ConnectFour_CSCI440Project_v01::unfreezeGame() {
	ui.col1->setEnabled(true);
	ui.col2->setEnabled(true);
	ui.col3->setEnabled(true);
	ui.col4->setEnabled(true);
	ui.col5->setEnabled(true);
	ui.col6->setEnabled(true);
	ui.col7->setEnabled(true);
}
void ConnectFour_CSCI440Project_v01::displayResults(int player) {
	QString red = "color: rgb(255, 0, 0)";
	QString yellow = "color: rgb(212, 195, 0)";
	if (player == 1) {
		ui.scoreLabel->setVisible(true);
		ui.scoreLabel->setStyleSheet(red);
		ui.scoreLabel->setText(QString("Player 1 Won!"));
		isGameOver = true;
		freezeGame();
	}
	else if (player == 2) {
		ui.scoreLabel->setVisible(true);
		ui.scoreLabel->setStyleSheet(yellow);
		ui.scoreLabel->setText(QString("Player 2 Won!"));
		isGameOver = true;
		freezeGame();
	}
	else if (player == 0 && !isBoardNotFilled) {
		ui.scoreLabel->setVisible(true);
		ui.scoreLabel->setStyleSheet(yellow);;
		ui.scoreLabel->setText(QString("Draw Match!!!!"));
		isGameOver = true;
		freezeGame();
	}
	else {
		ui.scoreLabel->setVisible(false);
	}
}
void ConnectFour_CSCI440Project_v01::dropCoin(QObject* button, int Player) {
	
	QString red = "background-color: rgb(255, 0, 0)";
	QString yellow = "background-color: rgb(212, 195, 0)";
	
	//Column switching
	if (button == ui.col1) {

		if (colCounts[0] >= 0) {
			if (board[colCounts[0]][0] == 0) {
				board[colCounts[0]][0] = Player;
			}

			if (colCounts[0] == 5) {
				if (Player == 1) {
					ui.zeroZero->setStyleSheet(red);
				}
				else if (Player == 2) {
					ui.zeroZero->setStyleSheet(yellow);
				}
			}
			else if (colCounts[0] == 4) {
				if (Player == 1) {
					ui.zeroOne->setStyleSheet(red);
				}
				else if (Player == 2) {
					ui.zeroOne->setStyleSheet(yellow);
				}
			}
			else if (colCounts[0] == 3) {
				if (Player == 1) {
					ui.zeroTwo->setStyleSheet(red);
				}
				else if (Player == 2) {
					ui.zeroTwo->setStyleSheet(yellow);
				}
			}
			else if (colCounts[0] == 2) {
				if (Player == 1) {
					ui.zeroThree->setStyleSheet(red);
				}
				else if (Player == 2) {
					ui.zeroThree->setStyleSheet(yellow);
				}
			}
			else if (colCounts[0] == 1) {
				if (Player == 1) {
					ui.zeroFour->setStyleSheet(red);
				}
				else if (Player == 2) {
					ui.zeroFour->setStyleSheet(yellow);
				}
			}
			else if (colCounts[0] == 0) {
				if (Player == 1) {
					ui.zeroFive->setStyleSheet(red);
				}
				else if (Player == 2) {
					ui.zeroFive->setStyleSheet(yellow);
				}
			}

			colCounts[0]--;
			if (colCounts[0] < 0) {
				ui.col1->setEnabled(false);
			}
		}
	}
	else if (button == ui.col2) {

		if (colCounts[1] >= 0) {
			if (board[colCounts[1]][1] == 0) {
				board[colCounts[1]][1] = Player;
			}

			if (colCounts[1] == 5) {
				if (Player == 1) {
					ui.oneZero->setStyleSheet(red);
				}
				else if (Player == 2) {
					ui.oneZero->setStyleSheet(yellow);
				}
			}
			else if (colCounts[1] == 4) {
				if (Player == 1) {
					ui.oneOne->setStyleSheet(red);
				}
				else if (Player == 2) {
					ui.oneOne->setStyleSheet(yellow);
				}
			}
			else if (colCounts[1] == 3) {
				if (Player == 1) {
					ui.oneTwo->setStyleSheet(red);
				}
				else if (Player == 2) {
					ui.oneTwo->setStyleSheet(yellow);
				}
			}
			else if (colCounts[1] == 2) {
				if (Player == 1) {
					ui.oneThree->setStyleSheet(red);
				}
				else if (Player == 2) {
					ui.oneThree->setStyleSheet(yellow);
				}
			}
			else if (colCounts[1] == 1) {
				if (Player == 1) {
					ui.oneFour->setStyleSheet(red);
				}
				else if (Player == 2) {
					ui.oneFour->setStyleSheet(yellow);
				}
			}
			else if (colCounts[1] == 0) {
				if (Player == 1) {
					ui.oneFive->setStyleSheet(red);
				}
				else if (Player == 2) {
					ui.oneFive->setStyleSheet(yellow);
				}
			}

			colCounts[1]--;
			if (colCounts[1] < 0) {
				ui.col2->setEnabled(false);
			}
		}
	}
	else if (button == ui.col3) {

		if (colCounts[2] >= 0) {
			if (board[colCounts[2]][2] == 0) {
				board[colCounts[2]][2] = Player;
			}

			if (colCounts[2] == 5) {
				if (Player == 1) {
					ui.twoZero->setStyleSheet(red);
				}
				else if (Player == 2) {
					ui.twoZero->setStyleSheet(yellow);
				}
			}
			else if (colCounts[2] == 4) {
				if (Player == 1) {
					ui.twoOne->setStyleSheet(red);
				}
				else if (Player == 2) {
					ui.twoOne->setStyleSheet(yellow);
				}
			}
			else if (colCounts[2] == 3) {
				if (Player == 1) {
					ui.twoTwo->setStyleSheet(red);
				}
				else if (Player == 2) {
					ui.twoTwo->setStyleSheet(yellow);
				}
			}
			else if (colCounts[2] == 2) {
				if (Player == 1) {
					ui.twoThree->setStyleSheet(red);
				}
				else if (Player == 2) {
					ui.twoThree->setStyleSheet(yellow);
				}
			}
			else if (colCounts[2] == 1) {
				if (Player == 1) {
					ui.twoFour->setStyleSheet(red);
				}
				else if (Player == 2) {
					ui.twoFour->setStyleSheet(yellow);
				}
			}
			else if (colCounts[2] == 0) {
				if (Player == 1) {
					ui.twoFive->setStyleSheet(red);
				}
				else if (Player == 2) {
					ui.twoFive->setStyleSheet(yellow);
				}
			}

			colCounts[2]--;
			if (colCounts[2] < 0) {
				ui.col3->setEnabled(false);
			}
		}
	}
	else if (button == ui.col4) {

		if (colCounts[3] >= 0) {
			if (board[colCounts[3]][3] == 0) {
				board[colCounts[3]][3] = Player;
			}

			if (colCounts[3] == 5) {
				if (Player == 1) {
					ui.threeZero->setStyleSheet(red);
				}
				else if (Player == 2) {
					ui.threeZero->setStyleSheet(yellow);
				}
			}
			else if (colCounts[3] == 4) {
				if (Player == 1) {
					ui.threeOne->setStyleSheet(red);
				}
				else if (Player == 2) {
					ui.threeOne->setStyleSheet(yellow);
				}
			}
			else if (colCounts[3] == 3) {
				if (Player == 1) {
					ui.threeTwo->setStyleSheet(red);
				}
				else if (Player == 2) {
					ui.threeTwo->setStyleSheet(yellow);
				}
			}
			else if (colCounts[3] == 2) {
				if (Player == 1) {
					ui.threeThree->setStyleSheet(red);
				}
				else if (Player == 2) {
					ui.threeThree->setStyleSheet(yellow);
				}
			}
			else if (colCounts[3] == 1) {
				if (Player == 1) {
					ui.threeFour->setStyleSheet(red);
				}
				else if (Player == 2) {
					ui.threeFour->setStyleSheet(yellow);
				}
			}
			else if (colCounts[3] == 0) {
				if (Player == 1) {
					ui.threeFive->setStyleSheet(red);
				}
				else if (Player == 2) {
					ui.threeFive->setStyleSheet(yellow);
				}
			}

			colCounts[3]--;
			if (colCounts[3] < 0) {
				ui.col4->setEnabled(false);
			}
		}
	}
	else if (button == ui.col5) {

		if (colCounts[4] >= 0) {
			if (board[colCounts[4]][4] == 0) {
				board[colCounts[4]][4] = Player;
			}

			if (colCounts[4] == 5) {
				if (Player == 1) {
					ui.fourZero->setStyleSheet(red);
				}
				else if (Player == 2) {
					ui.fourZero->setStyleSheet(yellow);
				}
			}
			else if (colCounts[4] == 4) {
				if (Player == 1) {
					ui.fourOne->setStyleSheet(red);
				}
				else if (Player == 2) {
					ui.fourOne->setStyleSheet(yellow);
				}
			}
			else if (colCounts[4] == 3) {
				if (Player == 1) {
					ui.fourTwo->setStyleSheet(red);
				}
				else if (Player == 2) {
					ui.fourTwo->setStyleSheet(yellow);
				}
			}
			else if (colCounts[4] == 2) {
				if (Player == 1) {
					ui.fourThree->setStyleSheet(red);
				}
				else if (Player == 2) {
					ui.fourThree->setStyleSheet(yellow);
				}
			}
			else if (colCounts[4] == 1) {
				if (Player == 1) {
					ui.fourFour->setStyleSheet(red);
				}
				else if (Player == 2) {
					ui.fourFour->setStyleSheet(yellow);
				}
			}
			else if (colCounts[4] == 0) {
				if (Player == 1) {
					ui.fourFive->setStyleSheet(red);
				}
				else if (Player == 2) {
					ui.fourFive->setStyleSheet(yellow);
				}
			}

			colCounts[4]--;
			if (colCounts[4] < 0) {
				ui.col5->setEnabled(false);
			}
		}
	}
	else if (button == ui.col6) {

		if (colCounts[5] >= 0) {
			if (board[colCounts[5]][5] == 0) {
				board[colCounts[5]][5] = Player;
			}

			if (colCounts[5] == 5) {
				if (Player == 1) {
					ui.fiveZero->setStyleSheet(red);
				}
				else if (Player == 2) {
					ui.fiveZero->setStyleSheet(yellow);
				}
			}
			else if (colCounts[5] == 4) {
				if (Player == 1) {
					ui.fiveOne->setStyleSheet(red);
				}
				else if (Player == 2) {
					ui.fiveOne->setStyleSheet(yellow);
				}
			}
			else if (colCounts[5] == 3) {
				if (Player == 1) {
					ui.fiveTwo->setStyleSheet(red);
				}
				else if (Player == 2) {
					ui.fiveTwo->setStyleSheet(yellow);
				}
			}
			else if (colCounts[5] == 2) {
				if (Player == 1) {
					ui.fiveThree->setStyleSheet(red);
				}
				else if (Player == 2) {
					ui.fiveThree->setStyleSheet(yellow);
				}
			}
			else if (colCounts[5] == 1) {
				if (Player == 1) {
					ui.fiveFour->setStyleSheet(red);
				}
				else if (Player == 2) {
					ui.fiveFour->setStyleSheet(yellow);
				}
			}
			else if (colCounts[5] == 0) {
				if (Player == 1) {
					ui.fiveFive->setStyleSheet(red);
				}
				else if (Player == 2) {
					ui.fiveFive->setStyleSheet(yellow);
				}
			}

			colCounts[5]--;
			if (colCounts[5] < 0) {
				ui.col6->setEnabled(false);
			}
		}
	}
	else if (button == ui.col7) {
		//std::cout << "col 7 pressed " << std::endl;

		if (colCounts[6] >= 0) {
			if (board[colCounts[6]][6] == 0) {
				board[colCounts[6]][6] = Player;
			}

			if (colCounts[6] == 5) {
				if (Player == 1) {
					ui.sixZero->setStyleSheet(red);
				}
				else if (Player == 2) {
					ui.sixZero->setStyleSheet(yellow);
				}
			}
			else if (colCounts[6] == 4) {
				if (Player == 1) {
					ui.sixOne->setStyleSheet(red);
				}
				else if (Player == 2) {
					ui.sixOne->setStyleSheet(yellow);
				}
			}
			else if (colCounts[6] == 3) {
				if (Player == 1) {
					ui.sixTwo->setStyleSheet(red);
				}
				else if (Player == 2) {
					ui.sixTwo->setStyleSheet(yellow);
				}
			}
			else if (colCounts[6] == 2) {
				if (Player == 1) {
					ui.sixThree->setStyleSheet(red);
				}
				else if (Player == 2) {
					ui.sixThree->setStyleSheet(yellow);
				}
			}
			else if (colCounts[6] == 1) {
				if (Player == 1) {
					ui.sixFour->setStyleSheet(red);
				}
				else if (Player == 2) {
					ui.sixFour->setStyleSheet(yellow);
				}
			}
			else if (colCounts[6] == 0) {
				if (Player == 1) {
					ui.sixFive->setStyleSheet(red);
				}
				else if (Player == 2) {
					ui.sixFive->setStyleSheet(yellow);
				}
			}

			colCounts[6]--;
			if (colCounts[6] < 0) {
				ui.col7->setEnabled(false);
			}
		}
	}
	//Column switching

	if (Player == 1) {
		ui.redBtn->setVisible(false);
		ui.yellowBtn->setVisible(true);
		PlayerOneClicks++;
	}
	else if (Player == 2) {
		ui.yellowBtn->setVisible(false);
		ui.redBtn->setVisible(true);
		PlayerTwoClicks++;
	}

	endGameMech();
}
void ConnectFour_CSCI440Project_v01::endGameMech() {
	if (PlayerOneClicks > 3 || PlayerTwoClicks > 3) {

		ply = GameCore::getInstance()->winLoseEval(board);
		displayResults(ply);
		for (int j = 0; j < 6; j++) {
			if (board[0][j] == 0) {
				isBoardNotFilled = true;
				break;
			}
			else {
				isBoardNotFilled = false;
			}
		}
	}
}