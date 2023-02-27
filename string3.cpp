#include<iostream>
#include<string.h>
using namespace std;
int main(){
	string words= "Van is short";
//	cout<<"Enter the words: ";
// 	cin>>words;
	int count=0;
	int spaces=0;
	int num=1;
	int i;
//	int size= sizeof(words)/sizeof(words[0]);
	for(i=0; i<sizeof(words); i++){
		if(isblank(words[i])==true){
			spaces++;
			num++;
		}
		else{
			count++;
		}
	}
	cout<<"Number of characters without spaces are: "<<count<<endl;
	cout<<"Number of characters with spaces are: "<<spaces<<endl;
	cout<<"Number of words are: "<<num<<endl;
	cout<<words;	
}                                                               
                       	                         
	                       						                                                       