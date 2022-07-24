#include<iostream>  // without using third variable
using namespace std ;
int main()
{
	float n ;
	cout<<"Enter a value : " ;
	cin>>n ;
	if ( n > 0 )
	{
		cout<<"Entered number is a Positive number. " ;
	}
	if ( n == 0 )
	{
		cout<<"Entered number is zero. " ;
	}
	if ( n < 0 )
	{
		cout<<"Entered number is a negative number. " ;
	}
}
