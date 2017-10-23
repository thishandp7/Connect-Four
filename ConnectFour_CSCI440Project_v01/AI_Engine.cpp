#include "AI_Engine.h"
#include <chrono>

AI_Engine* AI_Engine::singleton = nullptr;

#define BOARD_SIZE sizeof(int) * ((COLS) *(ROWS))
#define COLCOUNT_SIZE sizeof(int) * (COLS + 1)

AI_Engine::AI_Engine()
{
	maxDepth = 3;
}
AI_Engine* AI_Engine::getInstance() 
{
	if (singleton == nullptr) {
		singleton = new AI_Engine();
		return singleton;
	}
	else {
		return singleton;
	}
}
void AI_Engine::destroy() 
{
	if (singleton != nullptr) {
		delete singleton;
		singleton = nullptr;
	}
}

int AI_Engine::nextMove(int board[COLS][ROWS], int colCounts[COLS]) {

	//Copy the board to AI_Board
	for (int col = 0; col < COLS; col++)
	{
		for (int row = 0; row < ROWS; row++)
		{
			AI_Board[col][row] = board[col][row];
		}
	}
	//Copy the colCounts to AI_ColCounts
	for (int  i = 0; i <= 6; i++)
	{
		AI_ColCounts[i] = colCounts[i];
	}

	Node* root = new Node();
	Node* RNode = new Node();
	int level = 0;

	memcpy(root->board, AI_Board, BOARD_SIZE);
	memcpy(root->colCounts, AI_ColCounts, COLCOUNT_SIZE);

	RNode = miniMax(root, level, maxDepth);

	return RNode->colIndex + 1;
}

void AI_Engine::GeneratePossibleMoves(int board[COLS][ROWS], int colCounts[COLS], std::vector<Node> &possibleMoves)
{
	int newPos = 0;

	Node* posBoard;

	for (int i = 0; i < 7; i++)
	{
		newPos = colCounts[i];
		if (newPos < 6 && newPos > -1) {
			board[newPos][i] = 2;
			posBoard = new Node();
			posBoard->colIndex = i;
			for (int col = 0; col < 7; col++)
			{
				posBoard->colCounts[col] = colCounts[col];
				if (col == i) {
					posBoard->colCounts[i]--;
				}
			}
			for (int col = 0; col < COLS; col++)
			{
				for (int row = 0; row < ROWS; row++)
				{
					posBoard->board[col][row] = board[col][row];
				}
			}
			possibleMoves.push_back(*posBoard);
			board[newPos][i] = 0;
		}
		
	}

}

Node* AI_Engine::staticEvaluationFunc(const Node* node)
{
	int sum = 0;
	Node* evalNode = new Node(*node);
	for (size_t cols = 0; cols < COLS; cols++)
	{
		for (size_t rows = 0; rows < ROWS; rows++)
		{
			if (evalNode->board[cols][rows] == 2) 
			{
				sum += EvalScoreBoard[cols][rows];
			}
			else if (evalNode->board[cols][rows] == 1)
			{
				sum -= EvalScoreBoard[cols][rows];
			}
		}
	}
	evalNode->SEFvalue = sum;
	return evalNode;
}

Node* AI_Engine::miniMax(Node* node, int level, int depth)
{
	int value;
	Node* valueNode = new Node();
	int RVal;
	Node* RValNode = new Node();
	std::vector<Node> children;
	Node* currChild;

	if (level == depth) 
	{
		return staticEvaluationFunc(node);
	}
	else if (level % 2 == 0) 
	{
		valueNode->SEFvalue = INT_MIN;
		GeneratePossibleMoves(node->board, node->colCounts, children);
		for (size_t i = 0; i < children.size(); i++)
		{
			currChild = new Node(children[i]);
			RValNode = miniMax(currChild, level + 1, depth);
			if (RValNode->SEFvalue > valueNode->SEFvalue) {
				valueNode = RValNode;
			}
		}
	}
	else 
	{
		valueNode->SEFvalue = INT_MAX;
		GeneratePossibleMoves(node->board, node->colCounts, children);
		for (size_t i = 0; i < children.size(); i++)
		{
			currChild = new Node(children[i]);
			RValNode = miniMax(currChild, level + 1, depth);
			if (RValNode->SEFvalue < valueNode->SEFvalue) {
				valueNode = RValNode;
			}
		}
	}
	return valueNode;
}