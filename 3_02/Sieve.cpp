#include <iostream>
#include <math.h>
#include "Sieve.h"

std::ostream & operator<<(std::ostream & out, Sieve & s) {
    s.print();
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
	for(int i=0; i<m_size; i++){
		bFindPrimes[i]=true; //make sure all values are 
	}
	calculatePrimes(); 
}

void Sieve::calculatePrimes() {
	int max = ceil(sqrt(m_size)+1);
	
	for(int i=2; i<max; i++){ //only numbers that need to be checked
		//cout << i << endl;
		if(bFindPrimes[i] == true){ //false means composite, we want only prime
			for(int j=i*2; j<m_size; j++){ //iterate thru nums to find multiples of i
				if(bFindPrimes[j] == true){
					if(j%i == 0)
						bFindPrimes[j]=false; //if a multipleis found, make bool 0
				}
			}
			
		}
	}
	/*
	
	this function will loop from 2->sqrt(n) [max prime #]
	   and apply the sieve of erastophones algorithm, skipping any 
	   false boolean values, meaning composites. this can be altered to 
	   work with resizing dynamic int arrays and making composities zero, but
	   i wanted this to be more efficient. this can be improved on with a 
	   different data struct.
	*/
}

void Sieve::print(){
	std::cout << "primes : \n ";
	for (int i=2; i<m_size; i++)
       if (bFindPrimes[i] == true)
          std::cout << i << "  ";

}

Sieve::~Sieve(){
	delete []bFindPrimes;
}
