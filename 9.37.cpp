#include<iostream>
using namespace std ;
int sol ( int n1 , int n2  )
{
	if ( n2 == 0 )
	{
		return 1 ;
	}
	if ( n2 == 1 )
	{
		return n1 ;
	}
	else if ( n2 > 1 )
	{
		return n1 * sol( n1 , n2 - 1 ) ;
	}
}
int main()
{
	int n1 , n2 ;
	cout<<"Enter first number : ";
	cin>>n1 ;
	cout<<"Enter second number : ";
	cin>>n2 ;
	cout<<"The first number raised to power second number : "<<sol ( n1 , n2  ) ;
	return 0 ;
}
