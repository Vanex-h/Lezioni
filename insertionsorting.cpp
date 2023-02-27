#include<iostream>
#include<array>
using namespace std;
int main(){
	int n=6, arr[n]={6,2,4,9,3,7}, key,i, j,k;
	for(i=1;i<n;i++){
		key=arr[i];
		j=i-1;
		while(j>=0 && arr[j]>key){
			arr[j+1]=arr[j];
			j--;
		}
		cout<<j<<" and "<<i<<endl;
			arr[j+1]=key;
	}
	while( k !=n){
		cout<<arr[k]<<endl;
		k++;
	}
}