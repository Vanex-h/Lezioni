#include<iostream>
#include<Windows.h>
#include<conio.h>
using namespace std;
int main(){
	string s;
	int i=5;
	while(i<10){
	
		char ch; 
		ch = _getch();
	

		 if(int(ch)== 13){
			cout<<endl<<endl;
		}
		 if(ch== 'q'){
			goto terminate;
		}
		else{
			cout<<ch;
		}
	}
	terminate:
	cout<<"\nYou terminated the program";
}