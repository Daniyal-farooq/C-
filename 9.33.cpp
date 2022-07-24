#include<iostream>
using namespace std ;
int sum_finder ( int array[9] , char nature = '+' )
{
	int sum = 0 ;
	if ( nature == '+' )
	{
		for ( int o = 0 ; o < 9 ; o++ )
		{
			if ( array[o] > 0 )
			{
				sum = sum + array[o] ;
			}
		}
		cout<<"Sum of all +ve numbers is : " ;
	}
	if ( nature == '-' )
	{
		for ( int o = 0 ; o < 9 ; o++ )
		{
			if ( array[o] < 0 )
			{
				sum = sum + array[o] ;
			}
		}
		cout<<"Sum of all -ve numbers is : " ;
	}
	return sum ;
}
int main()
{
	int array[9] ; 
	char nature ;
	
	cout<<"Enter the values of the array...., \n" ;
	for ( int o = 0 ; o < 9 ; o++ )
	{
		cout<<"array[ "<<o<<" ] = " ;
		cin>> array[o] ;
	}
	cout<<"Enter + to find sum of only positive numbers of the array or \n - to find the sum of only negative numbers of the array : " ;
	cin>>nature ;
	cout<<sum_finder ( array , nature ) ;
	return 0 ;
 }
