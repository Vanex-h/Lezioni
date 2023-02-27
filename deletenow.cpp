#include<iostream>
#include<array>
using namespace std;
int main(){
	int n=6,j,k,i,count=0,temp;
	int arr[n]={45,3,2,91,1,7};
	for(i=0;i<n;i++){
		for(j=0;j<n-1;j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				count=1;
			}
		}
		if(count==0){
			break;
		}
	}
	while(k<n){
		cout<<arr[k]<<endl;
		k++;
	}
	return 0;
}