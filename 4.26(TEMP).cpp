#include<iostream>
using namespace std ;
int main()
{
	float celsius , fahrenheit ;
	cout<<"Please enter temperature i n celsius count : "; 
	cin>>celsius ;
	cout<<"*****CONVERTING IN FAHRENHEIT*****\n" ;
	fahrenheit = ( 9.0/5.0 ) * celsius + 32.0 ;
	cout<<"Temperature : "<<fahrenheit<<" f." ;
	return 0 ;
}
