#include<iostream>
using namespace std;
int check(int a){
	if(a>0){
		cout<<"The nber is positive"<<endl;
		
	}
	else if(a==0){
		cout<<"The nber is zero"<<endl;
	}
	else if(a<0){
		cout<<"The nber is negative"<<endl;
	}
	return 0;
}
int main(){
	int b = (-5 );
	check(b);
	return 0;
}