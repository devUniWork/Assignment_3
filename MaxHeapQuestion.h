#ifndef MAX_HEAP_QUESTION_H
#define MAX_HEAP_QUESTION_H
#include <iostream>
#include "ExtractValuesFile.h";
#include "utility.h";
using namespace std;

class MaxHeapQuestion
{
private:
	ExtractValuesFile extractValues;
	Utility utility;
public:
	void start_max_heap(string InputFileName, string OutputFileName);
};
#endif

