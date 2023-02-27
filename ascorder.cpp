#include<iostream>
using namespace std;
int main(){
	int a, b, c;
	cout<<"Enter 3 numbers: ";
	cin>>a>> b>> c;
	if(a>b && a>c){
		if(b>c){
			cout<<a<<endl<<b<<endl<<c<<endl;
		}
		else if(c>b){
			cout<<a<<endl<<c<<endl<<b<<endl;
	}
	}
	else if(b>a && b>c){
		if(a>c){
			cout<<b<<endl<<a<<endl<<c<<endl;
		}
		else if(c>b){
			cout<<b<<endl<<c<<endl<<a<<endl;
	}
	}
	else if(c>b && c>a){
		if(b>a){
			cout<<c<<endl<<b<<endl<<a<<endl;
		}
		else if(a>b){
			cout<<c<<endl<<a<<endl<<b<<endl;
	}
	}

}