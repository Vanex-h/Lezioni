#include<iostream>
#include<math.h>
using namespace std;

int main(){
	double radius= 5,PI= 3.141592, volume;
	volume= (pow(radius, 3) * PI* 4)/3;
	cout<<"The volume is: "<< volume;
}