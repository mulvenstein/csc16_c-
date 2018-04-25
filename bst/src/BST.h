/*
 * BST.h
 *
 *  Created on: Apr 23, 2018
 *      Author: h702546919
 */

#ifndef BST_H_
#define BST_H_

#include "Node.h"

class BST {
public:
	enum TraversalType { PreOrder, PostOrder, InOrder};
	BST();
    bool search( int data) { return search( m_root, data )!=NULL; }
    bool insert( int data) { return insert( m_root, data )!=NULL; }
	//void display() { display (m_root); }
    void display(TraversalType tType);
    virtual ~BST();
private:
	Node* m_root;
	Node* insert( Node *&root, int data );
	Node* search( Node *root, int data );
	void displayInOrder( Node* root );
	void displayPostOrder( Node* root );
	void displayPreOrder( Node* root );

};

#endif /* BST_H_ */
