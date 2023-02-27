#include<iostream>
#include<math.h>
using namespace std;
int nthPrime(int nth){
	int count=0;
		for(int i=2; i<100;i++){
		int n=0;
		for(int j=2; j<=sqrt(i); j++){
			if(i%j==0){
				n=1;
			}
			
		}
		if(n==0) {
		count++;
	if(count==nth){
		cout<<"The prime number is: "<<i<<endl;
	}
		}
	}

}
int main(){
	
	nthPrime(6);
	return 0;

	
}