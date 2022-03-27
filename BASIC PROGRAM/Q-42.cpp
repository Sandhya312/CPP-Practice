//C++ Program to Convert Binary Number to Octal

#include<bits/stdc++.h>

using namespace std;

int main(){
	int b,bin,deci=0,n,oct=0,count=0;
	cin>>bin;
	while(bin!=0){
		n=bin%10;
		bin=bin/10;
		deci +=n*pow(2,count);//decimal number
		count++;
	}
	cout<<deci<<endl;
	count=0;
	while(deci!=0){
		b=deci%8;
		deci=deci/8;
		oct+=b*pow(10,count);
		count++;
	}
	cout<<oct;
	
	
	return 0;
}