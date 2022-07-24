#include<iostream>
using namespace std;
void cn ( int n )
{
	if ( n % 2 == 0 )
	{
		cout<<n<<" is an even number. " ;
	}
	if ( n % 2 != 0 )
	{
		cout<<endl<<n<<" is an odd number. " ;
	}
	int divisor = 0 ;
	for ( int o = 2 ; o < n ; o ++)
	{
		if ( n % o == 0 )
		{
			divisor++ ;
		}
	}
	if ( divisor > 0 )
	{
		cout<<endl<<n<<" is not a prime number." ;
	}
}
int main()
{
	int n ;
	cout<<"Enter a number to check it's nature : " ;
	cin>> n ;
	cn ( n ) ;
	return 0 ;
}
