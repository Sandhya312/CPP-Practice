//Write a program to check if elements of an array are same or not it read from front or back. E.g.-
//2	3	15	15	3	2

#include<bits/stdc++.h>

using namespace std;

int main(){
    int flag=0,a[10];
     int size = sizeof(a)/sizeof(int);
    for(int i=0;i<size;i++){
    	cin>>a[i];
	}
    for(int i=0;i<size/2;i++){
    	if(a[i] ==a[size-i-1]){
    		flag =1;
		}
	}
	if(flag == 1){
		cout<<"same";
	}else{
		cout<<"not same";
	}
	return 0;
	
}