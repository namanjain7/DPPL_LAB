#include<iostream>
#include"graph.h"
#include"queue.h"

int main(){
    graph *g1 = new graph(4);
    g1->add_path(0,2);
    g1->add_path(0,1);
    g1->add_path(2,0);
    g1->add_path(2,3);
    g1->add_path(3,3);
    g1->add_path(1,2);
    queue *path = g1->depth_first(2);
    queue *path1 = g1->breadth_first(2);
    path->display();
    path1->display();
    
}
