#include "MCNode.h"
#include<cstring>

MCNode::MCNode(char ch) {
	data_chr = ch;
	left_ptr = NULL;
	right_ptr = NULL;
}

MCNode::~MCNode() {}


void MCNode::install_char(const char chr)
{
	Chr = chr;
}

char MCNode::return_char() const
{
	return this->Chr;
}

MCNode*& MCNode::get_Left_Node()
{
	return this->left_ptr;
}

MCNode*& MCNode::get_right_Node()
{
	return this->right_ptr;
}
