/*C++ Program to find Compound Interest
A = P (1 + r/n)^(nt)
A = the future value of the investment/loan, including interest
P = the principal investment amount (the initial deposit or loan amount)
r = the annual interest rate (decimal)
n = the number of times that interest is compounded per year
t = the number of years the money is invested or borrowed for 
*/
#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int P,n,t,CI,A,r;
	
	cout<<"Enter the value of Principal amount:";
	cin>>P;
	cout<<"Enter the value of Annual Interest:";
	cin>>r;
	cout<<"No of times:";
	cin>>n;
	cout<<"Enter the value of No of years:";
	cin>>t;
	cout<<"The Compund Interest with principal Amount\n";
	A= P*(pow((1+r/n),(n*t)));
	cout<<"\nThe Compound Interest is:"<<A<<endl;
	cout<<"The Compund Interest without principal Amount\n";
	CI = A-P;
	cout<<CI;
	return 0;
}



