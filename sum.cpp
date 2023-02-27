#include<iostream>
using namespace std;
double sum(double one, double two){
	
	return one + two;
}
int main(){
	double x,y;
	cout<<"Enter the two numbers: ";
	cin>> x >> y;
	double tot= sum(x,y);
	cout<<"The sum of "<<x<< " and "<<y<< "  is: "<<tot;
}