#include<iostream>
using namespace std ;
int main()
{
	int seconds , minutes , hours ;
	cout<<"Enter time in seconds : " ;
	cin>> seconds ;
	cout<<"****CONVERTING IN H-M-S FORMAT****\n" ;
	hours   = seconds / 3600 ;  // first hours are separated from seconds
	seconds = seconds % 3600 ;  //then remainder seconds are stored in seconds variable
	minutes = seconds / 60 ;    //then minutes are separated from the left of the seconds
	seconds = seconds % 60 ;    //then all the remaining seconds are stored in seconds variable
	cout<<"HH-MM-SS\n" ;
	cout<<hours<<"-"<<minutes<<"-"<<seconds ;
	return 0 ;
}
