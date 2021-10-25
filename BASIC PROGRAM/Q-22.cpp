//C++ Program to find Factorial of a Number

#include<iostream>

using namespace std ;

int main(){
	int m,fact;
	cout<<"Enter the value of fact to find the factorial \n";
	cin>>fact;
	m=fact;
	for(int i=1;i<m;i++){
		fact *= (fact -i);
		cout<<fact;
	    cout<<endl;
	}
		cout<<endl;
		cout<<endl;
        cout<<fact;
	
	
	return 0;
}




