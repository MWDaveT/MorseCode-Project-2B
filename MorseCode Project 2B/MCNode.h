#pragma once
#ifndef MCNODE_H_
#define MCNODE_H_
#include <sstream>

/**Node for MorseCode Tree */
template<typename Item_Type>
struct MCNode
{
	//Data fields
	Item_Type ch;
	MCNode<Item_Type>* left_ptr;
	MCNode<Item_Type>* right_ptr;

	//Coonstructor
	MCNode(const Item_type& chr,
		MCNode<Item_Type>* left_value = NULL,
		MCNode<Item_Type>* right_value = NULL) :
		chr(ch), left_ptr(left_value), right_ptr(right_value) {}

	//Destructor
	virtual ~MCNode() {}

};


#endif
