#pragma once
#ifndef MORSETREE_H_
#define MORSETREE_H_

#include "MCNode.h"
#include<sstream>
#include<stdexcept>
#include<string>
#include<fstream>
#include<map>

class MorseTree
{
public:

	
	//Constructs MorseTree given
	MorseTree();


	/**Vritual Destructor */
	virtual ~MorseTree() {}

	/** Public print tree function */
	void print();

	/**Initialize root of morsetree */
	void establish_root(MCNode* const newRoot);

private:
	MCNode *Root;
	std::fstream Code;

	/** Used to build Morse Tree */
	void add_char_to_tree(MCNode*& Temp_Node, std::string str, char ch);

	MCNode* new_MCNode(const char chr);

	/** destroy morse tree */
	void destroy_morsetree(MCNode* treeroot);

	/**Print MorseTree using inorder traversal */
	void print_Morse_tree(MCNode* tree_root);
	
	/** Build Map from given file */
	std::map buildMap(filename);

};

#endif

