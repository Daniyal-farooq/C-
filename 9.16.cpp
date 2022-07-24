#include<iostream>
using namespace std;
int gcd ( int a , int b ) ;
int main()
{
	int a,b ;
	cout<<"Enter first number : " ;
	cin>>a;
	cout<<"Enter second number : ";
	cin>>b ;
	cout<<"GCD of both numbers is : "<<gcd ( a ,b ) ;
	return 0 ;
	 
}
int gcd ( int a , int b )
{
	int smallest,f ;
	if ( a > b )
	 smallest = a;
	if ( b > a )
	 smallest = b; 
	for ( int l = 1 ; l <= smallest ; l++ )
	{
		if ( a % l == 0 && b % l == 0 )
		f = l ;
	}
	return f ;
}
