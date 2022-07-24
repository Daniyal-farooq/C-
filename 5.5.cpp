#include<iostream>  // without using third variable
using namespace std ;
int main()
{
	float n1 , n2 , n3 ;
	cout<<"Enter first valuer : " ;
	cin>>n1 ;
	cout<<"Enter second valuer : " ;
	cin>>n2 ;
	cout<<"Enter third valuer : " ;
	cin>>n3 ;
	if ( n1 > n2 )
	{
		if ( n1 > n3 )
		{
			cout<<n1<<" is the maximum value." ;
		}
		if ( n3 > n1 )
		{
			cout<<n3<<" is the maximum value." ;
		}
		
	}
	if ( n2 > n1 )
	{
		if ( n2 > n3 )
		{
			cout<<n2<<" is the maximum value." ;
		}
		if ( n3 > n2 )
		{
			cout<<n3<<" is the maximum value." ;
		}
	}

}
