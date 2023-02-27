#include<iostream>
using namespace std;
class Rectangle{
	public:
	int height;
	int width;
	void set_values(int  , int 
	 );
	int area(void);
	Rectangle(int a, int b){
		width=a;
		height= b;
	}
};
	void Rectangle::set_values(int a, int b){
		width=a;
		height=b;
	}
	Rectangle::area(){
		return width* height;
	}
int main(){
	Rectangle rect;
//	rect.set_values(20,30);
	cout<<"Area : "<<rect.area();
	return 0;
}