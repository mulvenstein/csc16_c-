/*
 * swap by value will not work
 * */

#include <iostream>

using namespace std;

void swap_by_value( int a, int b ) {
   int temp = a;
   a = b;
   b = temp;
}

void swap_by_ptr( int *a, int *b ) {
   int temp = *a;
   *a = *b;
   *b = temp;
}

void swap_by_ref( int &a, int &b ) {
   int temp = a;
   a = b;
   b = temp;
} 

int main () {
   int a = 1;
   int b = 2;

   swap_by_value( a, b );
   cout << "After s-b-v, a: " << a << " | b: " << b << endl;

   swap_by_ptr( &a, &b);
   cout << "After s-b-p, a: "<< a << " | b: " << b << endl;

   swap_by_ref( a, b );
   cout << "After s-b-r, a: "<< a << " | b: " << b << endl;
   return 0;
}

