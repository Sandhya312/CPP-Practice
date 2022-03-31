//C++ Program to Find Duplicate Elements in Array

#include<bits/stdc++.h>

using namespace std;

int main(){
   int a[10];
   for (int i=0;i<10;i++){
   	 cin>>a[i];
   }
   for (int i=0;i<10;i++){
   	 for(int j=i+1;j<10;j++){
   	    if(a[i]==a[j]){
   	    	cout<< "The duplicate element of and array are:"<<a[i]<<endl;
		}
	 }
   }
    
	return 0;
	
}