//C++ Program to find Perfect Number
#include<bits/stdc++.h>
using namespace std;
int main(){
	int N=1,n=0,p=1;
	while(N<=10000){ 
		while(p<=N){
		if(p<N){
		  if(N%p==0){
		    n+=p;//
			}
		}
		   p++; 
		}
		  if(n==N){
			cout<<"The number "<<N<<" is a perfect number"<<endl;	
		  }
		N++;
		n=0;
		p=1;
	}
	return 0;
}