//C++ program to generate random numbers/

#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
      int a ;
      for(int i=1;i<=10;i++){
      	a = rand()%100;
      	cout<<a<<endl;
	  }

	
	
	return 0;
}