#include<iostream>
using namespace std;
int main(){
	double quot, one, two;
	int remain;
	cout<<"Enter the two numbers: ";
	cin>>one >>two;
	quot= one / two;
	remain= int(one) % int(two);
	cout<<endl<<"The quotient is "<<quot<<" and the remainder is "<<remain;

}