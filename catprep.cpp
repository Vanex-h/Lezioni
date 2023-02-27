#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main(){
	int hypo,sqhypo,count=0;
	for(int i=2; i<100;i++){
		for(int j=i; j<100;j++){
			sqhypo=(pow(i,2)+ pow(j,2));
			hypo=sqrt(sqhypo);
			if(pow(hypo,2)==sqhypo){
				count++;
				cout<<i<<" "<<j<<endl;
			}
		}
	}
	cout<<count;
	
}