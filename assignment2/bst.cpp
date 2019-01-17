#include"bst.h"
#include<iostream>


node::node(){}
node::node(int x){
	data = x;
	left = NULL;
	right = NULL;
}



bst::bst(){
	root = NULL;	
}

void bst::insert(int x, node *Troot){
	if(x>Troot->data){
		if(Troot->right==NULL){
			Troot->right = new node(x);
			return;
		}
		insert(x,Troot->right);
		return;
	}else{
		if(Troot->left==NULL){
				Troot->left = new node(x);
				return;
			}
		insert(x,Troot->left);
	}
}
void bst::insert(int x){
	if(root==NULL){
		root = new node(x);
		return;
	}
	if(x>root->data){
		if(root->right==NULL){
			root->right = new node(x);
			return;
		}
		insert(x,root->right);
		return;
	}else{
		if(root->left==NULL){
				root->left = new node(x);
				return;
			}
		insert(x,root->left);
	}
}
void bst::inorder(){
	if(root == NULL){
		return;
	}
	inorder(root->left);
	std::cout<<root->data<<std::endl;
	inorder(root->right);
}
void bst::inorder(node *Troot){
	if(Troot==NULL){
		return;
	}
	inorder(Troot->left);
	std::cout<<Troot->data<<std::endl;
	inorder(Troot->right);
}

bool bst::is_identical(node *bst1, node *bst2){
	if(bst2 == NULL && bst1 == NULL){
		return 1;
	}
	if(bst2 == NULL || bst1 == NULL){
		return 0;
	}
	if(bst2->data != bst1->data){
		return 0;
	}
	return is_identical(bst1->left,bst2->left) && is_identical(bst1->right,bst2->right);
}



bool bst::operator==(bst bst2){
	return is_identical(bst2.root,root);
}





































