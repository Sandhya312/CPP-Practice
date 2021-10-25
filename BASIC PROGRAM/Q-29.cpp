//C++ program to Check Number is Palindrome or not
// 1221 == 1221
//12321 == 12321

#include<iostream>

using namespace std ;

int main(){
	int n,rev=0,rem,temp;
	cout<<"The any number to reverse it:";
	cin>>n;
	temp =n;
	while(n != 0){
		rem = n%10;
		rev = rev*10 +rem;
		n /= 10;
	}
	cout<<"The reverse of the number is "<<rev<<endl;
	if(temp == rev){
		cout<<"Palindrome number";
	}
	else{
		cout<<"Not a palindrome number";
	}
	return 0;
}




