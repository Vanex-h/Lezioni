#include<iostream>
using namespace std;

void selectionSort(int a[],int n){
 for(int i=0;i<n-1;i++){
        int smallestNumberIndex= i;
        for(int j = i+1;j<n;j++){
            if(a[j]<a[smallestNumberIndex]){
                smallestNumberIndex = j;
            }
        }
        swap(a[i],a[smallestNumberIndex]);
     }
}
int main(){
   int n=7;
//cout<<"Enter the number of elements"<<endl;
//   cin>>n;
//   int a[n];
//cout<<"Enter "<<n<<" elements"<<endl;
//   for(int i=0;i<n;i++){
//    cin>>a[i];
//   }
	int a[]={3,5,1,2,8,9,0};
   selectionSort(a,n);
   for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
   }
    return 0;
}




