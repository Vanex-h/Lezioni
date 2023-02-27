#include <iostream>
using namespace std;
void removeDup(char arr[] ){
	if(arr[0]=='\0'){
		return;
	}

	if(arr[0]!=arr[1]){
		 removeDup(arr+1);
	}
	else{
		for(int i=0; i!='0';i++){
			arr[i]=arr[i+1];
		}
		removeDup(arr+1);
	}
}
{
    if (i == str.length())
        return "\0;
    if (str[i] != str[i + 1])
		remove
        cout<<str[i];
    return  removeConsDup(str, i + 1);
}


int main()
{
    char str[] = "aaabbbcccddd";
    removeDup(str);
    
    return 0;
}