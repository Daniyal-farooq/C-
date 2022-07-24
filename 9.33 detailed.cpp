#include<iostream>
using namespace std ;
int sum_finder ( int l , int array[] , char nature = '+' )
{
	int sum = 0 ; 
	if ( nature == '+' )
	{
		for ( int o = 0 ; o < l ; o++ )
		{
			if ( array[o] > 0 )
			{
				sum = sum + array[o] ;
			}
		}
	}
		if ( nature == '-' )
	{
		for ( int o = 0 ; o < l ; o++ )
		{
			if ( array[o] < 0 )
			{
				sum = sum + array[o] ;
			}
		}
	}
	return sum ;
}
int main()
{
	int l ;
	char nature ;
	cout<<"Enter the length of the array : " ;
	cin>>l;
	int array[l] ;
	cout<<"Enter the values for the array : \n";
	for ( int o = 0 ; o < l ; o ++ )
	{
		cout<<"array[ "<<o<<" ] = ";
		cin>>array[o] ;
	}
	cout<<"Enter + to find sum of +ve values\n or - to find sum of -ve values. ";
	cin>>nature ;
	cout<<"The sum of required type of integers is : "<<sum_finder ( l , array , nature ) ;
	return 0 ;
	
}
