#include<iostream>
#include<array>
using namespace std;

void merge(int *a, int s, int e){
	int mid=(s+e)/2;
	int i=s,k=s;
	int j=mid+1;
	int temp[100];
	while(i<=mid&&j<=e){
		if(a[i]<a[j]){
			temp[k++]=a[i++];
		}
		else{
			temp[k++]=a[j++];
		}
	}
	while(i<=mid){
		temp[k++]=a[i++];
	}
	while(j<=e){
		temp[k++]=a[j++];
	}
	for(int i=s; i<=e;i++){
		a[i]=temp[i];
	}
}
void mergeSort(int a[], int s, int e){
	if(s>=e){
		return;
	}
	int mid=(s+e)/2;
	mergeSort(a,s,mid);
	mergeSort(a,mid+1,e);
	merge(a,s,e);
}

int main(){
	int arr[]={3,87,23,1,43,6,57,9}, n=8,k=0,check;
mergeSort(arr,0,7);
	while( k!=n){
		cout<<arr[k]<<" \t";
		k++;
	}
	return 0;
}

	//----------------------FOR SELECTION SORT------------------------------//
//	for(int i=0; i<n-1;i++){
//	int smallestIndex=i;
//	for(int j=i+1;j<n;j++){
//		if(arr[smallestIndex]>arr[j]){
//			smallestIndex=j;
//		}
//	}
//	swap(arr[smallestIndex], arr[i]);
//	}

























