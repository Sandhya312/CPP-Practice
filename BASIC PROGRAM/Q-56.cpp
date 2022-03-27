//Initialize and print all elements of a 2D array.
#include<bits/stdc++.h>

using namespace std;

int main(){
    int a[2][2];
    for (int i =0;i<2;i++){
    	for(int j=0;j<2;j++){
    		cin>>a[i][j];
		}
	}
	 for (int i =0;i<2;i++){
    	for(int j=0;j<2;j++){
    		cout<<a[i][j];
		}
	}
    
	return 0;
	
}