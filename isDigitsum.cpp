#include<iostream>
#include<array>
using namespace std;

int isDigitSum(int n, int m){
	int k=0, sum=0, sum2=0;
	for(int i=0; i<n; i++){
		k=n%10;
		sum +=k;
		n=n/10;
	}
		for(int i=0; i<m; i++){
		k=m%10;
		sum2 +=k;
		m=m/10;
	}
	if(sum>sum2){
		cout<<"0";
		
	}
	else{
		cout<<"1";
	}
	return 0;
}
int main(){
	isDigitSum(11, 32);
}