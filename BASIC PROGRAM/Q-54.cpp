//Take 10 integer inputs from user and store them in an array. Now, copy all the elements in another array but in reverse order.
#include<bits/stdc++.h>

using namespace std;

int main(){
    int a[10],b[10];
    for (int i=0;i<10;i++){
    	cin>>a[i];
	}
	int k=0;
	for (int j=9;j>=0;j--){
		 b[j]=a[k]; 
		 k++;
  
	}
	 for (int i=0;i<10;i++){
    	cout<<b[i]<<" ";
	}
	return 0;
	
}