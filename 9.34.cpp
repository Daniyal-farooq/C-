#include<iostream>
using namespace std ;
int line (  ) ;
int line ( int n ) ;
int line ( int n , char c ) ;
int main()
{
	int n ;
	char c ; 
	line () ;
	cout<<"Enter the length to display a line of asterisks : " ;
	cin>> n ;
	line ( n ) ;
	cout<<"Enter the character whose line will be displayed : " ;
	cin>>c ;
	cout<<"Enter the length to display a line of your entered character : " ;
	cin>> n ;
	line ( n , c ) ;
	return 0 ;  
}
int line (  ) 
{
	cout<<"**********\n" ;
	return 0 ;
}
int line ( int n  )
{
	for ( int o = 0 ; o < n ; o++ )\
	{
		cout<<"*" ;
	}
	cout<<endl ;
	return 0 ;
}
int line ( int n , char c ) 
{
	for ( int o = 0 ; o < n ; o ++ )
	{
		cout<< c ;
	}
	return 0 ;
}
