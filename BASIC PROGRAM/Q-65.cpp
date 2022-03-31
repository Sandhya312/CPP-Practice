//C++ Program to Find Even & Odd Elements in Array
#include<bits/stdc++.h>

using namespace std;

int main(){
   int a[10];
   for (int i=0;i<10;i++){
   	   cin>>a[i];
   }
    for (int i=0;i<10;i++){
   	 if(a[i]%2 == 0){
   	   cout<<a[i]<<"is the even element "<<endl;	
	 }else{
	 	cout<<a[i]<<" is the odd element"<<endl;
	 }
   }
   
	return 0;
	
}