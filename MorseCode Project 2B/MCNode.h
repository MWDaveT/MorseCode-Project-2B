#pragma once
#ifndef MCNODE_H_
#define MCNODE_H_
#include<string>
#include <sstream>

/**Node for MorseCode Tree */

class MCNode
{
private:

	MCNode();
	virtual ~MCNode();

	char return_char() const;
	MCNode*& get_Left_Node();
	MCNode*& get_right_Node();

	char data_chr;
	MCNode* left_ptr;
	MCNode* right_ptr;


};


#endif
