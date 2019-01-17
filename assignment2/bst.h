#include<iostream>
#ifndef BST_H
#define BST_H
class node;
class node{
	int data;
	node *left;
	node *right;
	public:
		node(int x);
		node();
	friend class bst;
};

class bst{

	node *root;
	bool is_identical(node*, node*);
	bool is_identical(bst);
	void insert(int,node*);
	void inorder(node*);
	public:
		bst();
		void insert(int);
		void inorder();
		
		bool operator== (bst bst2);
		

};

#endif
