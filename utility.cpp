// student no: A00030840
#include "utility.h"
#include <iostream>
#include <fstream>
void Utility::writeToLastLine(string fileName, string line) {
    std::fstream myfile(fileName, std::ios::app);
    if (myfile.is_open())
    {
        myfile << line;
        myfile.close();
    }
    else cout << "Unable to open file";
}


