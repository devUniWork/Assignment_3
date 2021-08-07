#ifndef BFS_H
#define BFS_H
#include <cstddef>
#include <iostream>
#include "AVL.h";
#include "utility.h";

using namespace std;

class BFS
{
private: 
	AVL avl;
	Utility utility;
public:
	void printLevelOrder(node* root, string outputFile);
	void printCurrentLevel(node* root, int level, string outputFile);
};
#endif

