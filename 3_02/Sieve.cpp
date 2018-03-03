#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
#include "Sieve.h"

std::ostream & operator<<(std::ostream & out, Sieve & s) {

}

std::istream & operator>>(std::istream & in, Sieve & s) {
    int size;
    in >> size;
    s.setSize(size);
    return in;
}

Sieve::Sieve() {
	
	
}

void Sieve::setSize( fixed size ) {
	m_size = size-1; //2-N is n-1 total numbers
	bFindPrimes = new bool[m_size];//generate bool arr and set memory for it
    memset(bFindPrimes, true, sizeof(bFindPrimes));
	for(int i=0; i<m_size; i++){
		bFindPrimes[i]=true; //make sure all values are 
	}
	calculatePrimes(); 
}

void Sieve::calculatePrimes() {
	for (int i=2; i*i<=m_size; i++){//max size of check is sqrt(size)
        // only proceed if bFindPrime is not false (a composite)
        if (bFindPrimes[i] == true) {
            // remove any multiple of p
            for (int j=i*2; j<=m_size; j += i) //first multiple of any n is 2n
                bFindPrimes[j] = false;
        }
    }
	print();
}

void Sieve::print(){
	std::cout << "primes : \n ";
	for (int i=2; i<=m_size; i++)
       if (bFindPrimes[i])
          std::cout << i << "  ";

}

Sieve::~Sieve(){
	
	delete []bFindPrimes;
}
