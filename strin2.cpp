#include<iostream>

#include<string.h>
using namespace std;
int main(){

char p;
cout<<"Enter the character: ";
cin>>p;
if(isdigit(p)==false){
	cout<<"You entered a letter"<<endl;
}
 if(isalpha(p)==false){
	cout <<"You entered a number"<<endl;
}

}