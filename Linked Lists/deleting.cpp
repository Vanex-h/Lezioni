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
Node* deleteFirstNode(Node *head ) {
	Node* temp=head;
	head=temp->next;
	delete temp;
	return head;
}
Node* deleteLastNode(Node *head) {

	Node *sl=head;

	while(sl->next->next!=NULL) {
		sl=sl->next;
		cout<<sl;
	}
	free(sl->next);
	sl->next=NULL;
	return sl;
}
Node* deleteSecondLast(Node *head) {
	Node *sl=head;
	Node *ptr=head;
	while(sl->next->next->next != NULL) {
		sl=sl->next;
	}
	while(ptr->next->next!=NULL) {
		ptr=ptr->next;
	}
	sl->next=ptr->next;
	free(ptr);
	return sl;
}
	
	
void display(Node *head) {
	while(head!=NULL) {
		cout<<head->data<<endl;
		head=head->next;
	}
}
Node* deleteNode(Node* head, int i){
	if(i<=0){
		return head;
	}
	if(i==1&&head){
		Node* newNode= head;
		head=newNode->next;
		delete newNode;
		return head;

	}
	Node* temp=head;
	int count=1;
	while(count<i-1 && temp!=NULL){
		temp= temp->next;
		count++;
	}
	if(temp&&temp->next){
		Node *curr=temp->next;
		temp->next= temp->next->next;
		curr->next=NULL;
		delete curr;
		return head;
	}
	return head;
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
	head=deleteNode(head,5);
	display(head);
	return 0;
}