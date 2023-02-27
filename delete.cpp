#include<iostream>
#include<array>
using namespace std;
int main(){
	int scores[]= {52, 78, 75, 68, 88, 63, 75, 90, 78};
	int n=9, k=3, j=k;
	while(j<n-1){
		scores[j]= scores[j+1];
		j=j+1;
	}
	n=n-1;
	for(int i=0; i<n; i++){
		cout<<scores[i]<<endl;
	}
	return 0;
}