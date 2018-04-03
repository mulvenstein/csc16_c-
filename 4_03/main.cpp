#include <iostream>
#include "templateExp.h"

using namespace std;

int main()
{
    //cout << add(3,3) << endl;
    //cout << add<float, float, float>(3.13,.01159) << endl;

    Array<int> arr;
    //arr[0] = 1;    
    for(int i=0; i<arr.getLength(); i++)
        arr[i] = i + 5;
    cout << "printing 10 ints of arr1 : \n";
    arr.display();

    Array<float> arr2;
    for(int i=0; i<arr.getLength(); i++)
        arr2[i] = i * 2.21;
    cout << "\nprinting 10 floats of arr2 : \n";
    arr2.display();

    return 0;
}
