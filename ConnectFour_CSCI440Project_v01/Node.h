#pragma once
#include<vector>

class Node
{
public:
	int colIndex;
	int SEFvalue;
	Node* parent;
	int colCounts[6];
	int board[6][7];
	std::vector<Node*> children;
	Node();
	Node(const Node& node);
	Node& operator=(const Node& node);
	explicit Node(Node&& node) noexcept;
	Node& operator=(Node&& node) noexcept;
	~Node();
};