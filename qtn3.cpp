#include <bits/stdc++.h>
using namespace std;
void removeA(char arr[] ,char letter){
	
	if(arr[0]=='\0'){
		return;
	}

	if(arr[0]!=letter){
		 removeA(arr+1,letter);
	}
	else{
		for(int i=0; i!='0';i++){
			arr[i]=arr[i+1];
		}
		removeA(arr+1,letter);
	}
	
}
int main(){
	
	char arr[] = "abcanasa";
	
	
	removeA(arr,'c');
	cout<<arr;
	
	return 0;
}