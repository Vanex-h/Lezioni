#include<iostream>
#include<array>
#include<string>
//#include<bits/stdc++.h>
using namespace std;
bool ispalindrome(char str[],int s, int e){

	if(s>=e){
		return true;
	}
	
	if(str[s]=str[e]){
		return ispalindrome(str,s+1,e-1);
	}
	else{
		return false;
	}
}
int main () {
	string num="mum";
 int x=15; 
 cout<<toupper('r');
return 0;
}

