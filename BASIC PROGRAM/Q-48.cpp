#include<bits/stdc++.h>

using namespace std;

int main(){
    int row;
    cin>>row;
    for(int i=0;i<row;i++){
    	for(int j = 0;j<row-i;j++){
    		cout<<" ";
		}
		for(int k=0;k<(2*i-1);k++){
			cout<<"*";
		}
		cout<<endl;
	}

	return 0;
	
}