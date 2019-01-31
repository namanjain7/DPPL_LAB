#include<iostream>
#include<vector>
#include"set.h"
#include"hstb.h"

int main(){
    /*
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
    std::cout << "LIST 1 -----------------\n"; 
    enumerate(l1);
    std::cout<<"LIST 1 After deleting 0 --\n"; 
    remove(0,l1);
    enumerate(l1);
    std::cout<<"LIST 2 -------------------\n";
    enumerate (l2);
    std::cout<<"UNION OF L1 AND L 2-------\n"; 
    Node *l3 = union_(l1, l2);
    enumerate(l3);
    std::cout << "INTERSECTION OF L1 AND L2\n";
    Node *l4 = intersection(l1, l2);
    enumerate(l4);
    std::cout << "DIFFERENCE OF L1 AND L2--\n";
    Node *l5 = difference(l1,l2);
    enumerate(l5);
    std::cout << "DIFFERENCE OF L2 AND L1--\n";
    Node *l6 = difference(l2, l1);
    enumerate(l6);
    std::cout << "SUBSET (L2 OF L1)---------------\n";
    std::cout << subset(l2, l1) << "\n";
*/
    hashtable ht1;
    for(int i = 0;i<5;i++){
        ht1.insert(i);
    }
    ht1.enumerate();
    hashtable ht2;
    for(int i = 0;i<3;i++){
        ht2.insert(i);
    }
    ht2.enumerate();
    std::cout<<ht1.subset(ht2)<<std::endl;
    hashtable intersection_ = ht1.intersection(ht2);
    intersection_.enumerate();
    hashtable union_ = ht1.union_(ht2);
    union_.enumerate();
    hashtable difference_ = ht1.difference(ht2);
    difference_.enumerate();

}
