//C++ Program to Convert Days Into Years, Weeks and Days

  #include<iostream>
  using namespace std ;
  
  int main (){
  	int no_of_days , year,week, days;
  	cout<<"ENter the value of no_of_days\n";
  	cin>>no_of_days;
  	year = no_of_days /365;
  	week = no_of_days /7;
  	days = (no_of_days %365)%7;
  	cout<<"the no of years :"<<year<<endl<<"the no of weeks :"<<week<<endl<<"the no of days :"<<days<<endl;
  	
  	
  	return 0;
  }

