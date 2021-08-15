// student no: A00030840
#include "MaxHeapQuestion.h";
#include "MaxHeap.h";
#include <string> 
void MaxHeapQuestion::start_max_heap(string InputFileName, string OutputFileName) {
	int numberElements = extractValues.number_elements(InputFileName);
	int *dataElements = new int[numberElements];
	int iterations = 0;
	int pointer = 0;

	MaxHeap maxHeap;

	dataElements = extractValues.get_elements(InputFileName, numberElements);

	for (int i = 0; i < numberElements; i++) {
		maxHeap.insert(dataElements[i]);
		if (i >= 1) {
			for (int c = 0; c <= i; c++) {
				// data elements before insertion.
				utility.writeToLastLine(OutputFileName, std::to_string(dataElements[iterations]) + " ");
				iterations++;
			}
			iterations = 0;
			utility.writeToLastLine(OutputFileName, "\n");
			for (int x = 0; x <= i; x++) {
				// elements inserted.
				utility.writeToLastLine(OutputFileName, std::to_string(maxHeap.heap[pointer]) + " ");
				pointer++;
			}
			pointer = 0;
			utility.writeToLastLine(OutputFileName, "\n");
		}
		else {	
			utility.writeToLastLine(OutputFileName, std::to_string(dataElements[i]) + " ");
			utility.writeToLastLine(OutputFileName, "\n");
			utility.writeToLastLine(OutputFileName, std::to_string(maxHeap.heap[i]) + " ");
			utility.writeToLastLine(OutputFileName, "\n");
		}
	}
	delete[] dataElements;
}
