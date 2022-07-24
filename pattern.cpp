#include<iostream>
using namespace std ;
int main()
{
	int n ;
	cout<<"Enter the number of the rows : ";
	cin>> n ;
	
	for ( int j = 0 ; j  < n ; j++ )
	{
		for ( int i = 0 ; i < j ; i++ )
		{
			cout<<" " ;
		}
		for ( int k = j ; k < n ; k++ )
		{
			cout<<"*" ;
		}
		cout<<"\n" ;
	}
}
