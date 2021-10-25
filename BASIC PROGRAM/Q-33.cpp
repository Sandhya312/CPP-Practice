//C++ Program to Find Power of Number
//9  ==> 3*3 ==>2
//4 ===> 2*2 ==>2
// 27 ==> 3*3*3 ==> 3
#include<iostream>
#include<math.h>

using namespace std;

int main(){
	float num, pow,temp=1;
	cout<<"ENter the value of num and pow\n";
	cin>>num>>pow;
	for(float i =1 ;i <=pow ;i++){
		temp *= num;
	}
	cout<<"power of num is :: "<<temp;
	
	
	return 0;
}