//C++ Program to Find All Roots of a Quadratic Equation
// if D=b^2 -4ac =0 ==> The quadratic equation will have equal roots i.e. α = β = -b/2a
//If D=b^2 -4ac < 0 ==>  realPart = -b/(2*a)  imaginaryPart =sqrt(-D)/(2*a);
//If D=b^2 -4ac > 0 ==>  x1 = (-b + sqrt(D)) / (2*a); x2 = (-b - sqrt(D)) / (2*a);

#include<iostream>
#include<math.h>
using namespace std;

int main(){
    float a,b,c,D,x1,x2,xreal,ximag;
    cin>>a>>b>>c;
	cout<<"The equation is "<<a<<"x^2 + "<<b<<"x +"<<c<<endl;
	  D= b*b -4*a*c;
     if(D == 0){
     	cout<<"THe equation have equal roots\n";
     	x1 =-b/2*a;
     	x2 =x1;
     	cout<<"The value of x1 and x2 is "<<x1;
     	
	 }else if(D > 0){
	 	cout<<"THe equation have equal roots\n";
	 	x1 = (-b + sqrt(D)) / (2*a);
	 	x2 = (-b - sqrt(D)) / (2*a);
	 	cout<<"The value of x1 and x2 is "<<x1<<endl<<x2;
	 }else{
	 xreal = -b/(2*a) ;
	 ximag =sqrt(-D)/(2*a);
	 cout<<xreal<<endl<<ximag;
	 }
	return 0;
}



