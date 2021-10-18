//C++ Program to Check Character is Uppercase, Lowercase, Digit or Special Character
//A-Z ==65-90
//a-z ==97-122
// digit == 48 - 57
#include<iostream>
using namespace std;

int main(){
	char ch;
	cout<<"Enter the value of ch to check ::\n";
	cin>>ch;
	if(ch >=65 && ch <=90){
		cout <<"Uppercase";
	}else if(ch >=97 && ch <= 122){
		cout<<"Lowercase\n";
	}else if(ch >= 48 && ch <= 57){
		cout<<"Digit\n";
	}else{
		cout<<
		"Special character\n";
	}
	
	return 0;
}



