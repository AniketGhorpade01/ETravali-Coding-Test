#include<iostream>
#include<string>
using namespace std;

int main(){
	string str;
	cin>>str;
	int flag=1;
	int j=str.length()-1;
	for(int i=0;i<str.length()/2;i++){
		if(str[i]!=str[j]){
			flag++;
			break;
		}
		j--;
	}

if(flag==1){
	cout<<"Given string is Palindrome.";
}
else{
	cout<<"Given string is not Palindrome. ";
}
	return 0;
}
