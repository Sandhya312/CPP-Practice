//C++ Program to Sort an Array Elements in Ascending Order and decsending order 2 3 4 77 6 3 1
#include<bits/stdc++.h>

using namespace std;

int main(){
   int a[10],swap;
   for (int i=0;i<10;i++){
   	   cin>>a[i];
   }
   cout<<"Sorting of array in ascending order: ";
   for (int i=0;i<10;i++){
   	for (int j=i+1;j<10;j++){
   		 if(a[j]<a[i]){
   		 	swap = a[i];
   		 	a[i]=a[j];
   		 	a[j]=swap;
		 }
	   }
	   cout<< a[i]<<" ";
   }
   cout<<endl;
   cout <<"Sorting of array in descending order:";
   for (int i=0;i<10;i++){
   	for (int j=i+1;j<10;j++){
   		 if(a[i]<a[j]){
   		 	swap = a[i];
   		 	a[i]=a[j];
   		 	a[j]=swap;
		 }
	   }
	   cout<< a[i]<<" ";
   }

   
   
	return 0;
	
}