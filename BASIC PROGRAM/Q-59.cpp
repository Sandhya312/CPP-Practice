//Take an array of 10 elements. Split it into middle and store the elements in two dfferent arrays.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[10],b[5],c[5];
    for (int i=0;i<10;i++){
    	cin>>a[i];
	}
	for(int i =0;i<5;i++)
	{
		b[i]=a[i];
		c[i]=a[i+5];
	}
	for(int i =0;i<5;i++)
	{
		cout<<b[i]<<" ";
	}
	cout<<endl;
	for(int i =0;i<5;i++)
	{
		cout<<c[i]<<" ";
	}
	cout<<endl;
	return 0;
	
}