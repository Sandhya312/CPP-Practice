//C++ program to Find Largest Number among three numbers

#include<iostream>

using namespace std ;

int main(){
	int a ,b ,c;
	cout<<"ENter the value of a ,b,c ";
	cin>>a>>b>>c;
	
	if(a>b && a>c){
		cout<<a;
	}else if(b>a && b>c){
			cout<<b;
	}else if(c>a && c>b){
			cout<<c;
	}else {
		cout<<"all numbers are equal";
	}
	
	
	return 0;
}




