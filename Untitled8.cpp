#include<iostream>
using namespace std ;
int main()
{
	for ( int o = 1 ; o <=5 ; o++ )
	{
		for ( int space =  5 ; space >o ; space--  )
		{ 
		cout<<"*";
		}
		for ( int star =  1 ; star <=o ; star++ )
		{
			cout<<" ";
		}
		cout<<"\n";
	}
}
