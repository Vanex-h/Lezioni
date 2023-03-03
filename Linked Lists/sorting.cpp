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
Node *merge(Node *a, Node *b){
	if(a==NULL)
	return b;
	if(b==NULL)
	return a;
	Node *c;
	if(a->data<b->data){
	c=a;
	c->next=merge(a->next,b);
	}
	else{
		c=b;
		c->next= merge(a, b->next);
	}
	return c;
}
Node *mid_point(Node *head){
	if(head == NULL || head->next == NULL)
 	return head;

	Node *fast=head;
	Node *slow=head;
	while(fast!=NULL && fast->next!=NULL){
		fast=fast->next;
		if(fast->next==NULL)
			break;
		
			fast=fast->next;
			slow=slow->next;
	}
	return slow;
}
Node* merge_sort(Node *head){
	if(head==NULL || head->next==NULL){
		return head;
	}
	Node *mid=mid_point(head);
	Node *a=head;
	Node *b=mid->next;
	mid->next=NULL;
	a=merge_sort(a);
	b= merge_sort(b);
	Node *c=merge(a,b);
	return c;
}
void display(Node *head){
	while(head!=NULL){
		cout<<head->data<<endl;
		head=head->next;
	}
}
int main(){
	Node *n1=new Node(35);
	Node *n2=new Node(27);
	Node *n3=new Node(9);
	Node *n4=new Node(15);
	n1->next=n2;
	n2->next=n3;
	n3->next=n4;
	n4->next=NULL;
	Node *head=n1;
	head=merge_sort(head);
	
	display(head);
	return 0;
}