#include<iostream>
#include<array>
using namespace std;
int reverse(int a){
	int arr[100], i=0, n=0;
	while(a!=0){
		arr[i]=a%10;
		a=a/10;
		i++;
		n++;
	}
	for(int i=0; i<n;i++){
		cout<<arr[i];
	}
	return 0;
}
int main(){
	int b;
	cout<<"Input the integer: ";
	cin>>b;
	reverse(b);
}