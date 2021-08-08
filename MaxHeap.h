#ifndef MAX_HEAP_H
#define MAX_HEAP_H
#include <iostream>

using namespace std;

class MaxHeap
{
public:

	int capacity = 0;
	int * heap = new int[capacity];
	int size = 0;
	void insert(int item) {
		heap[size] = item;
		size++;
		heapifyUp();
	}

	void heapifyUp() {
		int index = size - 1;
		while (index != 0 && heap[(index - 1) / 2] < heap[index]) {
			swap((index - 1) / 2, index);
			index = (index - 1) / 2;
		}
	}

	void swap(int index1, int index2) {
		int temp = heap[index1];
		heap[index1] = heap[index2];
		heap[index2] = temp;
	}


};
#endif

