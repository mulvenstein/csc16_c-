#include <iostream>

using namespace std;

int main () {
   typedef int fixed;

   fixed *iPtr;
   cout << "address of *iPtr : " << iPtr << endl;  
   cout << *iPtr << endl; //segmentation fault (core dumped) 

   return 0;
}
