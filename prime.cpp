#include<iostream>
#include<math.h>
using namespace std;
int main(){
float product=1;
    for(int i=2;i<=100;++i){  
	 int ctr=0; 
	 for(int j=2;j<=sqrt(i);++j){   
	 if(i%j==0)
		ctr=1;
        }

        if(ctr==0) {
		product *= i;
		
		}
		
                

    }
    cout<<"The product of prime numbers between 1 and 100 is: "<<product;

    return 0;
}