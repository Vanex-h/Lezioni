#include <iostream>
#include<array>
using namespace std;
int largeAndMinimum(int arr[]){
	int n=0, j=0;
	while(arr[j]!=0){
		n++;
		j++;
	}
	int max=0, min=arr[0];
	for(int i=0; i<n;i++){
		if(arr[i]>max){
			max=arr[i];
		}
		else if(min>arr[i]){
			min=arr[i];
		}
	}
	cout<<"The max number is: "<<max<<endl;
	cout<<"The min number is: "<<min<<endl;
	return 0;
	
}
int main(){
	int a[]={12,17,6,4,9,3,28,52,11,41};
	largeAndMinimum(a);
}