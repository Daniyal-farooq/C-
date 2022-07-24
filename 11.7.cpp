#include<iostream>
using namespace std;
int get ( int* ptr ) 
{
	cout<<"Enter the value of the variable : " ;
	cin>>*ptr ;
	return 0 ;
}
int doubler ( int* ptr )
{
	*ptr = *ptr * 2 ;
	return 0 ;
}
int main()
{
	int n1 ;
	get ( &n1 ) ;
	cout<<"The value you entered is : "<<n1 ;
	doubler ( &n1 ) ;
	cout<<"\nThe value of variable after doubling is : "<<n1 ;
	return 0 ;
}
