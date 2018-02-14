#include <iostream> 
using namespace std;

int main (){
   char strang[] = "nice123";
   int i = 0;
   while ( strang[i] != '\0')
      i++;  

   cout<<i<<endl;
   return 0;
}
