#ifndef SIEVE_H
#define SIEVE_H

class Sieve {
   private :
      unsigned int m_size; //max size for array
      int *iPtr_Prime; //pointer for dyncamic array
      bool primes_arr[]; //arr that tells if an index of dynamic array is prime or not   
   public : 
      Sieve(unsigned int size);
      ~Sieve();
      void setSize(unsigned int size); //sets size 2-N
      void print(); //prints final list of primes      
      void calc_primes(void); 
      int getSize() { return m_size; } //gets size 2-N
};

#endif
