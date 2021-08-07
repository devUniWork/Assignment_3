#ifndef AVLQUESTION_H
#define AVLQUESTION_H
#include <iostream>
#include "ExtractValuesFile.h"
#include "AVL.h"
#include "BFS.h"
class AvlQuestion
{
private: 
	 ExtractValuesFile extractValues;
	 AVL avl;
	 BFS bfs;
public:
	void start_insert(string inputFileName, string outputFileName);
};
#endif

