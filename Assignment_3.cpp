// student no: A00030840

#include <iostream>
#include <fstream>
#include <string>
#include "ExtractValuesFile.h"

using namespace std;

int main() {
    ExtractValuesFile extractValues;

    int numberElements = extractValues.number_elements("input-q1a2.txt");

    cout << numberElements << endl;

    return 0;
}