#include<iostream>
using namespace std;
int partition(int a[], int s, int e){
	int i=s;
	int pivot=a[e];
	for(int j=s; j<e;j++){
		if(a[j]<pivot){
			swap(a[i], a[j]);
			i++;
		}
	}
	swap(a[i], a[e]);
	return i ;
}
void quickSort(int a[], int s, int e){
	if(s>=e){
		return ;
	}
	int p=partition(a,s,e);
	quickSort(a,s,p-1);
//	for(int i=0;i<11;i++){
//		cout<<a[i]<<"\t";
//	}
//	cout<<endl;
	quickSort(a, p+1,e);
}
int main(){
	int a[]={1,2,3,9,8,5,2,7,6,3,1};
	quickSort(a,0,10);
	int k=0;
	cout<<endl;
	while(k<11){
		cout<<a[k]<<" ";
		k++;
	}
	return 0;
}