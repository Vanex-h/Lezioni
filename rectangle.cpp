#include<iostream>
using namespace std;
struct Rectangle{
	int length;
	int width;
	int area(){
		return width* length;
	}
};
int main(){
	Rectangle rect;
	rect.width=20;
	rect.length=30;
	cout<<rect.area();
	return 0;
}