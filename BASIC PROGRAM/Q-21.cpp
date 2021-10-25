//C++ Program to Check given number is Prime number or not

#include<iostream>

using namespace std ;

int main(){
	int num,flag =0;
	cout<<"Enter the value of num to check is it prime or not\n";
	cin>>num;
	 
	 if(num ==1){
	 	cout<<"The number is smallest prime\n";
	 }
	 
	 for(int i=2 ;i<num/2; i++){
	 	if(num %i ==0){
	 		cout<<"NOt Prime\n";
	 		flag =1;
	 		break;
		 }
	 }
	 if(flag ==0 ){
	 	cout<<"Prime";
	 }

	return 0;
}






