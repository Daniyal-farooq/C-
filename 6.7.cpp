#include<iostream>
using namespace std ;
int main()
{
	int n , b, fact = 1 ; 
	cout<<"Enter a number whose factorial is to be displayed : " ;
	cin>> n ;
	b = n ;
	while ( b >= 1 )
	{
		fact = fact*b ;
		b-- ;
	}
	cout<<"Fact is : " <<fact ;
}
