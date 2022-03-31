//C++ program to Insert element at specific position in array
#include<bits/stdc++.h>

using namespace std;

int main(){
   int a[10],position,element;
   for (int i=0;i<10;i++){
   	   cin>>a[i];
   }
   cout<<"Enter the position to insert the element:"<<endl;
   cin>>position;
   cout<<"Enter the element to be insert:"<<endl;
   cin>>element;
   if (position>=10){
   	cout<<"Out of the range";
   }else{
   	   a[position]=element;
   	   for(int i=0;i<10;i++){
   	   	    cout<<a[i]<<" ";
		  }
   	   
   }
   return 0;
	
}