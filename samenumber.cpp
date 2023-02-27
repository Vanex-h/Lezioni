#include<iostream>
#include<array>
using namespace std;
int recursive(int a[], int b[]){
	int i=0,j=0, count=0, count2=0;
	while(a[i]!=NULL){
		i++;
		count++;
	}
	while(a[j]!=NULL){
		j++;
		count2++;
	}
	for(int l=0;l<count;l++){
		for(int k=0;k<count2;k++){
			if(a[l]==b[k]){
				cout<<a[l]<<endl;
			}
		}
	}
}
int main(){
	int arr[]={3,4,5,6,7};
	int boo[]={2,1,6,9,3};
	recursive(arr,boo);
}