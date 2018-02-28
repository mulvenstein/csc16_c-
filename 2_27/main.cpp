/*
  driver program for Rect class
  author : tom mulvey
  date : 2/27/18
  prupose : learn more about OOP and classes
*/

#include <iostream>
#include "Rect.h"

int main() {
    Rect quad1;
    quad1.displayContents();

    std::cout << "   ---------------------------------------------\n";
    
    Rect quad2(10,20);
    quad2.displayContents();

    std::cout << "   ---------------------------------------------\n";
    quad1.setWidth(5);
    quad1.setLength(21);
    quad1.displayContents();
    return 0;
}
