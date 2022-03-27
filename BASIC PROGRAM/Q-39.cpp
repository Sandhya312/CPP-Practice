//C++ Program to Convert Binary to Decimal
//(10001)2 === 1*2^0+0*2^1+0*2^2+0*2^3+1*2^4  

#include<bits/stdc++.h>

using namespace std;

int main(){
	int b,n,d=0,count=0;
	cin>>b;
	if(b==0){
		d=0;
	}else{
	while(b!=0){
		n=b%10;//n=1     0    0   0   1
		b=b/10;//b=1000  100  10  1   0
		d+=n*pow(2,count);//d=0+2^0*1+0*2^1+0*2^2+0*2^3   
		count++;//1  2   3  4
	}
//	 d += b*pow(2,count);
	}
	cout<<d;
	return 0;
}