#include "AVL.h"

int AVL::getHeight(node* node) {
		if (node == NULL)
			return 0;
		else {
			int leftDepth = getHeight(node->left);
			int rightDepth = getHeight(node->right);

			if (leftDepth > rightDepth) {
				return(leftDepth + 1);
			}
			else {
				return(rightDepth + 1);
			}
		}
}

int AVL::getBalanceFactor(struct node* N)
{
	if (N == NULL)
		return 0;
	return getHeight(N->left) - getHeight(N->right);
}

struct node* AVL::leftRotation(struct node* n) {
	struct node* p;
	struct node* tp;
	p = n;
	tp = p->left;

	p->left = tp->right;
	tp->right = p;

	return tp;
}

struct node* AVL::rightRotation(struct node* n) {
	struct node* p;
	struct node* tp;
	p = n;
	tp = p->right;

	p->right = tp->left;
	tp->left = p;

	return tp;
}

struct node* AVL::rightLeftRotation(struct node* n) {
	struct node* p;
	struct node* tp;
	struct node* tp2;
	p = n;
	tp = p->right;
	tp2 = p->right->left;

	p->right = tp2->left;
	tp->left = tp2->right;
	tp2->left = p;
	tp2->right = tp;

	return tp2;
}

struct node* AVL::leftRightRotation(struct node* n) {
	struct node* p;
	struct node* tp;
	struct node* tp2;
	p = n;
	tp = p->left;
	tp2 = p->left->right;

	p->left = tp2->right;
	tp->right = tp2->left;
	tp2->right = p;
	tp2->left = tp;

	return tp2;
}


struct node* AVL::insert(struct node* r, int data) {

	if (r == NULL) {
		struct node* n;
		n = new struct node;
		n->data = data;
		r = n;
		r->left = r->right = NULL;
		r->height = 1;
		return r;
	}
	else {
		if (data < r->data)
			r->left = insert(r->left, data);
		else
			r->right = insert(r->right, data);
	}

	r->height = getHeight(r);

	if (getBalanceFactor(r) == 2 && getBalanceFactor(r->left) == 1) {
		r = leftRotation(r);
	}
	else if (getBalanceFactor(r) == -2 && getBalanceFactor(r->right) == -1) {
		r = rightRotation(r);
	}
	else if (getBalanceFactor(r) == -2 && getBalanceFactor(r->right) == 1) {
		r = rightLeftRotation(r);
	}
	else if (getBalanceFactor(r) == 2 && getBalanceFactor(r->left) == -1) {
		r = leftRightRotation(r);
	}

	return r;

}