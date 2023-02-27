#include<iostream>
#include<array>
using namespace std;
int isAllPossibilities(int a[], int len){
	if(len==0){
		return 1;
	}
	int max=0, count=0;
	for(int i=0; i<len; i++){
		if(a[i]>max){
			max=a[i];
		}
	}
	for(int i=max;i>=0;i--){
		
		for(int j=0; j<len; j++){
			if(i==a[j]){
				count++;
			}

		}
	}
	
	if(count==max+1){
		cout<<"1";
	}
	else {
		cout<<"0";
	}
	
	return 0;       
	
}
int main(){
	int arr[]={0,1,2};
	isAllPossibilities(arr,3);
}