//C++ Program to Check given number is Armstrong or Not
// 371 = (3*3*3)+(7*7*7)+(1*1*1)  
#include<iostream>

using namespace std ;

int main(){
	int n,rem,temp,sum =0;
	cout<<"The any number to reverse it:";
	cin>>n;
	temp =n;
	while(n != 0){
		rem = n%10;
		cout<<rem;
		sum += (rem*rem*rem);
		n /= 10;
	}
	cout<<endl<<sum<<endl;
	if(temp == sum ){
		cout<<"Armstrong";
	}
	else{
		cout<<"Not a armstrong number";
	}
	
	
	return 0;
}




