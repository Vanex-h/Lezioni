#include<iostream>
#include<array>
using namespace std;
int isFilter(int arr[], int len){
	int count=0, min=0, thir=0, eleven=0;
	for(int i=0; i<len; i++){
		switch(arr[i]){
			case 9:
				for(int j=0; j<len;j++){
					if(arr[j]==11){
						cout<<"1";
						exit(-1);
					}
					else{
						min++;
					}
				}
				break;
			case 7:
				for(int n=0;n<len;n++){
					if(arr[n]==13){
						cout<<"0";
						exit(-1);}
					else if(arr[n]!=13){
						count++;
					}
				}
			break;	
			case 11:
			eleven++;
			break;
		
			case 13:
			thir++;
			break;}
	}
		if(count>=len || thir>0 || eleven>0){
			cout<<"1";
		}
	    else if(min>=len){
			cout<<"0";
		}
	
		return 0;
}
int main(){
	int a[]={ 2, 3, 9, 6};
	isFilter( a, 6);
	return 0;
}