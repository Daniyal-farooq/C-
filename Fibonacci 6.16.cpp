#include<iostream>
using namespace std;
int main()
{
	int input,number = 1,loop = 0,last2 = 0 , last = 0;
	cout<<"Enter the number : ";
	cin>>input;
	while ( loop <= 10 )
	{	
		if ( input == number  )	
		{
			cout<<"\nFibonaci.";
		}
	
		last2 = last ;
		last = number;
		number = last + last2;
		loop++ ;
	}
	if ( input != number )
	{
	cout<"\nNot Fibonacci.";
	}
}
