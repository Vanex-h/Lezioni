#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int n;

	cout<<"Enter how many numbers u want: ";
	cin>>n;
	

	
		int total=0;
		int numb=0;
	for(int i=0; i<n;i++){
		int number;
		label:
		cout<<"Input the number: ";
		cin>>number;
		if (number<=0){
			goto label;
		}
		
		else if(number==1){
			cout<<"You have terminated the program"<<endl;
			goto terminate;
			cout<<"huuh";
		}
		total =total+ number;
		numb++;
	
		
	}
	terminate:
	float average= (float)total / (float)numb;
	cout<<"The sum is: "<<total<<endl;
	cout<<"The average is : "<<average<<endl;
	
   
				
	return 0;
}
