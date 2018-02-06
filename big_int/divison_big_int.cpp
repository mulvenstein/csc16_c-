#include <iostream>

using namespace std;

/*
 * check wikipedia algorithm
 * uses binary 
 * integer division (unsigned)with remainder
 * */


struct string_operations{
    string answer;
    string remainder;
};


string_operations Divide(string dividend, string divisor){
    short int int_divisor = 0;
    string_operations result = {dividend, divisor};
    return result;
}

int main(){
    cout<<"big int playground test"<<endl;

    string dividend = "";
    string divisor = "";
    string remainder = "";
    string result = "";

    cout<<"\t Enter Dividend >> ";
        cin>>dividend;
    cout<<"\t Enter Divisor >> ";
        cin>>divisor;
    string_operations numbers;
    numbers = Divide(dividend, divisor);
    cout << "answer :  " << numbers.answer << "  remainder : " << numbers.remainder << endl;
    
    return 0;
}
