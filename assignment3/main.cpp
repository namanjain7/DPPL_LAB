#include<iostream>
#include"graph.h"
#include"queue.h"

int main(){
    graph *g1 = new graph(5);
    g1->add_path(0,1);
    g1->add_path(0, 3);
    g1->add_path(0, 4);
    g1->add_path(1, 2);
    queue *path = g1->depth_first(0);
    queue *path1 = g1->breadth_first(0);
    path->display();
    path1->display();
}
