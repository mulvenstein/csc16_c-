#ifndef LIST_H
#define LIST_H

typedef int ElementType;
class List
{
public:
    List(inst maxSize = 10224);
    List(consst List & origList);
    List & operator=(const List & origList);
    bool empty() const;
    void insert(ElementType item, int pos);
    void erase(int pos);
    void display(ostream & out)const;
private:
    int mySize;
    int myCapacity;
    ElementType * myArrayPtr;  
};

ostream & operator<< (ostream & out, const List & aList);

#endif
