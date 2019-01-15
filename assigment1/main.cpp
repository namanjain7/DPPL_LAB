#include<iostream>
#include<vector>
#include"set.h"


int main(){
    std::vector<int> arr;
    for(int i = 0;i<10;i++){
        arr.push_back(i*2);
    }
  
    Node* l1 = build(arr);
    arr.clear();

    for (int i = 0;i<10;i++){
        arr.push_back(i*3);
    }
    Node *l2= build(arr);
    Node *l3 = union_(l1,l2);
    enumerate(l1);
    std::cout<<"---------------\n";
    enumerate (l2);
    std::cout<<"---------------\n";
    enumerate(l3);
    Node *l4 = intersection(l1,l2);
    std::cout << "---------------\n";
    enumerate(l4);
    Node *l5 = difference(l1,l2);
    std::cout << "---------------\n";
    enumerate(l5);
    Node *l6 = difference(l2,l1);
    std::cout << "---------------\n";
    enumerate(l6);
    std::cout << "---------------\n";
    std::cout << subset(l2, l1) << "\n";
}