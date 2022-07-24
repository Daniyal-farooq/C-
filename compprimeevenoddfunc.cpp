#include<iostream>
using namespace std;
int chk ( int a );
int main (  )
{
	int n ;	cout<<"Enter a number to find if it if prime/composite/even/odd : " ;
	cin>>n ;
	chk ( n ) ;
	return 0 ;
}
int chk ( int a )
{
	int l = 1 , check = 0 ;
	while ( l <= a )
	{
		if ( a % l == 0 )
		{
			check ++ ;
		}
		l++ ;
	}
	if ( check > 2 && a % 2 == 0 )
	{
		cout<<"\nIt is a composite number and even number ." ;
	}
	else if ( check == 2 && a % 2 == 0 )
	{
		cout<<"\nIt is a prime number and even number ." ;
	}
	else if ( check > 2 && a % 2 != 0 )
	{
		cout<<"\nIt is a composite number and odd number ." ;
	}
	else if ( check <= 2 && a % 2 == 0 )
	{
		cout<<"\nIt is a prime number and even number ." ;
	}
	else if ( a % 2 == 0 )
	{
		cout<<"\nIt is even number ." ;
	}
	else if ( a % 2 != 0 )
	{
		cout<<"\nIt is odd number ." ;
	}
	return 0 ;
}
