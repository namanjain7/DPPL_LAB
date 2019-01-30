#include<iostream>
class hashtable;
struct node{
    int key;
    int data;
    private:
        node *next;
        node *prev;
    friend class hashtable;
};
class hashtable{
    node *bucket[9];
    int hashfunction(int);
    node *eol;
    public:
        hashtable();
        int insert(int, int);
        node* search(int);
        int del(int);
        node* operator[](int index);
        node *eof();
};
