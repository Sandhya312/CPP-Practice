
//C++ Program to convert inches into yard, feet and inches
//1 yard = 36 inches
//1 foot = 12 inches
//1 inch = 0 yRD , 0 FOOT
#include<iostream>
using namespace std;
int main(){
       int in,foot;
	   cout<<"enter the value of inch" <<endl;
	   cin>>in;
	   double  yard =in /36;
	     foot =in / 12;
	   cout<<"the value in yard is ="<<yard<<endl;
    cout<<"the value in foot is ="<<foot<<endl;

	
	
	return 0;
}