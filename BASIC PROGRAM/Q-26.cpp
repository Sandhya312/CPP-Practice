//C++ Program to find Fibonacci Series
// 0 1 1 2 3 5 8 13
//next = np +np-1
#include<iostream>

using namespace std ;

int main(){
	int fib,n,np=1,nps=0;
	cout<<"Enter the value of n";
	cin>>n;
    cout<<nps<<" "<<np<<" ";
    for(int i=0;i<n;i++){
    	
    	fib=np+nps;    
    	cout<<fib<<" "; //1      2       3      5      8
    	nps = np;    // 1        1       2      3      5
    	np =fib;    //1          2       3      5      8
      
	}

	
	
	
	return 0;
}




