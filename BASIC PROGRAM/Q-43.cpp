//C++ Program to Convert Octal to Binary

#include<bits/stdc++.h>

using namespace std;

int main(){
	int b,oct,deci=0,bin=0,count=0;
	cin>>oct;
	while(oct!=0){
		b=oct%10;
		oct=oct/10;
		deci += b*pow(8,count);
		count++;
	}
	cout<<deci<<endl;
	count=0;
	while(deci!=0){
		b=deci%2;
		deci=deci/2;
		bin += b*pow(10,count);
		count++;
	}
	cout<<bin;
	
	
	return 0;
}