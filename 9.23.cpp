#include<iostream>
using namespace std;
int even_count ( int array1[] ) 
{
	int even = 0 ;
	for (int o = 0 ; o < 5 ; o ++ )
	{
		if ( array1[o] % 2 == 0 )
		{
			even ++  ;
			
		}
	}
	return even ;
}
int main()
{
	int array1[5] = { 0 } ;
	cout<<"Enter the values of the array(integers) : \n" ;
	for( int o = 0 ; o<5 ; o ++ )
	{
		cout<<"array1[ "<<o<<" ] = " ;
		cin>>array1[ o ] ;
	}
	cout<<"Even numbers in the array equals : "<<even_count ( array1 ) ;
	return 0 ;
}
