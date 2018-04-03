#ifndef LIST_H
#define LIST_H

#include "Node.h"

class List
{
  public:
    //constructor
    List();
    void insert(DataType data);//insert data func
    void display(); //print L.L
  private:
    Node *first;
};
#endif
