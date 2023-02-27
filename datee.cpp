#include <iostream>
#include <ctime>
using namespace std;
int main(){
	time_t now= time(0);
	char* datetime= ctime(&now);
	cout<<"The current date time is: "<<datetime<<endl;
	return 0;
}