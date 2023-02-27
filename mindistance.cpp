#include<iostream>
using namespace std;
int factors(int x){
	int arr[100];
	int count=0;
	for(int i=1; i<=x; i++){
		if (x%i==0){
			arr[count]=i;
			count++;
		}
		
	}
	int n=count-1;
	int diffs[100];
	int diff=0;
	for(int j=0; j<count;j++){
		diff=arr[j+1]-arr[j];
		diffs[j]=diff;
	 
	}
	int min=diffs[0];
	for(int h=0; h<n;h++){
		if(diffs[h]<min){
			min=diffs[h];
		}
	}
	cout<<"The smallest difference is: "<<min;
				
	
	return 0;
} 
int main(){
	factors(8);
	return 0;
}     
	
		

	           
	
		
