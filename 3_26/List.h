#ifndef LIST_H
#define LIST_H
#include "Node.h"
class List
{
  public:
    List();
    void insert(DataType data);
    void display();
  private:
    Node *first;
};
#endif //LIST_H
