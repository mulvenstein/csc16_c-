#include <iostream>
#include "Animal.h"

void Animal::displayContent(){
   std::cout << "   Animal Type: " << m_species << "\n" ;
   std::cout << "   Animal Name: " << m_name << "\n";

   std::cout << "\n\n";
}

void Animal::setName(const char name[]){
   int i = 0;
   while(name[i]!=0){
      m_name[i] = name[i];
      i += 1;
   }
   m_name[i]=0;
}

void Animal::setSpecies(const char species[]){
   int i = 0;
   while(species[i]!=0){
      m_species[i] = species[i];
      i += 1;
   }
   m_species[i]=0;
}

