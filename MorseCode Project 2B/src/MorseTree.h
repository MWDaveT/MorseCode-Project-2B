#pragma once
#ifndef MORSETREE_H_
#define MORSETREE_H_

/** Class for MorseTree */

#include<iostream>
#include<fstream>
#include<string>
#include "MorseTree.h"
#include "MCNode.h"

template<typename Item_Type>
class MorseTree
{
public:
	void setRoot(MCNode<Item_Type>* newRoot);
	MCNode<Item_Type>* getRoot();

	
private:




};

#endif 

