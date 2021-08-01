#ifndef EXTRACT_VALUES
#define EXTRACT_VALUES
#include <iostream>
#include "ErrorHandler.h"
using namespace std;

class ExtractValuesFile
{
private:
	int * strip_elements(string rawDataElements, int numberOfElements);
	ErrorHandler alert;
public: 
	int number_elements(string fileName);
	int * get_elements(string fileName, int numberOfElements);
};
#endif