/*
  tom mulvey
  2-10-18
  anything with a //ADDED or //REMOVED
    comment means i added/removed it to the code
  debugging
*/

#include <iostream>

using namespace std; //ADDED

const float MyConstantValue = 9.9;

float testFunc1() //ADDED made it return a FLOAT
{
 float uselessVal = MyConstantValue * 2; //ADDED uselessVal == MyConstantVal * 2 
 return uselessVal; 			 // and returned uselessVal for user Readability
}
float testFunc2(int val) //ADDED made this func return a float.
{
 return val*testFunc1(); //REMOVED vall -> val
}
float testFunc3(int y)  //ADDED made this func return a float.
{
 int x = 4;
 return testFunc2(x)*testFunc2(y);
}
int main()
{
 cout <<" !!!Hello Errors!!!" << endl;  //ADDED A double quote
 float result = testFunc3(10);
 cout << "Result="<<result<<endl; //ADDED A <
 return 0;
}
