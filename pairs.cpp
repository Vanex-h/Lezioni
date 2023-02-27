#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int a, b;
	int counter=0;
	for(int i=2; i<100;i++){
		for(int j=2; j<100;j++){
			if(sqrt(pow(i,2) + pow(j,2)) - int(sqrt(pow(i,2)+ pow(j,2)))==0){
				counter++;
				if(i>j)
				cout<<"("<<i<<","<<j<<")"<< endl;
				else{
					cout<<"("<<i<<","<<j<<")"<<endl;
				}
			}
//			cout<<i<<" "<<j<< endl;
			
		}
	}
	   cout<<"Found "<<counter<<" pairs!";
   	return 0;
}