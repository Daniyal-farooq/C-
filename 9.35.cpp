#include<iostream>
using namespace std;
int length ;
int sum_finder ( int array[] ) ;
int sum_finder ( int array[] , char choice );
int main()
{
	char choice ;
	cout<<"Enter length of the array : " ;
	cin>>length ;
	int array[length] ;
	cout<<"Enter the values of array : \n" ;
	for ( int o = 0 ; o < length ; o++ )
	{
		cout<<"array[ "<<o <<" ] = " ;
		cin>>array[o] ;
	}
	cout<<"The sum of all the values of array is : "<<sum_finder ( array ) ;
	cout<<"\nEnter 'O' to find sum of all the Odd numbers and 'E'for sum of all\nEven numbers : " ;
	cin>>choice ;
	cout<<"\nTHe sum is : "<<sum_finder ( array , choice ) ;
	return 0 ;
}
int sum_finder ( int array[] )
{
	int sum = 0 ;
	for ( int o = 0 ; o <length ; o ++ )
	{
		sum = sum + array[o] ;
	}
	return sum ;
}
int sum_finder ( int array[] , char choice )
{
	int sum = 0 ;
	if ( choice == 'E'|| choice == 'e' )
	{
		for ( int o = 0 ; o <length ; o ++ )
		{
			if ( array[o] % 2 == 0  )
			{
				sum = sum + array[o] ;
			}
		}
	}
	else if ( choice == 'O' || choice == 'o' )
	{
		for ( int o = 0 ; o <length ; o ++ )
		{
			if ( array[o] % 2 != 0  )
			{
				sum = sum + array[o] ;
			}
		}
	}
	else 
	{
		sum == 0 ;
	}
	return sum ;
}
