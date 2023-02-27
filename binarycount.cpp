#include<iostream>
#include<array>
using namespace std;
int countOnes(int x){
	int remainder[100],y,sum=0 ;
	
for(y=0; x>0;y++){
		remainder[y]=x%2;
		x=x/2;
		
}
		cout<<y<<endl;

	for(int i=0; i<y;i++){
		if(remainder[i]==1)
		sum +=remainder[i];
		
		
	}
	cout<<sum;
	return 0;	
}
int main(){
	countOnes(15);
}