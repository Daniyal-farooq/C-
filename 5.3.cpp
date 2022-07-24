#include<iostream>
using namespace std ;
int main()
{
	float n1 , n2 ;
	cout<<"Please enter first number : " ;
	cin>>n1 ;
	cout<<"Enter second number : " ;
	cin>>n2 ;
	if ( n2 == n1 * n1 )
	{
		cout<<"Yes.The second number is square of the first number. " ;
	}
	if ( n2 != n1 * n1 )
	{
		cout<<"No.The second number is not square of the first number. " ;
	}
	 
}
