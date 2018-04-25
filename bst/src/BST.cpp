/*
 * BST.cpp
 *
 *  Created on: Apr 23, 2018
 *      Author: h702546919
 */

#include "BST.h"
#include <iostream>

BST::BST() {
	// TODO Auto-generated constructor stub
	m_root = NULL;
}

Node *BST::insert( Node * &root, int data ) {
	if(root==0)
		   return root = new Node(data,0,0);
	else
	{
	    if(data < root->m_data)
		    return insert(root->m_left,data);
	    else
	    {
	        if(data > root->m_data)
		        return insert(root->m_right,data);
	        else
		       return 0;
	    }
	 }
}

Node* BST::search( Node *root, int data ) {
    if ( root == NULL ) { return NULL; }
	if ( root->m_data == data ) {
    	return root;
    } else {
    	if ( data < root->m_data ) {
    		return search( root->m_left , data );
    	} else {
    		if ( data > root->m_data ) {
    		    return search( root->m_right, data);
    		}
    	}
    }
}


void BST::display(TraversalType tType) {
	switch(tType){
	case PreOrder:
		displayPreOrder(m_root);
		break;
	case InOrder:
		displayInOrder(m_root);
		break;
	case PostOrder:
		displayPostOrder(m_root);
		break;
	}

}

void BST::displayInOrder( Node* root ) {
    // infix : left, print current, print right
	if ( root == 0 ) { return; }
	displayInOrder( root->m_left );
	std::cout << root->m_data << std::endl;
	displayInOrder( root->m_right );
}

void BST::displayPostOrder( Node* root ) {
    // infix : left, print current, print right
	if ( root == 0 ) { return; }
	displayPostOrder( root->m_left );
	displayPostOrder( root->m_right );
	std::cout << root->m_data << std::endl;
}

void BST::displayPreOrder( Node* root ) {
    // infix : left, print current, print right
	if ( root == 0 ) { return; }
	std::cout << root->m_data << std::endl;
	displayPreOrder( root->m_left );
	displayPreOrder( root->m_right );
}

BST::~BST() {
	// TODO Auto-generated destructor stub
}

