//C++ Program to Find Sum of Square of n Natural Numbers
//4==> 1+4+9+16
#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,sum=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		sum+=i*i;
	}
	cout<<sum;
	
	
	return 0;
}