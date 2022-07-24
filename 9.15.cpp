#include<iostream>
using namespace std;
int square ( int a )
{
	return a*a ;
}
int cube ( int b )
{
	return b*b*b ;
}
int main()
{
	int a,b ;
	cout<<"Enter an integer : ";
	cin>>a;
	cout<<"Enter another integer : ";
	cin>>b;
	cout<<"The square of first number is : "<<square ( a ) ;
	cout<<"\nThe cube of second integer is : "<<cube ( b ) ;
	cout<<"\nThe sum of both returned values is : "<<square ( a )+ cube ( b ) ;
	return 0 ;
	
}
