#include "AvlQuestion.h"
#include <iostream>

using namespace std;

void AvlQuestion::start_insert(string InputFileName, string OutputFileName) {
   int numberElements = extractValues.number_elements(InputFileName);
   int* dataElements = new int[numberElements];
   dataElements = extractValues.get_elements(InputFileName, numberElements);

   for (int i = 0; i < numberElements; i++) {
       avl.root = avl.insert(avl.root, dataElements[i]);
   }
   bfs.printLevelOrder(avl.root, OutputFileName);

}