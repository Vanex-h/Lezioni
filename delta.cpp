#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int a=1, b=-5, c=6,delta, x1,x2;
	
	delta = pow(b,2) - (4 * a * c);
	int del= sqrt(delta);
	x1= (-b + del)/(2 * a);
	x2 =(-b - del)/(2 * a);
	cout<<"X1 is: "<<x1<<endl;
	cout<<"X2 is: "<<x2<<endl;
		
}