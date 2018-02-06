/*
 * 1/30/18
 * basic stuffz
 */
#include <iostream>

using namespace std;

int add(int a, int b){return a+b;}

int main(){
   int a, b, result;
   cout<<"add two numbers!!!1"<<endl;
   cout<<"\n   #1 >> ";
      cin>>a;
   cout<<"   #2 >> ";
      cin>>b;
   result = add(a,b);
   cout<<"         "<<result<<endl<<endl;
   return 0;
}

