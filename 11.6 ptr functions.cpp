#include<iostream>
using namespace std;
int exchange ( int *p1 , int *p2 )
{
	int* x ;
	x = p1 ;
	p1 = p2 ;
	p2 = x ;
	cout<<"The value of first variable after exchange is : "<<*p1 ;
	cout<<"\nThe value of second variable after exchange is : "<<*p2 ;
	return 0 ;
}
int main()
{
	int a , b ;
	cout<<"Enter value of first variable : " ;
	cin>> a ;
	cout<<"Enter the value of the 2nd variable : " ;
	cin>> b ;
	exchange ( &a , &b ) ;
	return 0 ;
}
