#include<iostream>
using namespace std;
int main(){
	int arr[]={10,20,30,40,50};
	int *p=arr;
//	cout<<*(p)<<endl;
//	cout<<*(p+1)<<endl;
//	cout<<*(p+2)<<endl;
//	cout<<*(p+3)<<endl;
//	cout<<*(p+4)<<endl;
	for (int i=0; i<5;i++){
		cout<<"The address of &arr["<<i<<"]=";
		cout<<&arr[i]<<endl;
	}	
	for(int i=0; i<5;i++){
		cout<<"P +"<<i<<"= "<<(p+i)<<endl;
	}
	int a = 15;
int b = 20;
int *c = &b;
*c = 15;
cout << a <<" "<< b << endl;

//	cout<<p<<endl;
//	cout<<*p<<endl;
//	char c='d';
//	char *p2=&c;
//	cout<<"The size of i: "<<sizeof(i)<<endl;
//	cout<<"The size of c: "<<sizeof(c)<<endl;
//	cout<<"The size of p: "<<sizeof(p)<<endl;
//	cout<<"The size of p2: "<<sizeof(p2)<<endl;
}