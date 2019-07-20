#pragma once
#ifndef MCNODE_H_
#define MCNODE_H_
#include<string>
#include <sstream>

/**Node for MorseCode Tree */

struct MCNode
{
//Data Fields
	char data_chr;
	MCNode* left_ptr;
	MCNode* right_ptr;

//Constructors
	MCNode() {
		left_ptr = NULL;
		right_ptr = NULL;
		char c = '0';
	}

//Destructor
	virtual ~MCNode() {}



};


#endif
