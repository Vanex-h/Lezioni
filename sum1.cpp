#include<iostream>
using namespace std;
double sum(double one, double two){
	
	return one + two;
}
int main(){
	double x=34,y=45;
	double tot= sum(x,y);
	cout<<"The sum of "<<x<< " and "<<y<< "  is: "<<tot;
}