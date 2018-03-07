#include <iostream>
using namespace std;

#include "Array.h"
using namespace csc016;

int main()
{
    int N = 0; //size of arr
    cout << "\nsize o array ?? : " ;
        cin >> N;
    Array arr(N);
    cout << "\nenter values plz\n";
    for(int i=0; i<arr.getLength(); ++i)
    {	 
        cout << "   [" << i+1 << "] | ";
	cin >> arr[i];
    }
    //print values
    arr.display();

    //make new arry and copy el from first
    Array arr2(arr);
    cout << "arr2 vals" << endl;
    arr2.display();

    cout << endl << endl;
    return 0;
}
