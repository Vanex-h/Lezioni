#include<iostream>
#include<array>

using namespace std;
void display(int marks[][5], int r, int c)
{
for (int i=0; i<r;i++){
for (int j=0;j<c;j++){
  cout<<marks[i][j]<<" ";
  }
  cout<<endl;
}
}
int main(){

int A[][5]={
{ 12,14},
{15,18}
};
display(A,2,5);
int B[5][5]={{0}};
display(B,5,5);
int arr[]={2,3,4,5,6,7,8,9};
int size= end(arr)-begin(arr);
cout<<endl<<size;
}


