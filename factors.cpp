#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter a number: ";
	cin>>n;
	if(n%3==0){
		cout<<"Pling";
	}
	 if(n%5==0){
		cout<<"Plang";
	}
	 if(n%7==0){
		cout<<"Plong";
	}
	 if (n%3!=0 && n%5!=0 && n%7!=0){
		cout<<n;
	}
	return 0;
}