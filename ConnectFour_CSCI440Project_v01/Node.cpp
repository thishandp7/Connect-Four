#include "Node.h"

Node::Node() 
{
	colIndex = 0;
	SEFvalue = 0;
	Node* parent = nullptr;
}
Node::Node(const Node& node)
{
	colIndex = node.colIndex;
	memcpy(colCounts, node.colCounts, (sizeof(int) * 7));
	SEFvalue = node.SEFvalue;
	memcpy(board, node.board, (sizeof(int) * (6 * 7)));
	parent = node.parent;
	children = node.children;
}
Node& Node::operator=(const Node& node)
{
	colIndex = node.colIndex;
	memcpy(colCounts, node.colCounts, (sizeof(int) * 7));
	SEFvalue = node.SEFvalue;
	memcpy(board, node.board, (sizeof(int) * (6 * 7)));
	parent = node.parent;
	children = node.children;
	return *this;
}
Node::Node(Node&& node) noexcept
{
	colIndex = node.colIndex;
	memcpy(colCounts, node.colCounts, (sizeof(int) * 7));
	SEFvalue = node.SEFvalue;
	memcpy(board, node.board, (sizeof(int) * (6 * 7)));
	parent = node.parent;
	node.parent = nullptr;
	children = node.children;
	node.children.clear();
}
Node& Node::operator=(Node&& node) noexcept
{
	colIndex = node.colIndex;
	memcpy(colCounts, node.colCounts, (sizeof(int) * 7));
	SEFvalue = node.SEFvalue;
	memcpy(board, node.board, (sizeof(int) * (6 * 7)));
	parent = node.parent;
	node.parent = nullptr;
	children = node.children;
	node.children.clear();
	return *this;
}
Node::~Node() 
{
}