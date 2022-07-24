#include<iostream>
using namespace std ;
int main()
{
	float n1 , n2 , n3 , max ;
	cout<<"Enter first number : " ;
	cin>>n1 ;
	cout<<"Enter second number : " ;
	cin>>n2 ;
	cout<<"Enter third number : " ;
	cin>>n3 ;
	max = n1 ;
	
	if ( n2 > max )
	{
		if ( n2 > n3 )
		{
			max = n2 ;
		}
		else if ( n2 < n3 )
		{
			max = n3 ;
		}
	}
	else if ( n3 > max )
	{
		if ( n3 > n2 )
		{
			max = n3 ;
		}
		else if ( n3 < n2 )
		{
			max = n2 ;
		}
	}
	cout<<"The maximum value amongst the given values is : "<<max ;
	return 0 ;
}
