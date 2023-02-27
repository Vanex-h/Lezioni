#include<iostream>
using namespace std;
//int main(){
//	int age;
//	string fname, lname;
//    cout<<"Enter ur fname: ";
//    getline(cin, fname);
//	cout<<"Enter ur lname: ";
//    cin.ignore();
//    getline(cin, lname);
//    cout<<"Enter your age: ";
//    cin>>age;
//    cout<<"my name is "<<fname << " "<<lname <<" and I'm "<<age;
//	return 0;}
namespace finance{
	int amount=1000;
	int powered(){
		return amount*amount;}
	}
	
	int amount=2000;
	
	int main(){
		int cout=3000;
		cout<<"The local amount is "<<cout;
		cout<< "The global amout is "<<::amount;
		cout<<finance::amount;	}
