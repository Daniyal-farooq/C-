#include<iostream>
using namespace std ;
int sum ( int n1 , int n2 ) 
{
	return ( n1 + n2 ) ;
}
int main()
{
	int n1 , n2 ;
	cout<<"Enter value of first variable : " ;
	cin>> n1 ;
	cout<<"Enter value of second variable : " ;
	cin>> n2 ;
	cout<<"The sum of both numbers is : "<<sum( n1 , n2 ) ;
	return 0 ;
}
