#include<iostream>
using namespace std;
int factorial( int a ) ;
int main()
{
	int n ;
	cout<<"Enter a number to find it's FACTORIAL : " ;
	cin>> n ;
	factorial( n );
	return 0 ;
}
int factorial( int a )
{
	int fact = 1 ;
	for ( int l = a ; l >0 ; l-- )
	{
		fact = fact * ( l ) ;
	}
	cout<<"\nTHe FACTORIAL is : "<<fact ;
	return 0 ;
	 
}
