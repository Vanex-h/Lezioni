#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int fib(int n){
	if(n==0){
		return 0;
	}
	if(n==1){
		return 1;
	}
	int smallo= fib(n-1);
	int big=fib(n-2);
	return fib(n-1) + fib(n-2);
}
int countZeroes(int n){
	if(n==0){
		return 0;
	}
	if(n==1){
		return 1;
	}
	int smalldig= countZeroes(n/10);
	int last_digit=n%10;
	if(last_digit==0){
		return 1+smalldig;
	}
	else{
		return smalldig;
	}
}
int main(){
	cout<<fib(3)<<endl;
	return 0;
}