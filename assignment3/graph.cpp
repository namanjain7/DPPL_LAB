#include"graph.h"
graph::graph(int Trows){
    rows = Trows;
    arr = new bool*[rows];
    for( int i = 0 ; i < rows ; i++ ){
        arr[i] = new bool[rows];
    }
    for(int i = 0 ; i < rows ; i++){
        for(int j = 0 ; j < rows ; j++){
            arr[i][j] = 0;
        }
    }
}

void graph::add_path(int from, int to){
    arr[from][to] = 1;
}

queue* graph::traverse_(int start_point, bool* visited,queue *path_queue,int no_visited){
    if(no_visited == rows){
        return path_queue;
    }
    path_queue->enqueue(start_point);
    visited[start_point] = 1;
    no_visited++;
    for(int i = 0 ; i < rows ; i++){
        if(arr[start_point][i] && !visited[i] && i != start_point){
            path_queue = traverse_(i,visited,path_queue,no_visited);
        }
    }
    return path_queue;
}

queue* graph::_traverse(int start_point, bool *visited, queue *path_queue, int no_visited){
    if (no_visited == rows){
        return path_queue;
    }
    for (int i = 0; i < rows; i++){
        if (arr[start_point][i] && !visited[i] && i != start_point){
            path_queue->enqueue(i);
        }
    }
    for (int i = 0; i < rows; i++){
        if (arr[start_point][i] && !visited[i] && i != start_point){
            path_queue = _traverse(i,visited,path_queue,no_visited);
        }
    }
    return path_queue;
}

queue* graph::depth_first(int start_point){
    bool visited[rows] = {0};
    queue *path = new queue();
    return traverse_(start_point,visited,path,0);
}

queue* graph::breadth_first(int start_point){
    bool visited[rows] = {0};
    queue *path = new queue();
    path->enqueue(start_point);
    visited[start_point] = 1;
    return _traverse(start_point, visited, path, 1);
}

bool graph::no_incoming(int node){
    for(int i = 0 ; i < rows ; i++){
        if(node == i){
            continue;
        }
        if(arr[i][node]){
            return 0;
        }
    }
    return 1;
}
