#include<iostream>
using namespace std;
int main()
{
	int  start,end,odd;
	cout<<"Enter starting number : ";
	cin>>end ;
	cout<<"Enter ending number : ";
	cin>>start ;
	if ( start % 2 == 0 )
	{
		start -= 1 ;
		do
		{
			cout<<"\n"<<start;
			start -= 2 ;
		}
		while ( start >= end );
	}
	else if ( start % 2 != 0 )
	{ 
		do
		{
			cout<<"\n"<<start;
			start -= 2;
		}
		while ( start >= end );
		
	}
	
}
