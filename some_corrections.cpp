#include<iostream>
#include<fstream>
#include<iomanip>
#include <sstream>
#include<string>
#include <limits>
#include <cctype>
using namespace std;

struct Student{
string name;
int age;
int rollNumber;
float marks;
Student *next;
};

struct Node{
float data;
Node *next;
};

void addToList(Node *&head, float data){
Node *newNode = new Node();
newNode->data = data;
newNode->next = head;
head = newNode;
}

void merge(Node *&head, int s, int e){
int mid = (s+e)/2;
int i = s;
int j = mid+1;
int k = s;
Node *temp = NULL;
while(i<=mid && j<=e){
if(head->data < head->next->data){
addToList(temp, head->data);
head = head->next;
i++;
}
else{
addToList(temp, head->next->data);
head->next = head->next->next;
j++;
}
k++;
}
while(i<=mid){
addToList(temp, head->data);
head = head->next;
i++;
}
while(j<=e){
addToList(temp, head->next->data);
head->next = head->next->next;
j++;
}
head = temp;
}

void mergeSort(Node *&head, int s, int e){
if(s>=e){
return;
}
int mid = (s+e)/2;
mergeSort(head, s, mid);
mergeSort(head, mid+1, e);
merge(head, s, e);
}

void addToStudentList(Student *&head, string name, int age, int rollNumber, float marks){
Student *newNode = new Student();
newNode->name = name;
newNode->age = age;
newNode->rollNumber = rollNumber;
newNode->marks = marks;
newNode->next = head;
head = newNode;
}

int main(){
stringstream data;
ifstream file("marks.txt");
string line;
int n;
cout<<"Enter the number of students : ";
cin>>n;
Student *s = NULL;
for(int i=1; i<=n;i++){
cin.ignore(numeric_limits<streamsize>::max(), '\n');
cout<<"Enter the name of student "<<i<<" :";
string name;
getline(cin, name);
cout<<"Enter the age of student "<<i<<" :";
age:
int age;
cin>>age;
if(age<8 || age>20){
cout<<"Enter a valid age: ";
goto








//new ones appendddd
#include<iostream>
#include<fstream>
#include<iomanip>
#include <sstream>
#include<string>
#include <limits>
using namespace std;

struct Node {
string name;
int age;
int rollNumber;
float marks;
Node *next;
};

Node* head = NULL;

void insertData(string name, int age, int rollNumber, float marks) {
Node *newNode = new Node();
newNode->name = name;
newNode->age = age;
newNode->rollNumber = rollNumber;
newNode->marks = marks;
newNode->next = NULL;
if (head == NULL) {
head = newNode;
} else {
Node *temp = head;
while (temp->next != NULL) {
temp = temp->next;
}
temp->next = newNode;
}
}

void readDataFromFile(string fileName) {
ifstream file(fileName);
string line;
while(getline(file,line)) {
stringstream lineStream(line);
string name, marks, age, rollnumber;
getline(lineStream, name, ',');
getline(lineStream, age, ',');
getline(lineStream, rollnumber, ',');
getline(lineStream, marks, ',');
insertData(name, stoi(age), stoi(rollnumber), stof(marks));
}
file.close();
}

void sortByMarks() {
Node *temp = head;
float marksArray[100];
int i = 0;
while (temp != NULL) {
marksArray[i] = temp->marks;
temp = temp->next;
i++;
}
int num = i;
int j = num - 1;
cout<<"==============================================\nStudents sorted according to the highest marks: "<<endl;
while (j >= 0) {
temp = head;
while (temp != NULL) {
if (temp->marks == marksArray[j]) {
cout<<"Name(s): "<<temp->name<<endl;
cout<<"Age: "<<temp->age<<endl;
cout<<"Roll Number: "<<temp->rollNumber<<endl;
cout<<"Marks: "<<temp->marks<<"\n"<<endl;
}
temp = temp->next;
}
j--;
}
}

void calculateAverage() {
Node *temp = head;
float times = 0;
float sum = 0;
while (temp != NULL) {
sum += temp->marks;
times++;
temp = temp->next;
}
float average = sum/times;
cout<<"======================================================================\n"<<endl;
cout<<"Their average is: "<<fixed<<setprecision(3)<<average<<endl;
}