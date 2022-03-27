//C++ Program to Convert Octal Number to Decimal

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
	
	
	return 0;
}