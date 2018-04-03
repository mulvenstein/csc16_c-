#ifndef TEMPLATEEXP_H
#define TEMPLATEEXP_H

//template<class T1, class T2, class T3>
//T3 add(T1 a, T2 b) { return a+b; }


const int N = 10;

template<class ElementType>
class Array
{
  public:
    ElementType &operator [] (int index) { return array[index]; }
    void display();
    unsigned int getLength();
  private:
    ElementType array[N];
};

template<class ElementType>
void Array<ElementType>::display()
{
    for(int i=0; i<N; i++)
        std::cout << i+1 << " | " << array[i] << std::endl;
}

template<class ElementType>
unsigned int Array<ElementType>::getLength() { return N; }

#endif //TEMPLATEEXP_H
