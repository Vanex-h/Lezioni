#include<iostream>
using namespace std;
void binarySearch(int arr[], int s, int e, int key){
	cout<<"start "<<s<<endl;
	cout<<"end "<<e<<endl;
	if(s>e){
		cout<<"Not found ";
		return ;
	}
	int mid= (s+e)/2;
	if(arr[mid]==key){
		cout<<"Element at "<<mid<<endl;
		return;
	}
	else if(arr[mid]>key){
		 binarySearch(arr, s, mid-1,key);
	}
	else if(arr[mid]<key){
		 binarySearch(arr,mid+1,e,key );
	}
	
}
int main(){
	int a[]={2,7,8,9,11,13,18,24,32,36,40,50};
	binarySearch(a,0,11,25);
	return 0;
}