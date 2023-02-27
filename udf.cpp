#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int x=10;
	int& ref=x;
	ref=20;
	cout<<"x= "<<x<<endl;
	x=30;
	cout<<"ref= "<<ref<<endl;
	return 0;
}


















































































































//double maximum(double x, double y, double z){
//	double maxiValue=x;
//	if(y>maxiValue)
//	maxiValue=y;
//	if(z>maxiValue)
//	maxiValue=z;
//	return maxiValue;
//}
//int main(){
//	double max= maximum(3.4, 4.4,2.8);
//	cout<<"The max is "<<max;
//}