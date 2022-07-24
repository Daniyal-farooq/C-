#include<iostream>
using namespace std ;
int sum ( int n1 = 5 , int n2 = 43 ) ;
int main()
{
	int n1 , n2 ;
	sum (  ) ;
	sum ( 1 ) ;
	sum ( 5 , 10 ) ;
	return 0 ;
	
}
int sum ( int n1 , int n2 )
{
	cout<<"\nThe sum is : "<<n1 + n2 ;
	return 0 ;
}
