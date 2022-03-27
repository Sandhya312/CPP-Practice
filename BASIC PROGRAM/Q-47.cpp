//C++ Program to find Perfect Number
//N = (2^p -1)*2^(p-1)

#include<bits/stdc++.h>

using namespace std;

int main(){
	int N=1,n=0,p=1;
	while(N<=10000){ //N=1  2  6  7 
		while(p<=N){//p=1 2 3
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
		p=1; //N=2
	}
	
	return 0;
}