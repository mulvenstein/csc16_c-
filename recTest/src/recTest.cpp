//============================================================================
// Name        : recTest.cpp
// Author      : Tom Mulvey
// Version     :
// Copyright   : MIT License
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void myFunc( int &x ){
	x = x +1;
}

int main() {
    //cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
    int x;
	cout << "enter # plz : ";
        cin  >> x;
    //cout << "\nur # : " << x << endl;

    cout << "\n------------\nbefore : " << x << endl;
    myFunc(x);
    cout << "------------\nafter  : " << x << endl << "------------" << endl;

    return 0;
}
