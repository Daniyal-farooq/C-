#include<iostream>
using namespace std ;
int main()
{
	for (int i = 11 ; i <=25 ; i++)
	{
		for ( int n = 3 ; n < i-1 ; n++ )
		{
			
			if( i%2!=0 && i%n ==0)
			{
				cout<<i<<" is a Composite.\n";
				break;
			}
			if ( i%2!=0 && i%n !=0 ) 
			{
				cout<<i<<" is a Prime number.\n";
				break;
			}
				
		}
	}
	return 0 ;
}
