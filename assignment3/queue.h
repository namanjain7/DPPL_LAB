/*
Innovation Eternity
*/

#include<iostream>
#ifndef QUEUE_H
#define QUEUE_H

class node{
    int data;
    node *next;
    public:
        node(int,node*);
    friend class queue;
};

class queue{
    node *head;
    node *end_;
    bool is_empty();
    public:
        queue();
        bool pop();
        void push(int);
        void display();
};

#endif