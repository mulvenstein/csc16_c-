#include "List.h"
#include <cstddef>
#include <iostream>
using namespace std;
List::List()
{
    first = NULL;
}

void List::insert(DataType data)
{
    Node *tempPtr = new Node(data,first);
    first = tempPtr;
}

void List::display()
{
    Node *tempPtr = first;
    while(tempPtr!=NULL)
    {
        cout<<tempPtr->data<<" ";
        tempPtr = tempPtr->next;
    }
    cout<<endl;
}
