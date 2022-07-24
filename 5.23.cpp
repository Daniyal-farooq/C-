#include<iostream>
using namespace std ;
int main()
{
	int number ;
	cout<<"Enter an number : " ;
	cin>> number ;
	if ( number%2 != 0  )
	{
		cout<<"You entered an odd number." ;
	}
	else
	{
		cout<<"You entered an even number." ;
	}
	return 0 ;
}
