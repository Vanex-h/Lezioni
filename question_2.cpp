#include<iostream>
using namespace std;

struct Date {
    int year;
    int month;
    int day;
    
}today;
void createDate(int year, int month	, int day){
	 
		today.year= year;
		today.month= month;
		today.day= day;
		cout<< today.year << "-" << today.month << "-" << today.day << endl;
	
}

int main() {
    createDate(2023, 1, 23);
    createDate(2022, 5,12);
    return 0;
}
