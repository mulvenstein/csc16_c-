#include <iostream>
#include "Rect.h"

Rect::Rect() {
    /* sets member w+l to default values incase nothing is sent */
    m_width = 0;
    m_length = 0;
}

Rect::Rect(dec width, dec length) {
    /* sets member l and w to what is sent to constructor */
    m_width= width;
    m_length = length; 
}

dec Rect::findArea() { return m_width*m_length; }

dec Rect::findPerimeter() { return (2*(m_width + m_length)); }

void Rect::displayContents() {
    std::cout << "\n\n\twidth : " << m_width << "    ";
    std::cout << "length : " << m_length << "\n\n\t";
    std::cout << "   area  : " << findArea() << " unit^2\n\t";
    std::cout << "   perim : " << findPerimeter() << " unit^2\n\n\n";
}

Rect::~Rect() {

}
