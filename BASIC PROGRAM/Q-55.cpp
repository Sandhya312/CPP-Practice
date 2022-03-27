//Write a program to find the sum and product of all elements of an array.
#include<bits/stdc++.h>

using namespace std;

int main(){
    int a[10];
    int sum =0,prod = 1;
    for (int i=0;i<10;i++){
    	cin>>a[i];
	}
	for (int i=0;i<10;i++){
    	sum += a[i];
    	prod *= a[i];
	}
	cout<< "The sum of all the element of an array is :"<<sum<<endl;
	cout<< "The product of all the element of an array is :"<<prod<<endl;
	
	return 0;
	
}