#include<iostream>
using namespace std;
//struct Node{
//	int data;
//	Node *next;
//};
class Node{
	public:
	int data;
	Node *next;
	Node *head;
	Node(int a){
		this->data=a;
		next=NULL;
	}};

void display(Node *head){
	while(head!=NULL){
		cout<<head->data<<endl;
		head=head->next;
	}

};
int length(Node *head){
	int count=0;
	while(head!=NULL){
		count++;
		head=head->next;
	}
	return count;
}

void insert(Node *head,Node *new_object, int count,int position){
	if(count==position-1){
		Node *temp = head->next;
		head->next= new_object;
		new_object->head=temp;
		cout<<temp->next->data;
	}
	else{
		count+=1;
		insert(head->next, new_object, count, position);
	}
}

   
int main(){

	Node *f1= new Node(5);
	Node *f2= new Node(10);
	Node *f3= new Node(15);
	Node *f4= new Node(20);
	
	f1->next=f2;
	f2->next=f3;
	f3->next=f4;
	
	Node *f5 = new Node(7); 
	
	insert(f1,f5,0,2);
	
//	display(h);
	cout<<"The length is "<<length(f1);
	return 0;
}