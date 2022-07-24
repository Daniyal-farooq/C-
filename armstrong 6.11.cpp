#include<iostream>
using namespace std;
int main()
{
	int number,secondnumber,sum = 0,r;
	cout<<"Enter a number : ";
	cin>>number;
	secondnumber =number ;
	while ( secondnumber != 0  )
	{
		r = secondnumber % 10 ;
		sum = sum + ( r * r * r  ) ;
		secondnumber = secondnumber / 10;
	}
	if ( sum == number  )
	cout<<"\n"<<number<<" is an Armstrong number .";
	else
	cout<<"\nNot an Armstrong.";
}
