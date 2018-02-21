/*
 * baseConvert.cpp
 * author: tom mulvey
 * date : 2/17
 * purpose: convert any base 2-36 into base 10
 */

#include <iostream>
#include "math.h"
#include <cstdlib> //exit(1)

using namespace std;

int convert(string number, short int base){
   // i will first reverse the number given, that way i can work from
   //  0->n with the exponents instead of n->0
   unsigned long result = 0;
   string reversed_num(number.rbegin(), number.rend());
   unsigned short int len = number.length();
   
   for(int i=0; i<len; i++){
      if(reversed_num[i] >= 48 && reversed_num[i] <= 57 ){
         //cout << number[i] << " is a digit! \n" ;
         result = result + ((int)reversed_num[i] - 48) * pow(base, i);
      }
      else if(reversed_num[i] >= 97 && reversed_num[i] <= 122) { 
         //cout << reversed_num[i] << " is a lowercase letter! \n" ;
         result = result + ((int)reversed_num[i] - 87) * pow(base, i);
      }
      else{ //theres an invalid char
         cout << "there is an invalid char in number recieved." 
              << "\n   enter a valid one next time...\n"
              << "   (maybe try lowercase letters) \n";
         exit(1);
      }
   }
   
   return result;
}

int main() {
   /*   
		the user input system is pretty bad.
		base 2 = 2,
		base 8 = 8,
		base 16 = g,
		base 36 = z

		i should make this easier at some point
   */
   // im going to hold all possible bases in a string, then
   //    iterate thru it to find the base needed

   string possible_bases = "23456789abcdefghijklmnopqrstuvwxyz ";
   // this string will let me loop through it and find #val with it
   char base_wanted; //base user wants
   string number;

   cout << "---base convert!!1!!---\n\n";  
   cout << "[base 2=2. base 8=8, base 10=a, base 16=g, base 36=z ]\n";
   cout << "   Enter the base you want to convert from >> ";
      cin >> base_wanted;
      cin.ignore();
   cout << "   Number wanted in base (lowercase) " << base_wanted << " you want >> ";
      cin >> number;
      //cin.ignore();
   //iterate thru possible_bases to find basse
   int base=2; //lowest base is base 2, count up from there
   for(base; base<possible_bases.length(); ++base){
      if(base_wanted == possible_bases[base - 2] ){
         //cout << base_wanted << " was in string";
         break; //checks if base wanted is in the loop
      }
   }

   if(base == 35) {
      cout << "   etner correct base plz\n" ;
      return 0; //base was not in string
   } //i should do better checking if base is valid -__-

   cout << endl << endl << "   " 
        << number << "(base " << base_wanted
        << ") = " << convert(number, base)
        << endl << endl;

   return 0;
}
