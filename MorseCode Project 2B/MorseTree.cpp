#include "MorseTree.h"

MorseTree::MorseTree()
{
	char Chr = '0';
	ptr_root = nullptr;

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

