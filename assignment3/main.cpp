#include<iostream>
#include"graph.h"
#include"queue.h"

int main(){
    graph *g1 = new graph(4);
    g1->add_path(0,1);
    g1->add_path(0,3);
    g1->add_path(3, 2);
    queue *path = g1->traverse(0);
    path->display();
}
