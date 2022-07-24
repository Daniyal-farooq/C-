#include<iostream>
using namespace std;
bool mul( int n1, int n2 )
{
	if ( n2 % n1 == 0 )
	{
		return 1;
	}
	else if ( n1 % n1 != 0 )
	{
		return 0 ;
	}
}
int main()
{
	int n1 , n2 , x;
	cout<<"Enter first pair of integers : ";
	cin>>n1>>n2 ;
	x = mul( n1 , n2 ) ;
	if ( x == 0 )
	{
		cout<<"\n"<<n2<<" is not a multiple of "<<n1 ;
	}
	if ( x == 1 )
	{
		cout<<"\n"<<n2<<" is a multiple of "<<n1 ;
	}
	return 0 ;
}
