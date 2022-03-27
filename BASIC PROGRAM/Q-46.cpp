//C++ Program to Convert Decimal Number to Octal
#include<bits/stdc++.h>

using namespace std;

int main(){
	int b,bin,deci=0,n,oct=0,count=0;
	cin>>deci;
	while(deci!=0){
		b=deci%8;
		deci=deci/8;
		oct+=b*pow(10,count);
		count++;
	}
	cout<<oct;
	
	return 0;
}