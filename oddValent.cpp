#include<iostream>
#include<array>
using namespace std;
int isOddValent(int arr[], int n){
	int i=0,count=0,num=0;

	for(int i=0; i<n;i++){
		if(arr[i]%2!=0){
			count++;
			for(int k=0; k<n;k++){
				if(arr[i]==arr[k]){
					num++;
				}
			}
		}
		
	}
	if(num>n){
		cout<<"1";
	}
	else if(num<n){
		cout<<"0";
	}
	
	return 0;
}
int main(){
	int a[]={2,2,2,4,4};
	isOddValent(a, 5);
	
}