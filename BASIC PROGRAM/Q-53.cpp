//Take 20 integer inputs from user and print the following:
//number of positive numbers
//number of negative numbers
//number of odd numbers
//number of even numbers
//number of 0.
#include<bits/stdc++.h>

using namespace std;

int main(){
    int a[20];
	int count1=0,count2=0,count3=0,count4=0;
    for (int i=0;i<20;i++){
    	cin>>a[i];
	}
	for (int j =0;j<20;j++){
		cout<<a[j]<<" ";
		 if (a[j]>0){
			count1++;
		}
		if (a[j]<0){
			count2++;
		}
    	if (a[j]%2 !=0){
			count3++;
		}
	    if (a[j]%2 ==0){
			count4++;
		}
    }
    cout<<endl;
    cout<<"The no of posive numbers: "<<count1<<endl;
    cout<<"The no of negative numbers: "<<count2<<endl;
	cout<<"The no of odd numbers: "<<count3<<endl;
	cout<<"The no of even numbers: "<<count4<<endl;	
	
	
	

	return 0;
	
}