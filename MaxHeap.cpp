// student no: A00030840
#include <iostream>
#include "MaxHeap.h";
using namespace std;

void MaxHeap::insert(int item) {
	heap[size] = item;
	size++;
	heapifyUp();
}
void MaxHeap::heapifyUp() {
	int index = size - 1;
	while (index != 0 && heap[(index - 1) / 2] < heap[index]) {
		swap((index - 1) / 2, index);
		index = (index - 1) / 2;
	}
}

void MaxHeap::swap(int index1, int index2) {
	int temp = heap[index1];
	heap[index1] = heap[index2];
	heap[index2] = temp;
}