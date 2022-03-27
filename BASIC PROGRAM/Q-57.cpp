//Find the largest and smallest elements of an array.
#include<bits/stdc++.h>

using namespace std;

int main(){
    int a[10],small,large;
    for (int i=0;i<10;i++){
    	cin>>a[i];
	}
	small = a[0];
	large = a[0];
    for (int i=1;i<10;i++){
         if(small>a[i]){
         	small = a[i];
		 }else if(large<a[i]){
		 	large = a[i];
		 }
	}
    cout<< "The smallest element of an array is: "<<small<<endl;
    cout<<"The largest element of an array is: "<<large<<endl;
	return 0;
	
}