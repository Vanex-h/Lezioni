#include<iostream>
using namespace std;
void swap(int x, int y){
	int z;
	z=x;
	x=y;
	y=z;
	cout<<"After swapping the 1st number is : "<<x<<endl;
	cout<<"After swapping the 2nd number is : "<<y<<endl;
}
int main(){
	int one, two;
	cout<<"Input 1st number: ";
	cin>>one;
	cout<<endl;
	cout<<"Input 2nd number: ";
	cin>>two;
	swap(one,two);
	
}