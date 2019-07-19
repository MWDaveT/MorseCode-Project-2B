#include "MCNode.h"
#include<cstring>

MCNode::MCNode()
{
	MCNode(Chr, Str);
}

MCNode::MCNode(char ch, char* str) {
	std::strcpy(Str, str);
	Chr = ch;
	left_ptr = NULL;
	right_ptr = NULL;
}

MCNode::~MCNode() {}

void MCNode::install_string(char* const str)
{
	std::strcpy(Str, str);
}

void MCNode::install_char(const char chr)
{
	Chr = chr;
}

void MCNode::set_left_ptr(MCNode* const leftNode)
{
	left_ptr = leftNode;
}

void MCNode::set_right_ptr(MCNode* const rightNode)
{
	right_ptr = rightNode;
}

char MCNode::return_char() const
{
	return this->Chr;
}

std::string MCNode::get_string() const
{
	return this->Str;
}

MCNode*& MCNode::get_left()
{
	return this->left_ptr;
}

MCNode*& MCNode::get_right()
{
	return this->right_ptr;
}
