#include<iostream>

typedef struct node{
	int data;
	struct node* next;
}Node;
typedef struct head{
	int length;
	Node* linked_list;
}Head;


void add(Head *head, int x){
	if(head == NULL){
		printf("No such list found!\n");
		return;
	}
	if(head->linked_list == NULL){
		Node *temp = new Node;
		temp->data = x;
		temp->next = NULL;
		head->linked_list = temp;
		head->length = head->length + 1;
		return;
	
	}
        Node* traverse = head->linked_list;
	while(traverse->next != NULL){
		if(traverse->data == x){
			printf("%d already exists\n",x);
			return;
		}
		traverse = traverse->next;
	}
	Node *temp = new Node;
	temp->data = x;
	temp->next = NULL;
	traverse->next = temp;
	head->length = head->length + 1;
}

void remove(Head *head, int x){
	if(head == NULL){
		printf("No such list found!\n");
		return;
	}
	if(head->linked_list == NULL){
		return;
	}
	Node *temp = head->linked_list;
	if(temp->data == x){
		head->linked_list = temp->next;
		delete temp;
	}
	while(temp->next!=NULL){
		if(temp->next->data == x){
			Node *nex = temp->next;
			temp->next = nex->next;
			delete nex; 
		}
		temp=temp->next;	
	}

}

Head* build(int *arr, int lenght){
	Head* head = new Head;
	head->length=0;
	head->linked_list =NULL;
	for(int i = 0;i<lenght;i++){
		add(head,arr[i]);
	}
	return head;	
}

void enumerate(Head *head){
	if(head == NULL){
		printf("No such list found!\n");
		return;
	}
	if(head->linked_list == NULL){
		printf("List is empty\n");
		return;
	}
	Node* temp = head->linked_list;
	while(temp != NULL){
		printf("%d\n",temp->data);
		temp = temp->next;
	}
}



int size(Head *head){
	if(head == NULL){
		printf("No such list found!\n");
		return 0;
	}
	return head->length;
}

bool is_empty(Head *head){
	if(head == NULL){
		printf("No such list found!\n");
		return 1;
	}
	return (head->length == 0);

}

bool is_element_of(Head *head, int x){
	if(head == NULL){
		printf("No such list found!\n");
		return 0;
	}
	if(head->linked_list == NULL){
		return 0;
	}
	
	Node *temp = head->linked_list;
	while(temp != NULL){
		if(temp->data == x){
			return true;
		}
		temp = temp->next;
	}
	return false;
}

int main(){
	int l = 10;
	int arr[l];
	for(int i =0 ;i<l;i++){
		arr[i] = i * 2;
	}
	Head *head1 = build(arr,l);
	enumerate(head1);
	printf("%d\n",size(head1));
	printf("%d\n",is_element_of(head1,6));
}
