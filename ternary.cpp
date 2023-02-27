#include<iostream>
using namespace std;
int main(){
	float marks, max=20;
	string g= "Grade";
	cout<<"Enter your marks over 20: ";
	cin>>marks;
	(marks>10)? cout<<"You passed" : cout<<"You failed ";
//	(marks>=16) ? cout<<g +" A" : (marks>14) ? cout<< g +" B" : (marks>10) ? cout<<g +" C" : cout<<g +" D";
	string grade= (marks>=16) ? "A" : (marks>14) ? "B" : (marks>10) ? "C" : "D";
	cout<<endl;
	cout<<"Your grade is " +grade;
	
//    int a=12, b=25;
//    cout<<"a&b is "<<(a>>3)<<endl;
//	return 0;
	
}