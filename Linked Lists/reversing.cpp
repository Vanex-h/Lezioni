#include<iostream>
using namespace std;
class Node {
	public:
		int data;
		Node *next;
		Node(int data) {
			this->data=data;
			this->next=NULL;
		}
};
Node* reverse(Node* head){
	Node *current=head;
	Node *previous=NULL;
	Node *n=NULL;
	while(current!=NULL){
		n=current->next;
		current->next=previous;
		previous=current;
		current=n;
	}
	return previous;
}
void display(Node *head) {
	while(head!=NULL){
		cout<<head->data<<endl;
		head=head->next;
	}
}
int main() {
	Node *n1=new Node(5);
	Node *n2=new Node(7);
	Node *n3=new Node(9);
	Node *n4=new Node(15);
	Node *n5= new Node(17);
	Node *n6= new Node(20);
	n1->next=n2;
	n2->next=n3;
	n3->next=n4;
	n4->next=n5;
	n5->next=n6;
	n6->next=NULL;
	Node *head=n1;
	head=reverse(head);
	display(head);
	return 0;
}