#include<iostream>
#include<iomanip>
using namespace std ;
int main()
{
	float n1,n2 ;
	char op ;
	cout<<"Enter first number : " ;
	cin>>n1 ;
	cout<<"Enter second number : " ;
	cin>>n2 ;
	cout<<"Enter the operator( +, -, *, /) : " ;
	cin>>op ;
	
	switch ( op )
	{
		case '+':
			{
				cout<<"The expression evaluates to : "<<n1 + n2 ;
				break ;
			}
		case '-':
			{
				cout<<"The expression evaluates to : "<<n1 - n2 ;
				break ;
			}
		case '*':
			{
				cout<<"The expression evaluates to : "<<n1 * n2 ;
				break ;
			}
		case '/':
			{
				if ( n2 != 0 )
				{
				  cout<<"The expression evaluates to : "<<setprecision(4)<<n1 / n2 ;
				}
				break ;
			}
		deafault :
			{
				cout<<"Invalid operator." ;
			}				
	}
	return 0 ;

}
