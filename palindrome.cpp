#include<iostream>
#include<string>
using namespace std;
int main(){
	string s;
	cout<<"Enter the string for now: ";
	getline(cin,s);
	int len= s.length() ;
	bool count = true;
	for(int i=0; i<len;i++){
		if(s[i] != s[(len-1)-i] )
		count = false;
	}
	if(count==true){
		cout<<"It's a palindrome";
	}
	return 0;
	
	}
	
//}

//	if(count==middle){
//		cout<<s<<" is a palindrome";
//	}
//			while(j>middle){
//			if(s[i]==s[j]){
//				count++;
//				cout<<"whyyy";
//				j--;
//			}
//			else{
//				j--;
//				continue;
//			}
//			
//		}
		
//		if(s[i]==s[j]){
//			count++;
//			cout<<"okay\n";
//			j--;
//		}
//		else{
//			break;
//		}