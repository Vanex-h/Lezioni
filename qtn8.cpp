#include<iostream>
#include<array>
using namespace std;
int lastIndex(int nums[], int len, int x){
	if(len==0 ||len==1){
		return 0;
	}
	if(nums[len-1]==x)
		return len-1;
	return lastIndex(nums, len-1,x);
	
}
int main(){
	int numbers[]={5,5,6,20,5,6};
	cout<<lastIndex(numbers,7,5);
	return 0;
}