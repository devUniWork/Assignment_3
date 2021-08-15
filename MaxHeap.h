#ifndef MAX_HEAP_H
#define MAX_HEAP_H
#include <iostream>

using namespace std;

class MaxHeap
{
private: 
	int capacity = 0;
	int size = 0;
public:
	int* heap = new int[capacity];
	void insert(int item);
	void heapifyUp();
	void swap(int index1, int index2);
};
#endif

