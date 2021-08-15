#ifndef AVL_H
#define AVL_H
#include <iostream>
#include <algorithm>
#include <string> 
#include <iostream>

#include "utility.h"

using namespace std;

struct node {
	struct node* left;
	int data;
	int height;
	struct node* right;
};

class AVL
{
private:
	Utility utility;
	int getBalanceFactor(struct node* N);
	struct node* leftRotation(struct node* n);
	struct node* rightRotation(struct node* n);
	struct node* rightLeftRotation(struct node* n);
	struct node* leftRightRotation(struct node* n);

public:

	struct node* root;
	// initialize root node to NULL;
	AVL() {
		this->root = NULL;
	}
	int getHeight(node* node);
	struct node* insert(struct node* r, int data);
};

#endif