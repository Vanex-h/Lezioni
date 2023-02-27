#include<iostream>
#include <cmath>
#include<array>
#include<algorithm>
#include <cstdio>
using namespace std;
int Repetition(int nums[], int b){
	int count=0;
   for(auto x : nums){
		if(x==b){
			count++;
		}
	}
	cout<<count;
}
int main(){
	int number[]= {2,3,4,5,6,2,3,4,3,4,4,5};
	repetition(number,4);

}
	return 0;
}