#include<iostream>
#include<string.h>
using namespace std;
int main(){
	string s= "VAN e s sa";
	for (int i=0; i<sizeof(s);i++){
		if(isblank(s[i])== true){
			spaces++;
		}
	}
	cout<<"The spaces are: "<<spaces;
	
	
}