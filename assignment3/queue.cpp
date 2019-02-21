#include"queue.h"
#include<iostream>
node::node(int Tdata, node *Tnext = NULL){
    data = Tdata;
    next = Tnext;
}

bool queue::is_empty(){
    return head->data == 0;
}

bool queue::dequeue(){
    if(is_empty()){
        return 0;
    }
    node *temp = head->next;
    head->next = head->next->next;
    delete(temp);
    head->data = head->data - 1;
    if(head->data==0){
        end_ = NULL;
    }
    return 1;
}

void queue::enqueue(int Tdata){
    head->data = head->data + 1;
    if(end_ == NULL){
        node *temp = new node(Tdata);
        head->next = temp;
        end_ = temp;
        return;
    }
    node *temp = new node(Tdata);
    end_->next = temp;
    end_=temp;
}

queue::queue(){
    head = new node(0);
    end_ = NULL;
}

int queue::peek(){
    if(is_empty()){
        return -1;
    }
    return head->next->data;
}

void queue::display(){
    if(is_empty()){
        return;
    }
    for(node *temp = head->next; temp != NULL;temp=temp->next){
        std::cout<<temp->data<<"\t";
    }
    std::cout<<"\n";
}
