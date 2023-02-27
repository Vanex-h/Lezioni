#include<iostream>
using namespace std;
int main(){
	double cels, fahrenheit;
	cout<<"Input the temeperature in Celsius: ";
	cin>>cels;
	fahrenheit= (cels * 1.8) +32;
	cout<<endl<<"The temperature in fahreneit is: "<<fahrenheit;
}