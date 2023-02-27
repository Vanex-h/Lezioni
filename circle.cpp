#include<iostream>
using namespace std;
int main(){
	double area, perimeter, radius;
	const double PI= 3.141592;
	cout<<"Input the radius: ";
	cin>>radius;
	area= radius * radius * PI;
	perimeter= radius * 2 * PI;
	cout<<"The area is "<<area<<" and the perimeter is "<<perimeter;
}