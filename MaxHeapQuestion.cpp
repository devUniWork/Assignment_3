// student no: A00030840
#include "MaxHeapQuestion.h";
#include "MaxHeap.h";

void MaxHeapQuestion::start_max_heap(string InputFileName, string OutputFileName) {
	int numberElements = extractValues.number_elements(InputFileName);
	int* dataElements = new int[numberElements];
	int* outputMaxHeap = {};
	int levels = 0;
	MaxHeap maxHeap;


	dataElements = extractValues.get_elements(InputFileName, numberElements);

	levels = height(numberElements);

	for (int i = 0; i < numberElements; i++) {
		maxHeap.insert(dataElements[i]);
	}

	for (int z = 0; z < numberElements; z++) {
		cout << maxHeap.heap[z] << " ";
	}
}

int MaxHeapQuestion::height(int N)
{
	return ceil(log2(N + 1)) - 1;
}