#include "ExtractValuesFile.h"
#include <iostream>
#include <fstream>
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