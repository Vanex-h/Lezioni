#include<iostream>
#include<fstream>
#include<iomanip>
#include <sstream>
#include<string>
#include <limits>
using namespace std;
void merge(float *a,int s,int e){
    int mid = (s+e)/2;
    int i = s;
    int j = mid+1;
    int k = s;    
    int temp[100];    
    while(i<=mid && j<=e){
        if(a[i] < a[j]){
            temp[k++] = a[i++];
        }
        else{
            temp[k++] = a[j++];
        }
    }
    while(i<=mid){
        temp[k++] = a[i++];
    }
    while(j<=e){
        temp[k++]  = a[j++];
    }
    for(int i=s;i<=e;i++){
        a[i] = temp[i];
    }
    
    
}
void mergeSort(float a[],int s,int e){
    if(s>=e){
        return;
    }
    int mid = (s+e)/2;
    mergeSort(a,s,mid);
    mergeSort(a,mid+1,e);
    merge(a,s,e);

}
struct Student{
	string name;
	int age;
	int rollNumber;
	float marks;
}s1;
int main(){ 
	stringstream data;
    ifstream file("marks.txt");
    string line;
	int n;
	cout<<"Enter the number of students : ";
	cin>>n;
	for(int i=1; i<=n;i++){
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout<<"Enter the name of student "<<i<<" :";
		getline(cin,s1.name);
		cout<<"Enter the age of student "<<i<<" :";
		age:
		cin>>s1.age;
		if(s1.age<8 || s1.age>20){
			cout<<"Enter a valid age: ";
			goto age;
		}
		cout<<"Enter the marks of student "<<i<<" :";
		mark:
		cin>>s1.marks;
		if(s1.marks<0 || s1.marks>50){
			cout<<"Please enter valid marks : ";
			goto mark;
		}
		cout<<"Enter the roll number of student "<<i<<" : ";
		rnumber:
		cin>>s1.rollNumber;
		if(isdigit(s1.rollNumber)!=0){
			cout<<"Enter a valid roll number: ";
			goto rnumber;
		}
	ofstream file("marks.txt",ios::app);
	file << s1.name<<" ,";
    file <<s1.age<<" ,";
    file<<s1.rollNumber<<" ,";
    file  << s1.marks<<endl;
	file.close();
	}
	int i=0;
	float the_marks[100];
	Student students[100];
	   while(getline(file,line)) {
	   	stringstream lineStream(line);
        string nom, marks, age, rollnumber;
        getline(lineStream, nom, ',');
        getline(lineStream, age, ',');
        getline(lineStream, rollnumber, ',');
        getline(lineStream, marks, ',');
        students[i].name=nom;
        students[i].age=stoi(age);
        students[i].rollNumber=stoi(rollnumber);
        students[i].marks=stof(marks);
        the_marks[i]=students[i].marks;
        i++;
        
    } 
    int num=i;
    	mergeSort(the_marks,0,num-1);
		
    	int j=num-1;
    	cout<<"==============================================\nStudents sorted according to the highest marks:  "<<endl;
    	while(j>=0){
    	for(int i=0; i<num; i++){
    			
    		if(students[i].marks== the_marks[j]){
    			cout<<"Name(s): "<<students[i].name<<endl;
        		cout<<"Age: "<<students[i].age<<endl;
        		cout<<"Roll Number: "<<students[i].rollNumber<<endl;
        		cout<<"Marks: "<<students[i].marks<<"\n"<<endl;
			}
		}
			j--;
		}

		float average;
		float times=0;
		float sum=0;
		for(int i=0;i<num;i++){
			sum += the_marks[i];
			times++;
		}
		average= sum/times;
		cout<<"======================================================================\n"<<endl;
		cout<<"Their average is: "<<fixed<<setprecision(3)<<average<<endl;
	return 0;
}















