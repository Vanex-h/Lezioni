#include<iostream>
#include <bits/stdc++.h>
#include<array>
using namespace std;

void replaceA(char arr[], char letone, char letwo){
	
	if(arr[0]=='\0'){
		return ;
	}
	if(arr[0]==letone){
		arr[0]=letwo;
	
	}

	cout<<arr[0];
	return replaceA(arr+1,letone, letwo);
}
int main(){
	
	char arr[]="abacadaba";
	replaceA(arr,'a','g');
	
}
