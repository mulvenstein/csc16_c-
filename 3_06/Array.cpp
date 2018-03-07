#include <iostream>
#include "Array.h"

namespace csc016 {

//explicit size constructor
Array::Array(int size)
{
    PRINT_DEBUG_HELPER("\nin constructor\n");
    m_dataArray = new int[size];
    m_dataLength = size;
}


Array::Array(const Array &ar)
{
    m_dataArray = NULL;
    m_dataLength = 0;
    copy(ar);
}

void Array::display()
{
    std::cout << std::endl << std::endl << "array elements: \n";
    for(int i=0; i<m_dataLength; ++i)
    {
        std::cout << "   [" << i+1 << "] | " << m_dataArray[i] << std::endl;
    }
}

void Array::copy(const Array& ar){
    //1. check if new array has memory allocated
    //2. allocate new size
    //3. loop overl elements of ar and copy into new

    //if arr isnt empty, empty that jazz
    deleteFunc();
    //allocate new size
    m_dataArray = new int[ar.getLength()];
    m_dataLength = ar.getLength();

    //loop over el in ar and copy into m_dtataArray
    for(int i=0; i<m_dataLength; i++)
    {
	m_dataArray[i] = ar[i];
    }
}

void Array::deleteFunc()
{
    //PRINT_DEBUG_HELPER("\nin destructor\n");
    //if arr isnt empty, empty that jazz
	if(m_dataArray!=NULL){
            delete []m_dataArray;
	    m_dataArray = NULL;
	}        
}

Array::~Array()
{
    deleteFunc();
}

} /* namespace csc016 */
