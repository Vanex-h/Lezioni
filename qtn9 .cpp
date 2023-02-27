#include <iostream>
#include <array>
using namespace std;
int firstIndex(int nums[], int len, int x, int i=0){
	if(len==1){
		return 1;
	}
	if(nums[i]==x){

	return i;
	}
	return firstIndex(nums, len-1,x,i+1);
}
int main()
{
    int a[] = {5,5,6,20,5,6};
    int size = sizeof(a)/sizeof(int);
    int last = firstIndex(a, size, 20,0);
    cout << last;
    return 0;
}