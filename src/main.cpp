/*
Author:       Benjie
Class:        CSI-240-03
Assignment:   Lab 4-4
Date Assigned:2/7/2022
Due Date:     2/22/2022 14:30
Description:
Bubble sort on array
Certification of Authenticity:
    I certify that this is entirely my own work, except where I have given
    fully-documented references to the work of others. I understand the
    definition and consequences of plagiarism and acknowledge that the assessor
    of this assignment may, for the purpose of assessing this assignment:
        - Reproduce this assignment and provide a copy to another member of
academic staff; and/or
        - Communicate a copy of this assignment to a plagiarism checking
          service (which may then retain a copy of this assignment on its
          database for the purpose of future plagiarism checking)
*/
#include <iostream>
#include <string>
#include <array>
#include <ctime>
#include <cstdlib>
#include <iomanip>
const int UPPER_BOUND = 51; // The largest random number, inclusive

using namespace std;
void fillArray(int *pArray, int size) {

	for (int i = 0; i < size; i++) {
		pArray[i] = rand() % UPPER_BOUND;

	}
}
void printArray(int *pArray, int size) {
	for (int i = 0; i < size; i++) {
		if (i % 10 == 0) {
			cout << endl;
		}
		cout << setw(3)<< pArray[i] ;

	}
}
void sortArray(int *pArray, int size) {
	int buffer=-1;
	bool test=true;
	do{
		test=true;
	for(int i=0;i<size-1;i++){
		if(pArray[i]>pArray[i+1]){
			buffer=pArray[i];
			pArray[i]=pArray[i+1];
			pArray[i+1]=buffer;
			test=false;}
	}}while(test==false);
}
int main() {
	srand(time(NULL));
	int size;
	do {
		cout << "How big an array:";
		cin >> size;
	} while (size < 1);
	int *array = new int[size];
	fillArray(array, size);

	printArray(array,size);
	cout << endl;
	sortArray(array,size);
	printArray(array, size);
	delete array;
	array=nullptr;
}

