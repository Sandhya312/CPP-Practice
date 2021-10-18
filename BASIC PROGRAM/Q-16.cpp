//C++ Program to Check Number is Odd or Even

#include<iostream>
using namespace std;

int main(){
	int num;
	cout<<"Enter the value of num\n";
	cin>>num;
	if(num == 1 || num == 0){
		return 0;
	}
	else if(num%2 == 0){
		cout<<"Even";
	}else{
		cout<<"Odd";
	}
	
	return 0;
}



