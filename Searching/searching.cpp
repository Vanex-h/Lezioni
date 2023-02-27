// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int bin(int arr[], int key, int s, int e){
    if(s>e){
        cout<<"No element found";
    }
    if(s<=e){
    int mid= s+ (e-s)/2;
    if(arr[mid]==key){
        return mid;
    }
    else if(arr[mid>key]){
         bin(arr,key, s, mid-1);
    }
   
    else{
         bin(arr, key, mid+1, e);
        
    }
	}
 return -1;
    }
int main() {
    int arr[]={5,2,3,89,0};
    int p=bin(arr, 31, 0, 4);
    if(p==-1){
        cout<<"Key not found"<<endl;
    }
    else if(p>-1){
        
    cout<<"Key found at"<<p<<endl;
    }
    cout <<endl<<"Hello world!";

    return 0;
}