/*
 * Node.cpp
 *
 *  Created on: Apr 23, 2018
 *      Author: h702546919
 */

#include "Node.h"

Node::Node( int data, Node *left, Node *right ) {
	// TODO Auto-generated constructor stub
    m_data = data;
    m_left = left;
    m_right = right;
}

Node::~Node() {
	// TODO Auto-generated destructor stub
}

