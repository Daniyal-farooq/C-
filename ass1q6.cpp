#include<iostream>
using namespace std ;
int print ( char array[26] )
{
	//getting array values
	for ( int o = 0 ; o < 26 ; o ++ )
	{
		cout<<"\narray[ "<<o<<" ] = " ;
		cin>>array[o] ;
	}
	//printing array values
	for ( int o = 0 ; o < 26 ; o ++ )
	{
		cout<<"\narray[ "<<o<<" ] : "<<array[o] ;
	}
}
int main() 
{
	char array[26] = {0} ;
	print ( array ) ;
	return 0 ;
}
