/*
 * main.cpp
 *
 *  Created on: Feb 8, 2022
 *      Author: Benjie
 */
#include <iostream>
#include <string>
#include <array>
#include <ctime>
#include <cstdlib>
#include <iomanip>
const int UPPER_BOUND = 51; // The largest random number, inclusive

using namespace std;
static int count = 0;
static int total=0;
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
		if(pArray[i]>pArray[i+1]){count++;
			buffer=pArray[i];
			pArray[i]=pArray[i+1];
			pArray[i+1]=buffer;
			test=false;}
	}}while(test==false);
}
int main() {
	srand(time(NULL));
	for(int j=0;j<100;j++){
	int size=100;
//	do {
//		cout << "How big an array:";
//		cin >> size;
//	} while (size < 1);
	int *array = new int[size];
	fillArray(array, size);
	printArray(array, size);
	cout << endl;
	sortArray(array,size);
	//printArray(array, size);
	delete array;
	//printArray(array,size);
	cout << endl<< count;
	total+=count;
	count=0;
}cout << total<<endl;
cout << total/100;}

