#include<iostream>
using namespace std;
class Node{
	public:
	int data;
	Node *next;
	Node(int data){
		this->data=data;
		this->next=NULL;
	}
};
int search(Node *head, int d){
int index=1;
	while(head !=NULL){
		if(head->data==d){
			return index ;
		}
		head= head->next;
		index++;
	}
	return index;
}
int main(){
	Node *n1=new Node(5);
	Node *n2=new Node(7);
	Node *n3=new Node(9);
	Node *n4=new Node(15);
	n1->next=n2;
	n2->next=n3;
	n3->next=n4;
	n4->next=NULL;
	Node *head=n1;
	cout<<search(head,9);
	return 0;
}