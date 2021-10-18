// C++ Program to raise any number X to power N
 /* There are two method to solve the power of any number
  Method-01
  
 #include<iostream>
  #include<math.h>
  using namespace std ;
  
  int main (){
  	double X,N;
  	cout<<"Enter the value of X and N\n";
  	cin>>X>>N;
  	cout<<"the value of"<< N<<" power of "<<X <<" is:"<<pow(X,N);
  	return 0;
  } */
   
   //Method -02
   
  #include<iostream>
  using namespace std ;
  
  int main (){
  	double R=1,X,N;
  	cout<<"Enter the value of X and N\n";
  	cin>>X>>N;
  	cout<<"the value of"<< N<<" power of "<<X <<" is:";
  	while (N != 0){
  		R *= X;
  		N--;
	  }
	  cout<<R;
  	return 0;
  }





