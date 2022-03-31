//C++ Program To reverse an array elements entered by user
#include<bits/stdc++.h>

using namespace std;

int main(){
   int a[10];
   for (int i=0;i<10;i++){
   	   cin>>a[i];
   }
   cout<<"The reverse of an array is :";
   for (int i=9;i>=0;i--){
   	 cout<<a[i]<<" ";
   }
   return 0;
	
}