#include <iostream>
#include "math.h"

using namespace std;

int main(){
    short number = 1;
    cout<<sizeof(short)<<endl;
    unsigned short int c = 1; //counter
    
    for(int i = 0; i <= 32800; ++i) {
        cout << c << " | " <<  number << endl ;
        c++;
        number += 1; // iff number = number * 2
    }

    cout << "\n\n" << pow(2,15) << endl << endl << endl;
    // j = i++ sets j before increasing, ++i increases then sets
    int j = 0;
    // int k = ++j;
    int k = j++;
    cout << k << " = k" <<  endl << endl << endl;
    return 0;
}



