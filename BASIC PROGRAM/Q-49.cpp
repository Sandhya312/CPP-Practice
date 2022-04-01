//C++ Program to Calculate Average Percentage Marks
#include<bits/stdc++.h>

using namespace std;

int main(){
    int subject;
    float average,sum=0;
    cout<<"Enter the no of subjects";
    cin>>subject;
    int marks[subject];
    for(int i =0;i<subject;i++){
    	cout<<"Enter the marks of subject"<<i+1<<" ::";
    	cin>>marks[i];
	}
	for(int i=0;i<subject;i++){
		 sum += marks[i];
	}
	average = sum/subject;
	cout<<"The percentage average of marks are ::"<<average<<"%";
   
	return 0;
	
}