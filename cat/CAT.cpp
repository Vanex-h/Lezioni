#include <iostream>
#include <fstream>
using namespace std;


struct Student {
int rollnumber;
string name;
int age;
float marks;
Student* next;
};


void printLinkedList(Student* head) {
Student* current = head;
while (current != nullptr) {
cout << current->rollnumber << " " << current->name << " " << current->age << " " << current->marks << endl;
current = current->next;
}
}


float calculateAverage(Student* head) {
Student* current = head;
float sum = 0.0;
int count = 0;
while (current != nullptr) {
sum += current->marks;
count++;
current = current->next;
}
return sum / count;
}

int main() {

Student* head = nullptr;
Student* tail = nullptr;
cout<<"============================Entering student data for five nodes======================="<<endl<<endl;
for (int i = 0; i < 5; i++) {
Student* newStudent = new Student;
cout << "Enter rollnumber, name, age, and marks for student " << i + 1 << ": ";
cin >> newStudent->rollnumber >> newStudent->name >> newStudent->age >> newStudent->marks;
       while (newStudent->age <10 ||newStudent->age>30) {
            cout << "Invalid age. Please enter the age between 10 and 30: ";
            cin >> newStudent->age;
        }
        while (newStudent->rollnumber <0) {
            cout << "Invalid roll number. Please enter a positive integer: ";
            cin >> newStudent->rollnumber;
        }
        while (newStudent->marks < 0 || newStudent->marks > 50) {
            cout << "Invalid marks. Please enter a number between 0 and 50: ";
            cin >> newStudent->marks;
        }
newStudent->next = nullptr;
if (head == nullptr) {
head = newStudent;
tail = newStudent;
} else {
tail->next = newStudent;
tail = newStudent;
}
}

ofstream outfile("cat.txt");


Student* current = head;
while (current != nullptr) {
    outfile << current->rollnumber << " " << current->name << " " << current->age << " " << current->marks << endl;
    current = current->next;
}


outfile.close();


ifstream infile("cat.txt");


head = nullptr;
tail = nullptr;


int rollnumber;
string name;
int age;
float marks;
while (infile >> rollnumber >> name >> age >> marks) {
    Student* newStudent = new Student{rollnumber, name, age, marks, nullptr};
    if (head == nullptr) {
        head = newStudent;
        tail = newStudent;
    } else {
        tail->next = newStudent;
        tail = newStudent;
    }
}


printLinkedList(head);


float average = calculateAverage(head);
cout << "Average marks: " << average << endl;


infile.close();

return 0;
}