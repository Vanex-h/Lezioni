#include<iostream>
#include<bits/stdc++.h>
using namespace std;
	
void printChar(char string[]){
	if(string[0]=='\0'){
		return ;
	}
	cout<<string[0];
	
	return printChar(string+1);
}
int main(){
	char word[]="abc";
	printChar(word);
}