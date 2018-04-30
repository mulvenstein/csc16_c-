//============================================================================
// Name        : hashTableMulvey.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "hashTable.h"
using namespace std;

int main() {
	//cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	//dataPair<int, float> pair;

	const int N = 10;
	HashTable<int, float> hash_tbl(N);

	// storing some 'random' numbers
	for(int i=0; i<hash_tbl.size(); i++) {
		hash_tbl[i] = ( ( ( i * 13.2 ) + 17 ) - 27 ) ;
	}

	for(int i=0; i<hash_tbl.size(); i++) {
		cout << "[" << i << "] : " << hash_tbl[i] << endl;
	}

	cout << "\nwe are done ! \n";
	return 0;
}
