#pragma once

#include <time.h>
#include <stdlib.h>
#include <vector>
#include "Node.h"
#include <iostream>
#include "GameCore.h"

class AI_Engine
{
public:
	//Move to somewhere else
	static const int ROWS = 7;
	static const int COLS = 6;
	static const int FOUR = 4;
	//Move to somewhere else

	int maxDepth;

	static AI_Engine* getInstance();
	void destroy();
	int AI_Engine::nextMove(int board[COLS][ROWS], int colCounts[COLS]);

	

private:
	static AI_Engine* singleton;
	AI_Engine();
	Node* miniMax(Node* node, int level, int depth);
	Node* staticEvaluationFunc(const Node* node);
	void GeneratePossibleMoves(int board[COLS][ROWS], int colCounts[COLS], std::vector<Node> &possibleMoves);

	int AI_Board[COLS][ROWS];
	int AI_ColCounts[COLS];
	int EvalScoreBoard[COLS][ROWS] = { { 3, 4, 5, 7, 5, 4, 3 },
									   { 4, 6, 8, 10, 8, 6, 4 },
									   { 5, 8, 11, 13, 11, 8, 5 },
									   { 5, 8, 11, 13, 11, 8, 5 },
									   { 4, 6, 8, 10, 8, 6, 4 },
									   { 3, 4, 5, 7, 5, 4, 3 } };
};

