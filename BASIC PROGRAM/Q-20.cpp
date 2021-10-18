//C++ Program to Check Whether a character is Vowel or Consonant
//vowel = a,e,i,o,u

#include<iostream>
using namespace std;

int main(){
	char ch;
	cin>>ch;
	if(ch =='a' || ch =='e'  || ch =='i'||ch =='o' ||ch =='u'||ch =='A' || ch =='E'  || ch =='I'||ch =='O' ||ch =='U'){

		   cout<<"Vowel";
     
	}else{
		cout<<"Consonent";
	}
	
	return 0;
}