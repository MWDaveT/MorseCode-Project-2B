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

	
	void establish_root(MCNode* newRoot);
	MCNode* get_Root() const;

	//Constructs empty MorseTree
	MorseTree() : ptr_root(NULL) {}


	/**Vritual Destructor */
	virtual ~MorseTree() {}

	/**Print function */
	void print();

	/**Encode a string to morse code */
	std::string morse_encode(morsemap, std::string);

	/**Deconde a string of morse code */
	std::string morse_decode(morsetree, std::string);

private:
	MCNode* ptr_root;;

	/** Used to build Morse Tree */
	void add_char_to_tree(MCNode*& Temp_Node, std::string, char ch);

	/**Retrieve char given a morse code string */
	char get_char_from_code(MCNode* Temp_Node, std::string str);


	/** destroy morse tree */
	void destroy_morsetree(MCNode* treeroot);

	

	/**Print MorseTree using inorder traversal */
	void print_Morse_tree(MCNode* tree_root);

	/**find code in given map for given char */
	std::string(std::map, char ch);

	
	std::fstream morse;

	/** Build Morse tree from given file */

	MorseTree buildMorseTree(*filename);

	/** Build Map from given file */
	std::map buildMap(filename);

};

#endif

