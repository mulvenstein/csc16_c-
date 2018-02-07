/*
 * author : tom mulvey
 * date : 2/6/18
 * prupose : learn basics of pointers!
 * */


#include <iostream>

using namespace std;

int main() {

   //cout << sizeof(short) << endl;  //2 bytes
   //cout << sizeof(int) << endl;    //4 bytes
   //cout << sizeof(long) << endl;   //8 bytes
   //cout << sizeof(float) << endl;  //4 bytes
   //cout << sizeof(double) << endl; //8 bytes

   // if you can never init a * to a var, init to 0.
   //    fixed ptr = 0;

   typedef int fixed;

   fixed i = 1;
   cout << "\nAddress of integer 'i' : " << &i << endl; //address of i

   fixed *intPtr = &i; // initializes a pointer that points to address of i
   cout << "intPtr is referencing :  " << intPtr << endl;

   cout << "intPtr -> val of i :\t " << *intPtr << endl;//prints val of i 

   fixed j = 2;
   cout << "Address of integer 'j' : " << &j << endl; //address of i 

   intPtr--; //moves down one memory location (will print j val)
   cout << "Value of intPtr-- == j== " << *intPtr << endl;
   cout << "Address of intPtr -- :   " << intPtr << endl;

   cout << endl;
   return 0;
}
