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

   typedef int realNum;

   realNum i = 0;
   cout << "Address of integer 'i' : " << &i << endl;


   return 0;
}
