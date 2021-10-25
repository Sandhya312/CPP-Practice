//C++ program to find sum of digits of a number

#include<iostream>
#include<math.h>

using namespace std;

int main(){
	int temp=0,a ,rem;
	cout<<"Enter the value of a\n";
	cin>>a;
	while(a != 0){
		rem = a%10;
		 a =a/10;
		 cout<<"the value of rem :: "<<rem<<endl;
		 temp += rem;	
	}
	cout<<endl<<temp;
	
	
	
	return 0;
}