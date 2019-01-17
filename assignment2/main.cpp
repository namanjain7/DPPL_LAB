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
	
	bst bst2;
	bst2.insert(10);
	bst2.insert(5);
	bst2.insert(11);
	bst2.insert(6);
	bst2.insert(1);
	bst2.insert(20);
	bst2.insert(-1);
	bst2.inorder();
	
	std::cout<<(bst1 == bst2)<<std::endl;
	
	

}
