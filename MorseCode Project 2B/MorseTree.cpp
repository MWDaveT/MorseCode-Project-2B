#include "MorseTree.h"
#include<fstream>
#include<iostream>


MorseTree::MorseTree()
{
	std::string str, str1;
	char Chr = '0';
	MCNode* node = &MCNode();
	std::ifstream morse;
	morse.open("morse.txt");
	while (morse >> str)
	{
		morse >> str1;
		add_char_to_tree(node, str1, str[0]);
	}

}
MorseTree::~MorseTree()
{
	if (morse.is_open())
	{
		morse.close();
	}
	destroy_morsetree(ptr_root);
}


void MorseTree::add_char_to_tree(MCNode*& Temp_Node, std::string str, char ch)
{
	if (Temp_Node == NULL)
	{
		Temp_Node = new MCNode();
	}
	if (str.size() == 0) {
		Temp_Node->data_chr = ch;
	}
	else
	{
		if (str[0] == '.')
		{
			add_char_to_tree(Temp_Node->left_ptr, str.substr(1), ch);
		}
		else
		{
			add_char_to_tree(Temp_Node->right_ptr, str.substr(1), ch);
		}
	}
}

void MorseTree::print()
{
	print_Morse_tree(Root);
}

MCNode* MorseTree::new_MCNode(const char chr)
{
	MCNode* Node = new MCNode(char chr);
	return Node;
}


char MorseTree::get_char_from_code(MCNode* Temp_Node, std::string str)
{
	if (Temp_Node->data_chr != '0' && str.size() == 0)
	{
		return Temp_Node->data_chr;
	}
	else
	{
		if (str[0] == '.')
		{
			return get_char_from_code(Temp_Node->left_ptr, str.substr(1));
		}
		else
		{
			return get_char_from_code(Temp_Node->right_ptr, str.substr(1));
		}
	}
}

void MorseTree::destroy_morsetree(MCNode* Root)
{
	if (Root != NULL)
	{
		destroy_morsetree(Root->get_Left_Node());
		destroy_morsetree(Root->get_Right_Node());
		delete(Root);
	}
}

void MorseTree::print_Morse_tree(MCNode* Root) 
{
	if (Root != NULL)
	{
		print_Morse_tree(Root->get_Left_Node());
		std::cout << "The Character is: " << Root->return_char() << std::endl;
		print_Morse_tree(Root->get_Right_Node());
	}
}