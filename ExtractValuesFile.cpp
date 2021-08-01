// student no: A00030840
#include "ExtractValuesFile.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

int ExtractValuesFile::number_elements(string fileName) {
        string line;
        ifstream myfile(fileName);
        int lineCount = 0;
        if (myfile.is_open())
        {
            while (getline(myfile, line))
            {
                if (lineCount == 0) {
                    return std::stoi(line);
                }
            }
            myfile.close();
        }
        else cout << "Unable to open file";
      return 0;
}

int * ExtractValuesFile::strip_elements(string rawDataElements, int numberRawElements) {
    std::stringstream ss(rawDataElements);
    int* dataElements = new int[numberRawElements];
    int lineCount = 0;
    for (int i; ss >> i;) {
        dataElements[lineCount] = i;
        if (ss.peek() == ' ') {
            ss.ignore();
        }
        lineCount++;
    }
    if (lineCount != numberRawElements) {
        alert.errorMessage("more elements were declared, than elements in the array. Please fix this up, before continuing.");
        delete[] dataElements;
        return {};
    }
    else {
        return dataElements;
    }
    delete[] dataElements;
    return {};
}


int * ExtractValuesFile::get_elements(string fileName, int numberRawElements) {
    string line;
    ifstream myfile(fileName);
    int lineCount = 0;
    if (myfile.is_open())
    {
        while (getline(myfile, line))
        {
            if (lineCount == 1) {
                return strip_elements(line, numberRawElements);
            }
            lineCount++;
        }
        myfile.close();
    }
    else cout << "Unable to open file";
    return {};
}