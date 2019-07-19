#pragma once
#include<iostream>
#include<fstream>
#include<string>
#include "MorseNode.h"


class MorseNode
{
public:
	MorseNode();
	MorseNode(char ch1, char* ch2);
	~MorseNode();

	void establish_char_value(const char ch1);
	void establish_string_value(char* const ch2);
	void establish_left_ptr(MorseNode* const left_ptr);
	void establish_right_ptr(MorseNode* const right_ptr);

	char get_char_value() const;
	std::string get_Morse_string() const;
	MorseNode*& get_Left_Node();
	MorseNode*& get_right_Node();

private:




};

