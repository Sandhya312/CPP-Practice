//C++ Program to Delete element from Array
#include<bits/stdc++.h>

using namespace std;

int main(){
   int a[10],delPos;
   for (int i=0;i<10;i++){
   	   cin>>a[i];
   }
   cout<< "Enter the position to delete the element"<<endl;
   cin>>delPos;
    if (delPos>=10){
    	cout<<"Out of range"<<endl;
	}else{
		for(int i=delPos;i<10;i++){
			a[i]=a[i+1];
		}
	    cout<<" The new array:";
	    for (int i=0;i<9;i++){
   	      cout<<a[i]<<" ";
   }
	}

    
   
   
   return 0;
	
}