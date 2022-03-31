//Consider an integer array, the number of elements in which is determined by the user.
//The elements are also taken as input from the user. Write a program to find those pair
//of elements that has the maximum and minimum difference among all element pairs.

#include<bits/stdc++.h>

using namespace std;

int main(){
    int a[10],max[10]={0},min[10],c,d,c1,d1;
    for (int i=0;i<10;i++){
    	cin>>a[i];
	}
	for(int i=0;i<9;i++){
	  for(int j=i+1;j<10;j++){
		if(abs(a[i]-a[j])>max[i]){
		    max[i] = abs(a[i]-a[j]);
		}else{
			min[i]= abs(a[i]-a[j]);
			c1=a[i];
			d1=a[j];
			cout<<"the pair of min differnce are:"<<c1<<" and "<<d1<<endl;
		}
	 }
}
	for(int i=0;i<9;i++){
	  for(int j=i+1;j<10;j++){
        if(max[i]>max[j]){
		    c=a[i];
		    d=a[j];
		    cout<<"the pair of max differnce are:"<<c<<" and "<<d<<endl;
		}    
	 }
    }
	return 0;
	
}