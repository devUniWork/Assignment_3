#include "BFS.h"

void BFS::printLevelOrder(node* root, string outputFile)
{
	int h = avl.getHeight(root);
	int i;
	for (i = 1; i <= h; i++) {
		utility.writeToLastLine(outputFile, std::to_string(i - 1) + ": ");
		printCurrentLevel(root, i, outputFile);
		utility.writeToLastLine(outputFile, "\n");
	}
}

void BFS::printCurrentLevel(node* root, int level, string outputFile)
{
	if (root == NULL)
		return;
	if (level == 1)
		utility.writeToLastLine(outputFile, std::to_string(root->data) + " ");
	else if (level > 1)
	{
		printCurrentLevel(root->left, level - 1, outputFile);
		printCurrentLevel(root->right, level - 1, outputFile);
	}
}