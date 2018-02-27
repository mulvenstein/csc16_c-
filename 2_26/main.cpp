#include <iostream>
#include "Animal.h"

using namespace std;

int main() {
   cout << "\n\n\t!welcome to animal class!\t" << endl << endl;
   
   Animal monkaS;
   monkaS.setName("goofy");
   monkaS.setSpecies("Monkey");
   monkaS.displayContent();
   return 0;
}
