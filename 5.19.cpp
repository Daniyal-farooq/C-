#include<iostream>
using namespace std ;
int main()
{
	float n1 , n2 , n3 , max ;
	cout<<"Enter first value : " ;
	cin>> n1 ;
	cout<<"Enter second value : " ;
	cin>> n2 ;
	cout<<"Enter third value : " ;
	cin>> n3 ;
	if ( n1 > n2 && n1 > n3 )
	{
		max = n1 ;
	}
	if ( n2 > n1 && n2 > n3 )
	{
		max = n2 ;
	}
	if ( n3 > n1 && n3 > n2 )
	{
		max = n3 ;
	}
	cout<<"The max value amongst the given values is : " <<max;
	return 0 ;
}
