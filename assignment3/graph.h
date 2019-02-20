/*
Innovation Eternity
*/

#include<iostream>
#include"queue.h"
#ifndef GRAPH_H
#define GRAPH_H

class graph{
    bool **arr;
    int rows, connections;
    queue* traverse_(int,bool*, queue*,int);

    public:
        graph(int);
        void add_path(int, int);
        queue* traverse(int);
};

#endif