#include <iostream>

using namespace std;

void display(int arr[], int size){
   for( int i = 0; i < size; ++i )
     cout << "[" << i << "] " << arr[i] << " \n";
}

void readValue(int arr[], int size){
   for(int i=0; i<size; i++)
      cin>>arr[i];
}


int main() {
   const int arrSize = 7;
   int arr[arrSize] = {};
   readValue(arr, arrSize);
   display(arr,arrSize);
   cout << "\nPlez enter an integer >> ";
   int integer = 0;
      cin >> integer;
   cout << "Your int was : " << integer << endl<<endl;
   
   float floatVar = 0.0;
   cout << "enter a float >> ";
      cin >> floatVar;
   cout << "your float var is : " << floatVar << endl << endl;
   return 0;
}

