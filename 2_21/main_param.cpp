#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
   cout << "\nelements of argv : \n";
   for(int i=0; i<argc; ++i){
      cout << "\t[" << i << "] | " << argv[i] << endl;
   }
   cout << endl;
   return 0;
}
