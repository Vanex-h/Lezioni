#include<iostream>
using namespace std;
int main(){
	float seconds=1000000, years;
	float year= 365 * 24 * 60 * 60;
	years=seconds / year;
	cout<<"The years are: "<<years;
	return 0;
}