#include<iostream>
#include"bst.h"

int main(){
	bst bst1;
	bst1.insert(10);
	bst1.insert(5);
	bst1.insert(11);
	bst1.insert(6);
	bst1.insert(1);
	bst1.insert(20);
	bst1.insert(-1);
	bst1.inorder();
	std::cout<<"\n";
	bst1.r30();
	std::cout<<"\n";
	bst1.path();
	std::cout<<bst1.sum_leaf(21)<<"\n";
	std::cout<<bst1.sum_leaf(541)<<"\n";
	std::cout<<bst1.possible_structs(4)<<"\n";
}