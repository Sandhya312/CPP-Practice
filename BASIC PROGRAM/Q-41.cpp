//C++ Program to Convert Decimal to Binary
//9== 9%2=1(4)   4%2=0(2)   2%2=0(1)  1 ==1001     

#include<bits/stdc++.h>

using namespace std;

int main(){
	 int d,b,n=0,count=0;
	int m;
	cin>>d;
	while(d!=0){  //d=   4    2    1  0
		b=d%2;//0    0    1
		d=d/2;//2    1    0
		n+=b*pow(10,count); //0*10^1
		count++;//1  2 3 4
//        cout<<n;//001  
	}
	cout<<n;


	return 0;
}