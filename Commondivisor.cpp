#include<iostream>
using namespace std ;
int main()
{
	int a , b , c ;
	cout<<"Enter value of A variable : " ;
	cin>>a ;
	cout<<"Enter value of B variable : " ;
	cin>>b ;
	cout<<"Enter value of C variable : " ;
	cin>>c ;
	
	if ( a != 0 )
	{
		if( b%a == 0 && c%a == 0  )
		{
			cout<<"A is common divisor of B and C." ;
		}
		else
		{
			cout<<"A is not common divisor of B and C." ;
		}
	}
	else 
	{
		cout<<"A is equal to zero. So, comparison is invalid." ;
	}
	return 0 ;
}
