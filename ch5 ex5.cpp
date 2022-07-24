#include<iostream>
using namespace std ;
int main()
{
	char choice ;
	float degrees ,final_temperatrure ;
	cout<<"Enter 'f' or 'c' to enter temperature in Fahrenheit or in Celsius : " ;
	cin>> choice ;
	cout<<"Enter the degrees of temperature : " ;
	cin>>degrees ;
	if ( choice == 'c' )
	{
		final_temperatrure = ( degrees - 32) * ( 5.0 / 9.0 ) ;
		cout<<"The temperature in Fahrenheit is : "<<final_temperatrure ;
	}
	else if ( choice == 'f' )
	{
		final_temperatrure = degrees * ( 9.0 / 5.0 ) + 32. ;
		cout<<"Temperature in Celsius is : "<<final_temperatrure;
	}
	else
	{
		cout<<"Invalid temerature format.Exiting the program." ;
	}
	return 0 ;
}
