#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int countDigit(int b, int a){
	int arr[100];
	int count=0, times;
	int i=0;
	if(b<0){
		cout<<"You entered a negative nber";
		return 0;
	}
	else{
	while(b!=0){	
		arr[i]=b%10;
		b= b/10;
		i++;
		count++;
	}

  for(int j=0;j<count;j++){

  	if(arr[j]==a){
  		times++;
	  }
  }
  cout<<times;

  }
}
int main(){
	countDigit(355582,5);
//	return 0;
}