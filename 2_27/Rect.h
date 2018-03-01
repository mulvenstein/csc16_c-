#include <iostream>
#ifndef RECT_H
#define RECT_H

typedef float dec; //"dec"imals are floats
typedef int fixed; //"fixed" numbers are ints

class Rect {
    public :
	//constructor
	Rect();
	//explicit constructor
	Rect(dec length, dec width);
	//deconsstructor
	~Rect();	

	//get and set functions
	void setWidth(dec width){ m_width=width; }
	void setLength(dec length){ m_length=length; }
	dec getWidth(){ return m_width; }
	dec getLength(){ return m_length; }

	//interface functions
	dec findArea(); //finds area
	dec findPerimeter(); //finds perimeter
	void displayContents(); //displays perim and area
    private :
	dec m_length,
	    m_width;
};

//external definition of an operator
std::ostream & operator<<(std::ostream & out, Rect & r);
std::istream & operator>>(std::istream & in, Rect & r);
#endif
