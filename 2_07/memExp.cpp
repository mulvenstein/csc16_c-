#include <iostream>

using namespace std;

int main () {
   typedef int fixed;
   const fixed megaByte = 1024 * 1024;

   fixed *iPtr = 0;
   cout << "address of *iPtr : " << iPtr << endl;

   const fixed AllocSize = 1000;
   long byteCount = 0;
   while(1){
      iPtr = new int[AllocSize];
      byteCount += (AllocSize * sizeof(int));
      cout << (float)(byteCount/megaByte) << endl;
   }

   /*
   cout << "address of *iPtr : " << iPtr << endl;  
   //cout << *iPtr << endl; //segmentation fault (core dumped) 
   iPtr = (int *)3000;
   *iPtr = 3;
   */

   return 0;
}
