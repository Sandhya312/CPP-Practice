//C++ Program to Reverse a Number
// 123 == 321
//100 +20+3=123
//321= 300+20+1
#include<iostream>

using namespace std ;

int main(){
	int n,rev=0,rem;
	cout<<"The any number to reverse it:";
	cin>>n;
	while(n != 0){
		rem = n%10;
		rev = rev*10 +rem;
		n /= 10;
	}
	cout<<"The reverse of the number is "<<rev;
	
	
	return 0;
}




