#include"hstb.h"
hashtable::hashtable(){
    for(int i =0;i<9;i++){
        bucket[i] = NULL;
    }
    eol = new node;
    eol->data=-1;
    eol->key=-1;
    eol->next=NULL;
    eol->prev=NULL;
}

int hashtable::hashfunction(int key){
    return key % 9;
}

int hashtable::insert(int key, int data){
    int bucket_index = hashfunction(key);
    node *new_node = new node;
    new_node->data=data;
    new_node->key=key;
    new_node->next=NULL;
    new_node->prev=NULL;
    if(bucket[bucket_index]==NULL){
        bucket[bucket_index] = new_node;
    }else{
        node *temp = bucket[bucket_index];
        while(temp->next!=NULL){
            if(temp->key==key){
                return 0;
            }
            temp=temp->next;
        }
        temp->next=new_node;
        new_node->prev = temp;
    }
    return 1;
}

node* hashtable::search(int key){
    int bucket_index = hashfunction(key);
    if (bucket[bucket_index] == NULL){
        return eol;
    }else{
        node *temp = bucket[bucket_index];
        while (temp != NULL){
            if (temp->key == key){
                return temp;
            }
            temp = temp->next;
        }
    }
    return eol;
}

int hashtable::del(int key){
    int bucket_index = hashfunction(key);
    if (bucket[bucket_index] == NULL){
        return 0;
    }else{
        node *prev = bucket[bucket_index];
        if(prev->key == key){
            bucket[bucket_index] = prev->next;
            bucket[bucket_index]->prev = NULL;
            delete prev;
            return 1;
        }
        node *temp = prev->next;
        while (temp != NULL){
            if (temp->key == key){
                prev->next = temp->next;
                temp->next->prev = prev;
                delete temp;
                return 1;
            }
            prev = prev->next;
            temp = prev->next;
        }
    }
    return 0;
}
node* hashtable::operator[](int index){
    return search(index);
}

node* hashtable::eof(){
    return eol;
}