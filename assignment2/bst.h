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
	bool mirror;
	bool is_identical(node*, node*);
	bool is_identical_structural(node *, node *);
	void insert(int,node*);
	void inorder(node*);
	void do_mirror(node *root);
	void r_inorder(node *root, int);
	void root_leaf_paths(node *root);
	public:
		bst();
		void insert(int);
		void inorder();
		bool operator== (bst bst2);
		bool is_structurally_same(bst bst2);
		void mirror_image();
		void r30();
		void root_leaf();

};



#endif
