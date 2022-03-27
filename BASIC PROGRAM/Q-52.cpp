//Take 10 integer inputs from user and store them in an array. Again ask user to give a number. Now, tell user whether that number is present in array or not.
#include<bits/stdc++.h>

using namespace std;

int main(){
    int key,a[10];
    for (int i=0;i<10;i++){
    	cin>>a[i];
	}
	for (int j =0;j<10;j++){
		cout<<a[j]<<" ";
	}
	cout<<"enter any random number"<<endl;
	cin>>key;
    for (int i=0;i<10;i++){
       if(key == a[i]){
       	  cout<<"the key is present at position: "<<i;
       	  return 0;
	   }n
	}

	return 0;
	
}