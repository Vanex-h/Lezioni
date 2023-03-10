#include<iostream>
using namespace std;
template<typename T>
struct Queue {
	int front, rear,capacity;
	T *arr;
	Queue(int c) {
		front=rear=0;
		capacity=c;
		arr=new T[capacity];
	}
	void enqueue(T data) {
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
		int i;
		if (front == rear) {
			cout<<endl<<"Queue is Empty!"<<endl;
			return;
		}
// traverse front to rear and print elements
		for (i = front; i < rear; i++) {
			cout<<" "<< arr[i];
		}
	}
	void readFront() {
		if(front==-1) {
			cout<<"Queue underflow"<<endl;
			return ;
		}
		cout<<"Element at front is:"<<arr[front]<<endl;
	}
};
int main() {
	Queue<int> q(4); // Create a queue of capacity 4
	q.display(); // print Empty Queue
	q.enqueue(10); // inserting elements in the queue
	q.enqueue(300);
	q.enqueue(800);
	cout<<"Call Display when some 3 elements added"<<endl;
// print Queue elements
	q.display();
	q.dequeue();
	q.dequeue();
	cout<<endl<< " Display after two node deletion"<<endl;
// print Queue elements
	q.display();
// print front of the queue
//	int frontElement= q.front;
	cout<<endl;
	q.readFront();
	
	Queue<string> names(5);
	names.enqueue("Jean");
	names.enqueue("Axelle");
	names.enqueue("Vanessa");
	names.display();
	return 0;
}