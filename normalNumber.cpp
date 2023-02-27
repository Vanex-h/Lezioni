#include<iostream>
using namespace std;
int isNormal(int n){
	int count=0, min;
	for(int i=2; i<=n;i++){
		if(n%i==0){

			if(i%2==0){
				count++;
				
			}
		else{
		 min++;
			
			
		}
	}
}
	if(min<1){
		cout<<"1";
	}
	else if(min>=1) {
		cout<<"0";
	}

	return 0;
}
int main(){
	isNormal(8);
}