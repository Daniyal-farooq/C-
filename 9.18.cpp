#include<iostream>  //Never use brackets with array in function cALL
using namespace std;// assign minimum varaible the value of first element of array 
float min ( int n , float array[5] )
{
	float minimum = array[0] ;
	for ( int o = 0 ; o < n ; o ++ )
	{
		if ( minimum > array[o] )
		{
			minimum = array[o] ;
		}
	}
	return minimum ;
}
int main()
{
	float array[5]  ;
	for ( int o = 0 ; o < 5 ; o ++ )
	{
		cout<<"array["<<o<<"] = " ;
		cin>>array[o] ;
	}
	int n ;
	cout<<"Enter the length of array to be processed to find the minium : " ;
	cin>> n;
	cout<<"The minimum number is : "<< min ( n , array ) ;
	return 0 ;					 
}
