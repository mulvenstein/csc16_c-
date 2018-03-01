/*
  driver program for Rect class
  author : tom mulvey
  date : 2/27/18
  prupose : learn more about OOP and classes
*/

#include <iostream>
#include "Rect.h"

int main() {
    /* before we added out operator
 *  Rect quad1;
    quad1.displayContents();

    std::cout << "   ---------------------------------------------\n";
    
    Rect quad2(10,20);
    quad2.displayContents();

    std::cout << "   ---------------------------------------------\n";
    quad1.setWidth(5);
    quad1.setLength(21);
    quad1.displayContents(); */
    
    //using overiden ostream insertion operator
    Rect r1;
    r1.setWidth(2);
    r1.setLength(4);
    std::cout << r1 << "\n";   
    //using overiden istream extraction operator
    //std::cout << "\n";
    Rect r2;
    std::cin >> r2;
    std::cout << r2 << "\n";
    return 0;
}
