#include<iostream>
using namespace std;
int queue[100],n=100,front=-1,rear=-1;
struct Queue {
	int front, rear,capacity;
	int *arr;
	Queue(int c) {
		front=rear=0;
		capacity=c;
		arr=new int;
	}
	void enqueue(int data) {
		int val;
		if(capacity==rear) {
			cout<<"Queue overflow/full"<<endl;
			return;
		}
		arr[rear]=data;
		rear++;
		return;

	}
	void dequeue() {
		if (front == rear) {
			cout<<"Queue Underflow/Empty ";
			return ;
		}
		for(int i=0; i<rear-1; i++) {
			arr[i]= arr[i+1];
		}
		rear--;

	}
	void display() {
		int i=0;
		if (front == rear) {
			cout<<endl<<"Queue is Empty!"<<endl;
			return;
		}
		for (i = front; i < rear; i++) {
			cout<<" "<< arr[i];
		}
	}
int readFront() {
	if(front==-1) {
		cout<<"Queue underflow"<<endl;
		return 0;
	}
	return arr[front];
}
};
int main() {
	Queue q(4); 
	q.display();
	q.enqueue(10); 
	q.enqueue(300);
	q.enqueue(800);	q.enqueue(900);
//	cout<<"Call Display when some 3 elements added"<<endl;
	q.display();
	q.dequeue();
	q.dequeue();
	cout<<endl<< " Display after two node deletion"<<endl;
	q.display();
	int frontElement= q.readFront();
	cout<<endl<< "Reading the front element" <<endl<<"Front :"<<frontElement<<endl;
	return 0;
}