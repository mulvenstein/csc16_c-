/*
 * step 1: get dec_to_bin to work
 * on a cpp file
 * step 2: create header file
 * step 3: use header in bigint stuffs
 * */

#include <iostream>
#include "math.h"

using namespace std;

//dec->bin with ints, not strings
void int_dec_to_bin(int num_to_binary){
   //find number of bits
   int counter = 0;
   for (;;){
      if ( pow(2,counter) > num_to_binary)
         break;
   }
   cout << "2 ^" << counter << endl;
}

//dec->bin with strings
void string_dec_to_bin(){

}

int main(){
   int num_to_binary = 0;
   string stringDecimal_to_binary;
   
   cout << "Enter # you wish to convert to binary >> ";
      cin >> num_to_binary;
   
   int_dec_to_bin(num_to_binary);

}


