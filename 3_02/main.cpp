/*
	Name: Sieve of Erastophanes
	Copyright: me
	Author: Tom Mulvey
	Date: 01/03/18 08:03
	Description: driver program for Sieve prime # finder.
		Uses dynamic arrays  and classes
*/


#include <iostream>
#include "Sieve.h"

using namespace std;

int main(int argc, char** argv) {
	cout << "enter number N to find primes from 2-N >> : ";
	Sieve me;
	cin >> me;
	//me.calculatePrimes(); 
	return 0;
}
