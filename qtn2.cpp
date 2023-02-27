#include<iostream>
//#include<bits/stdc++.h>
using namespace std;

void reverseString(char string[]){
	if(*string=='\0'){
		return ;
	}
  	else{
  		reverseString(string +1);
  		cout<<*string;
	  }
}
int main(){
	char word[]="abc";
	reverseString(word);
	
}