#include<iostream>3
#include<String.h>
#include<iomanip>
using namespace std;
struct Student{
	string name;
	int age;
	int Roll;
	float marks;
	void display(){
		cout<<Roll<<", "<<name<<", "<<age<<", "<<fixed<<setprecision(2) <<marks<<endl;
	}
}s1,s2,s3;
int main(){
	s1.name="Mahoro Peace";
	s1.age=17;
	s1.Roll=201901;
	s1.marks=89.80;
	s2.name="Juru Ethan";
	s2.age=17;
	s2.Roll=201902;
	s2.marks=92.50;
	s3.name="Ineza Brianna";
	s3.age=17;
	s3.Roll=201903;
	s3.marks=84.70;
	s1.display();
	s2.display();
	s3.display();
	return 0;
}