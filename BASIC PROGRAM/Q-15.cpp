//C++ program to find cube of number using macros

#include<iostream>
#define CUBE(x) (x*x*x)
using namespace std;

int main(){
	int a,cube;
	cout<<"Enter the value of a\n";
	cin>>a;
	cube = CUBE(a);
	cout<<"The cube of "<<a<<" is "<<cube;
	
	return 0;
}



