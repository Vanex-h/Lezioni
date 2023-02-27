#include<iostream>
#include<string>
using namespace std;
class Student{
	public:
		int id;
		string name;
		int age;
		Student *student;
		Student(int d, string n, int a){
			this->id=d;
			this->name=n;
			this->age=a;
			student =NULL;
		}
};
void display(Student *stu){
	while(stu!=NULL){
		cout<<"Name is: "<<stu->name<<" , age is: "<<stu->age<<" ,and the id is: "<<stu->id<<endl;
		stu=stu->student;
	}};
int main(){
	Student *s1= new Student(213, "Axelle", 12);
	Student *s2= new Student(201, "Vanessa", 11);
	Student *s3= new Student(203, "Mia", 14);
	Student *s4= new Student(111, "Peace", 9);
	Student *s5= new Student(212, "Bruno", 17);
	s1->student=s2;
	s2->student=s3;
	s3->student=s4;
	s4->student=s5;

	Student *h= s1;
	display(h);
	
	
}