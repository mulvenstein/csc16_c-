#include "Sieve.h"
#include <iostream>
#include <math.h>

//Sieve Constructor
Sieve::Sieve(unsigned int size) {
   setSize(size);
}

void Sieve::setSize(unsigned int size) {//sets size of dynamic array
   m_size = size; //sets member size to what user wanted in main
   
   iPtr_Prime = new int[m_size-1]; //first [] is value, second is prime or not
   for(int i=0; i<m_size-1; ++i){ //this loop fills dynamic array
      iPtr_Prime[i] = i+2;
      //std::cout << iPtr_Prime[i] << std::endl;
   }
   for(int i=0; i<m_size-1; i++) //because the assignment asked for dynamic
      primes_arr[i] = true;      //arrays im gonna use an array of bools to 
                                 //know whether a number is prime or not.
                                 //a vector or struct would be better


}

void Sieve::calc_primes(void){
   unsigned int max_factor = ceil(sqrt(m_size));//all nums will have factors <= this
   
   for(int i=2; i<max_factor; i++){
      if(primes_arr[i-2]==true){
         //only check prime numbers, not composites
         for(int j=i+1; j<m_size+1; j++){
            if(primes_arr[j-2]==true){
               if(iPtr_Prime[j-2]%iPtr_Prime[i-2]==0)
                  primes_arr[j-2]=false;
            }
         }
      }
   }   

   print();
}

void Sieve::print() { //prints final primes
   std::cout << "\n\n";
   for(int i=0; i<m_size-1; ++i)
       if(primes_arr[i]==true){std::cout<<iPtr_Prime[i]<<" is prime\n";}
   
}


Sieve::~Sieve () {
   delete[] iPtr_Prime;
}
