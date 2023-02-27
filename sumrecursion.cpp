#include<iostream>
using namespace std;

int sum(int n){
	int count=0;
		while(n>0){
		n=n/10;
		count++;
	}
	
	return count;
}
int main(){
	cout<<sum(4566);
}