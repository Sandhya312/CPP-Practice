//C++ Program to find Cube Root of Number
#include<iostream>
#include<math.h>

using namespace std;

int main(){
	float a,cbt;
	cout<<"Enter the value of a to find the cube root of a\n";
	cin>>a;
	cbt =cbrt(a);
	cout<<"The cuberoot of a is :: "<<cbt;
	
	
	return 0;
}