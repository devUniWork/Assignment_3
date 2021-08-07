// student no: A00030840

#include <iostream>
#include <fstream>
#include <string>



#include "AvlQuestion.h";

using namespace std;

int main() {


	int input = 0;
	const enum QUESTIONS { AVL_QUESTION = 0, MAX_HEAP_QUESTION = 1 };

	const struct AVLFILENAME {
		const string InputFileName = "input-q1a2.txt";
		const string OutputFileName = "output-q2-a2.txt";
	};

	AvlQuestion avlQuestion;
	AVLFILENAME avlFileName;




	while (input < 2) {
		cout << "ADS Assessment 3: Programming Assignment 2" << endl;
		cout << "There are two questions in this assignment" << endl;
		cout << "Please enter 0 or 1 and press enter to select either:" << endl;
		cout << "0: AVL tree insertion with breadth-first traversal" << endl;
		cout << "1: binary max heap" << endl;

		cin >> input;
		if (input == AVL_QUESTION) {
			avlQuestion.start_insert(avlFileName.InputFileName, avlFileName.OutputFileName);
			cout << "check for output" << endl;
		}
		if (input == MAX_HEAP_QUESTION) {
			cout << "still working on it";
		}
	}
	cout << "please enter valid input" << endl;
	return 0;


    return 0;
}