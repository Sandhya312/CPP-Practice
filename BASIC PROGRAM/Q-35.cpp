// C++ Program to Find HCF and HCF of two numbers
#include<iostream>
#include<math.h>

using namespace std;

int main(){
	int a,b,min,HCF,LCM;
	cin>>a>>b;
	min = (a<b) ? a:b;
	for(int i=2;i<=min;i++){
		if(a%i == 0 && b%i == 0){
		
			HCF= i;
		}
	}
	cout<<"The HCF of two number is:: "<<HCF<<endl;
	LCM = (a*b)/HCF;
	cout<<"The LCM of two number is:: "<<LCM;
	
	return 0;
}





