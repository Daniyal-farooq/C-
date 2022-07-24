#include<iostream>
using namespace std;
int main()
{
	int number[30] ;
	int prime = 0 ;
	int checker ;
	cout<<"Enter the values of the arrays.\n" ;
	for ( int l = 0 ; l< 30 ; l++ )
	{
		cout<<"number["<<l+1<<"] = " ;
		cin>>number[l];
	}
	
	for ( int l = 0 ; l< 30 ; l++ )
	{
		checker = 0 ;
		for ( int i = 2 ; i <= ( number[l]/2 ) ; i++ )
		{
			if ( number[l] % i == 0  )
			{
				checker = 1 ;
				break;
			}
			
		}
		if ( checker == 0 )
		{
			prime = prime+1 ;
		}
	}
	cout<<"Amount of prime numbers is : "<<prime;
}
