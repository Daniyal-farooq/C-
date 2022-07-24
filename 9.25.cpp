#include<iostream>
using namespace std;
int max ( int array1[3][2] )
{
	int maximum = array1[0][0] ;
	for ( int o = 0 ; o <3 ; o ++ )
	{
		for( int i = 0 ; i < 2 ; i ++ )
		{
			if ( maximum < array1[o][i] )
			{
				maximum = array1[o][i] ;
			}
		}
	}
	return maximum ;
}
int main()
{
	int array1[3][2] = { 0 } ;
	cout<<"Enter array values : \n" ;
	for ( int o = 0 ; o < 3 ; o ++ )
	{
		for ( int i = 0 ; i < 2 ; i ++ )
		{
			cout<<"array1[ "<<o<<" ][ "<<i<<" ] = " ;
			cin>>array1[o][i] ; 
		}
	}
	//passing whole array to function to find and return the maximum value among all values 
	
	cout<<"The maximum value amongst all the value is : "<<max ( array1 ) ;
	return 0 ;
}

