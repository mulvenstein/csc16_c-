//============================================================================
// Name        : bst.cpp
// Author      : tom mulvey
// Version     : 1.0
// Copyright   : only my eyes are allowed to see this
// Description : binary search tree
//============================================================================

#include <iostream>
#include "BST.h"

using namespace std;

int main() {
    BST bst;

    const int N = 10;
    for ( int i = 0; i < N; i++ ) {
    	bst.insert(i);
    }

    const int search_for = 4;
    cout << " is " << search_for << " found ? " << bst.search(search_for) << endl << endl;

//    bst.display();
    cout << "\n test \n";

	return 0;
}
