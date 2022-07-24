#include<iostream>
using namespace std ;
int main()
{
	int l = 5 , i , j , k ;
	
	for ( i = 1 ; i <= l ; i++ )
	{
		for ( j = 5 ; j>i ; j-- )
		{
			cout<<" ";
		}
		for ( k = 1 ; k <= i ; k++ )
		{
			cout<<"*";
		}
		cout<<"\n";
	}
}
