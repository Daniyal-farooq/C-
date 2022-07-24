#include<iostream>
using namespace std ;
int print ( int array[5] )
{
	//getting array values
	for ( int o = 0 ; o < 5 ; o ++ )
	{
		cout<<"\narray[ "<<o<<" ] = " ;
		cin>>array[o] ;
	}
	//printing array values
	for ( int o = 0 ; o < 5 ; o ++ )
	{
		cout<<"\narray[ "<<o<<" ] : "<<array[o] ;
	}
}
int main() 
{
	int array[5] = {5,6,7,8,9} ;
	print ( array ) ;
	return 0 ;
}
