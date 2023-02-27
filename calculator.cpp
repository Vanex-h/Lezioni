#include<iostream>
#include<math.h>
using namespace std;
namespace arithmetic {
	double add(double a, double b){
	return a+b;
	}
	
	double multiply(double a, double b){
		return a * b;
	}
	
	double subtract(double a, double b){
		return a - b;
	}
	double divide(double a, double b){
		return a / b;
	}
	int mode(int a, int b){
		return a % b;
	}
}
using namespace arithmetic;
int main(){
	double sum, diff, product, quotient;
	int mod;
	int n;
	int x;
	int y;
	char choice;
	start:
	cout<<" MENU\n	1.Add \n	2.Subtract \n	3.Multiply \n	4.Divide\n	5.Modulus\n";
	cout<<"Enter your choice : ";
	cin>>n;
	switch(n){
		case 1:
		cout<<"Enter your two numbers: ";
		cin>>x >> y;
		sum= add(x,y);
		cout<<"Result: "<<sum<<endl;
		cout<<"Continue? ";
		cin>>choice;
		if(choice=='y'){
		goto start;
		}
		else if(choice=='n'){
			cout<<"Thank you for using our calculator";
		}
		break;
		case 2:
		cout<<"Enter your two numbers: ";
		cin>>x >> y;
		diff= subtract(x,y);
		cout<<"Result: "<<diff<<endl;
		cout<<"Continue? ";
		cin>>choice;
		if(choice=='y'){
		goto start;
		}
		else if(choice=='n'){
			cout<<"Thank you for using our calculator";
		}
		break;
		
		case 3:
		cout<<"Enter your two numbers: ";
		cin>>x >> y;
		product= multiply(x,y);
		cout<<"Result: "<<product<<endl;
		cout<<"Continue? ";
		cin>>choice;
		if(choice=='y'){
		goto start;
		}
		else if(choice=='n'){
			cout<<"Thank you for using our calculator";
		}
		break;
		case 4:
		cout<<"Enter your two numbers: ";
		cin>>x >> y;
		quotient= divide(x,y);
		cout<<"Result: "<<quotient<<endl;
		cout<<"Continue? ";
		cin>>choice;
		if(choice=='y'){
		goto start;
		}
		else if(choice=='n'){
			cout<<"Thank you for using our calculator";
		}
		break;
		case 5:
		cout<<"Enter your two numbers: ";
		cin>>x >> y;
		mod= mode(x,y);
		cout<<"Result: "<<mod<<endl;
		cout<<"Continue? ";
		cin>>choice;
		if(choice=='y'){
		goto start;
		}
		else if(choice=='n'){
			cout<<"Thank you for using our calculator";
		}
		break;
		default:
			cout<<"holla";
		
	}
}