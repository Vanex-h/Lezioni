#include<iostream>
#include<array>
using namespace std;
int main(){
	int arr[100], n, index;
	cout<<"Enter the number of elements you're going to enter: ";
	cin>>n;
	if(n%2==0){
		exit(1);
	}
	for(int i=0; i<n;i++){
		cout<<endl<<"Enter the number at the "<<i<<"th position: ";
		cin>>index;
		arr[i]=index;
	}
	int mid= n/2;
	int middle=arr[mid];
	int count=0, minus=0;
	for(int x=0;x<n;x++){
		if(x==mid){
			continue;
		}
		if(arr[x]>middle){
			count++;
		}
		else if(arr[x]<middle){
			minus++;
		}
//		else if(arr[x]=middle){
//			minus;
//		}

	}

	if(0<minus){
		cout<<"0";
	}
	else {
		cout<<"1";
	}
	
}