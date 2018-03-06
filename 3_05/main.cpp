#include <iostream>
#include <fstream>
#include <cassert>
#include <string>
using namespace std;

int main() {
    ofstream fOut; //output stream var
    fOut.open("test-file.txt");
    assert(fOut.is_open());
    fOut << "greetings sirs! :D ";
    fOut.close();
  
    ifstream fIn;
    fIn.open("test-file.txt");
    assert(fIn.is_open());
    while(!fIn.eof()){
        string str; 
        fIn >> str;                                
        cout << "str from file = " << str << endl;
    }
    
    fIn.close();    

    return 0;
}
