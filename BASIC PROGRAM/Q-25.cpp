//C++ Program to Find number of Digits in any number

#include<iostream>

using namespace std ;

int main(){
	int n,count =0;
	cout<<"The any number to reverse it:";
	cin>>n;
	while(n != 0){
		n /= 10;
		count ++;
	}
	cout<<count;
	
	return 0;
}




