#include<iostream>
using namespace std;
int line();
int line( int n );
int line ( int n , char c ) ;
int main()
{
	line (  ) ;
	line ( 5 ) ;
	line ( 10 , '#' ) ;
	return 0;
}
int line()
{
	cout<<"**********\n" ;

return 0 ;
}
int line ( int n )
{
	for ( int o = 0 ; o < n ; o++ )
	{
		cout<<"*" ;
	}
	cout<<endl ;
}
int line ( int n , char c )
{
	for ( int o = 0 ; o < n ; o++ )
	{
		cout<< c ;
	}
	cout<<endl ; 
}
