#include<iostream>
using namespace std;
class Rectangle{
	int width;
	int height;
	public: 
	Rectangle(int a, int b){
		width=a;
		height=b;
	}
//	void set_values(int a, int b){
//		width=a;
//		height=b;
//	} 
	int area(){
		return width* height;
	}
};

int main(){
	Rectangle *rect= new Rectangle(20,30);
//	Rectangle rec;
//	rec.set_values(20,30);
//	cout<<rec.area();
//	rect->set_values(10,20);
	cout<<"Area is: "<<rect->area()<<endl;
	Rectangle r(10,40);
	cout<<r.area()<<endl;
	Rectangle rc= Rectangle(20,40);
	cout<<rc.area()<<endl;
	delete rect;
	return 0;
}