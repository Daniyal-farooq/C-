#include<iostream>
using namespace std ;
int main()
{
	int n ;
	cout<<"Enter the size of the diamond in rows : " ;
	cin>> n ;
	n = n / 2 ;
	
	for ( int j = 0 ; j < n ; j++ )
	{
		for ( int i = n ; i > j ; i-- )
		{
			cout<<" ";
		}
		for ( int k = 0 ; k <= j ; k++ )
		{
			cout<<"* ";
		}
		cout<<"\n" ;
	}
	n= ++n;
	
	for ( int j = 0 ; j < n ; j++ )
	{
		for ( int i = 0 ; i < j ; i++ )
		{
			cout<<" ";
		}
		for ( int k = n ; k > j ; k-- )
		{
			cout<<"* ";
		}
		cout<<"\n";
	}
}
