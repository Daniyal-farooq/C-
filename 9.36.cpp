#include<iostream>
using namespace std;
long fact ( long number )
{
	if ( number == 0 )
	{
		return 1 ;
	}
	else if ( number > 0 )
	{
		return number * fact( number - 1 ) ;
	}
}
int main()
{
	long number ;
	cout<<"Enter a number to find it's factorial : ";
	cin>>number  ;
	cout<<"The factorial of the given number is :  "<<fact ( number ) ;
	return 0 ;
}
