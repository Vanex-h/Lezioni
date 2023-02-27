#include<iostream>
#include<array>
using namespace std;
int isDaphne(int arr[], int n){
	 int evencount=0, oddcount=0;

	for(int i=0; i<n;i++){
		if(arr[i] %2==0){
			evencount++;
		}
		else if(arr[i]%2!=0){
			oddcount++;
		}
	}
	
	if(evencount==n || oddcount==n){
		cout<<"1";
	}
	else{
		cout<<"0";
	}
	
}
int main(){
	int b[]={3,5,4,-7};
	isDaphne(b,3);
	
}
