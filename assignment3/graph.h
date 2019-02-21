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
    queue* _traverse(int,bool*, queue*,int);
    bool no_incoming(int);
    public:
        graph(int);
        void add_path(int, int);
        queue* depth_first(int);
        queue* breadth_first(int);
};

#endif