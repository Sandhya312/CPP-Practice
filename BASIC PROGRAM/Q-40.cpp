//C++ Program to Make a Simple Calculator
#include<bits/stdc++.h>

using namespace std;

int main(){
	int a,b;
	char op;
	cout<<"Enter the number";
	cin>>a>>b;
	cout<<"Enter the operation to be perform";
	cin>>op;
	switch(op){
		case '+':
			cout<<"Addition of "<<a<<" and "<<b<<" is "<<a+b;
			break;
		case '-':
		   cout<<"Difference of "<<a<<" and "<<b<<" is "<<a-b;
		   break;                        
		case '*':                        
		  cout<<"Multiplication of "<<a<<" and "<<b<<" is "<<a*b;
		  break;                         
		case '/':                        
		  cout<<"Multiplication of "<<a<<" and "<<b<<" is "<<a/b;
		  break;
		  break;  
		default:
			cout<<"operation not matched";
			break;
		   	
	}
	
	
	return 0;
}