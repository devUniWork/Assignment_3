// student no: A00030840

#include <iostream>
#include <fstream>
#include <string>
#include "ExtractValuesFile.h"

using namespace std;

int main() {
    ExtractValuesFile extractValues;

    int numberElements = extractValues.number_elements("input-q1a2.txt");
    int* dataElements = new int[numberElements];
    dataElements = extractValues.get_elements("input-q1a2.txt", numberElements);

    for (int i = 0; i < 8; i++) {
        cout << dataElements[i] << "\n";
    }

    return 0;
}