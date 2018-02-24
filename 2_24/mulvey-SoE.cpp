/*
 * author: tom mulvey
 * date: 2-24-18
 * purpose : Sieve of Eratosthenes driver program
 *
 * */

#include <iostream>
#include "Sieve.h"

int main(){

    unsigned int n; //n is the number 2-N to find primes for
   
   std::cout << "\n\n\t!sieve prime generator prgm!\n\n";
   std::cout << "enter a number, N, from 2-N to find primes for >> ";
      std::cin >> n;
   
   Sieve find_primes(n);
   find_primes.calc_primes();
   return 0;
}
