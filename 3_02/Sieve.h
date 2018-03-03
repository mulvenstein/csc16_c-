#ifndef SIEVE_H
#define SIEVE_H

typedef bool truth; //"fixed" numbers are floats
typedef int fixed;

class Sieve {
	private: 
		// Private section
		unsigned m_size; // size of array 2-N 
		truth *bFindPrimes; //arr of boolean values for primes or composites
		int *iFinalPrimes; ///final arr of primes to print
		unsigned m_DynamicSize; //size of dnamic arr, when 0 quit
	public:
		// Public Declarations
		//constructor + deconstructor
		Sieve();
		~Sieve();
		
		//set and get functions
		void setSize( fixed size );
		fixed getSize(){ return m_size; }
		
		//other functions
		void calculatePrimes(); //calculates the prime #s
		void print();//prints primes
	protected:
		// Protected Declarations
};

#endif

std::ostream & operator<<(std::ostream & out, Sieve & s);
std::istream & operator>>(std::istream & in, Sieve & s);
