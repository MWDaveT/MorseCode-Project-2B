#pragma once
#ifndef MCNODE_H_
#define MCNODE_H_
#include<iostream>
#include<fstream>
#include <sstream>
#include <string>
#include "MCNode.h"

/**Node for MorseCode Tree */
class MCNode
{
public:
	MCNode();
	MCNode(char ch, char* s);
	~MCNode();

	void install_char(const char ch);
	void install_string(char* const str);
	void set_left_ptr(MCNode* const left_ptr);
	void set_right_ptr(MCNode* const right_ptr);

	char return_char() const;
	std::string get_string() const;
	MCNode*& get_left();
	MCNode*& get_right();

private:
	char Chr;
	char Str[50];
	MCNode* left_ptr;
	MCNode* right_ptr;


};
#endif
