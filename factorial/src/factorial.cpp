//============================================================================
// Name        : factorial.cpp
// PURPOSE : do factorial recursively...i will try to do it dynamically
// Author      : Tom Mulvey
// Version     :
// Copyright   : MIT License
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <map>
#include <math.h>
#include <string>

using namespace std;

map<int, long> fact_map;
map<int, long>::iterator it ;


int factorial (int N ) {//n is size
    if ( N < 2){
        return N;
    } else {
    	it = fact_map.find(N);
    	if (it != fact_map.end()) {
    		// FOUND
    		return fact_map[N];
    	} else {
    		// NOT FOUND
    		long ans = N*factorial(N);
    		fact_map.insert ( std::pair<int ,long>(N,ans) );
    		return ans;
    	}
    }
    /* WITHOUT SAVING VALUES THIS IS VERY INEFFIECENT
     * class is too boring so i will use maps */
}

int strip(int x){
    x/= (int)10;
	int y = x;
	int count = 0;

	while (y > 1){
		y/=10;
		count++;
	}

	int newint = 0;
	int temp;
	for(int i=0; i<count; i++){
		temp = temp * 10;
	}
	newint = x % (temp);

	return newint;
}

bool Palindrome(int num, int numDigits) {
    if (numDigits <= 1){
		return true;
	} else {
		unsigned powerOf10;
		powerOf10 = (unsigned)pow(10, numDigits -1);
		unsigned first = num / powerOf10;
		unsigned last = num % 10;
		if ( first != last){
			return false;
		} else {
			return Palindrome((num % powerOf10)/10 ,numDigits-2);
		}
	}
	return 0;
}

bool Palindrome(string str, int beg, int end){
	if(beg >= end){
		return true;
	}
	if(str[beg] != str[end]){
		return false;
	}
	return Palindrome(str, beg++, end--);

}

int main() {
	//cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	/*int size;
	cout << "enter size : ";
	    cin >> size;
	cout << size << "! = " << factorial(size) << endl;*/

	/*int num = 131;
	cout << "is " << num << " a palindrome ? : " << Palindrome(num, 3) << endl;*/
	cout << "hi";
	string str = "teet";
	cout << "is " << str << " a palindrome? : " << Palindrome(str, 0, str.size()-1) << endl;


	return 0;
}
