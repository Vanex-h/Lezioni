#include <iostream>
#include <cmath>
using namespace std;
int toInt(char a[], int n){
    if(n==0){
        return 0;
    }
    int smallAns= toInt(a, n-1);
    int lastDigit= a[n-1]- '0';
    int ans= smallAns*10 +lastDigit;
    return ans;
}

int main()
{
    char a[]= "2134";
   int num= toInt(a,4);
    cout<<num;        
}
