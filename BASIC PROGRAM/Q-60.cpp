//Consider an integer array, the number of elements in which is determined by the user.
//The elements are also taken as input from the user. Write a program to find those pair
//of elements that has the maximum and minimum difference among all element pairs.

#include<bits/stdc++.h>

using namespace std;

int main(){
    int a[10],prev,next;
    for (int i=0;i<10;i++){
    	cin>>a[i];
	}
	for(int i=0;i<10;i++){
		prev=a[i];
	    next=a[i+1];
		if(prev<next){
			prev = next;
		}
	}
	
	return 0;
	
}