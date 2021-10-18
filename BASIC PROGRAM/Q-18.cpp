//C++ Program to Check whether year is Leap year or not

#include<iostream>
using namespace std;

int main(){
	int year;
	cout<<"Enter any year to check the leap year \n";
	cin>>year;
	if(year%100 == 0){
		if(year%400 == 0){
			cout<<"The entered year "<<year<<" is a leap year";
		}else {
			cout<<"The entered year "<<year<<" is a not leap year";
	}
	}else if(year %4 == 0){
			cout<<"The entered year "<<year<<" is a leap year";
	}else {
			cout<<"The entered year "<<year<<" is a not leap year";
	}
	
	return 0;
}



