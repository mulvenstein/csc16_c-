#include "Node.h"
#include <cstddef>
Node::Node()
{
    next = NULL;
    data = 0;
}

Node::Node(DataType data, Node *next)
{
    this->data = data;
    this->next = next;
}
