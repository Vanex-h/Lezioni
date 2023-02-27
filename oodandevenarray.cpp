#include<iostream>
#include<array>
#include<math.h>
using namespace std;
int difference(int arr[]){
	int evensum=0, oddsum=0;
	int n= 0;
	while (arr[n]!=NULL){
		n++;
	}
	for(int i=0; i<n; i++){

		if(arr[i]%2==0){
			evensum +=arr[i];
		}
		else if(arr[i]%2!=0){
			oddsum +=arr[i];
		}
	}
    int diff=oddsum-evensum;
	cout<<diff<<endl;
	return 0;
	
}
int main(){
	int a[]={3,2,3,4};
	difference(a);
}
