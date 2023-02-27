#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n, sumOfSquares=0, sum=0, squareOfSum=0;
	cout<<"Enter the number of the first natural numbers you want: ";
	cin>>n;
	
	for(int i=1; i<=n;i++){
		sum+=i;
		sumOfSquares += pow(i,2);
	}
	squareOfSum= pow(sum,2);
	
	cout << "Sum of Squares:  "  << sumOfSquares << endl;
	cout << "Square of the sum:  " <<  squareOfSum << endl;
	cout << "Difference (" << squareOfSum << " - " << sumOfSquares << "): " << squareOfSum - sumOfSquares << endl;
	
	return 0;

}