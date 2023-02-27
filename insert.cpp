#include<iostream>
#include<array>
using namespace std;
int main(){
	int scores[]= {52, 78, 75, 68, 88, 63, 75, 90, 78};
	int item=10, k=9, len=sizeof(scores)/ sizeof(scores[0]), j=len-1;
	while(j>=k){
		scores[j+1]= scores[j];
		j=j-1;
	}
	scores[k]= item;
	for(int i=0; i<20; i++){
		cout<<scores[i]<<endl;
	}
	
	return 0;
}