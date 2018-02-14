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

void map_add ( int &i ){
   i = i + 10;
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
  
   int arr[] = {0,1,2,3,4,5,6,7,8};
   cout << "\n\n before : ";
   for (int idx = 0; idx < 9; ++idx){
      cout << arr[idx] << " | " ;
   }   
   cout << endl;
   cout << "  after : ";
   for (int idx = 0; idx < 9; ++idx){
      map_add(arr[idx]);
      cout << arr[idx] << " | " ;
   }
   cout << endl << endl;
   return 0;
}

