#include<iostream>
#include <array>
#include<math.h>
using namespace std;
//double printreport(void) {
//int x = 5, y =10;
//return x/y;
//}
//
//namespace userDefined{
//	int insideNamespace=2000;
//	int cout(){
//		return insideNamespace;
//	}
//}
//int myGlobal=500;
//int cout(){
//	return myGlobal*myGlobal;
//}
//int main(){
//	int cout= 30;
////	std::cout<<"The local variable cout in main is "<<cout;
////	std::cout<<"\nThe variable in userDefined namespace is "<<userDefined::insideNamespace;
////	std::cout<<"\nThe output of cout() in userDefined is "<<userDefined::cout();
////	std::cout<<"\nThe value of myGlobal is "<<myGlobal;
////	std::cout<<"\nThe output of global cout() is "<<::cout();
//	  int num=15+3/3×(12+5);
//       cout<<num;
//}
    int main(){
        int n=9, k=3, item=10, j=n-1;
       int num[9]={43,54,2,8,4,2,55,643};
       while(j>=k){
           num[j+1]=num[j];
           j--;
       }
       num[k]=item;
       for(int i=0;i<n;i++){
           cout<<num[i]<<endl;
       }
       
       
    }