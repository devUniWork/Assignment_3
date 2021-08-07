#ifndef MAX_HEAP_H
#define MAX_HEAP_H
#include <iostream>
#include "ExtractValuesFile.h";

using namespace std;

class MaxHeapQuestion
{
private:
	ExtractValuesFile extractValues;
public:
	void start_max_heap(string InputFileName, string OutputFileName);
};
#endif

