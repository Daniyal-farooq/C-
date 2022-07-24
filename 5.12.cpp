#include<iostream>
using namespace std ;
int main()
{
	float marks ;
	cout<<"Enter your marks : " ;
	cin>> marks ;
	if ( marks >= 90 )
	{
		cout<<"Grade : A" ;
	}
	else if ( marks >= 89 )
	{
		cout<<"Grade : B " ;
	}
	else if ( marks >= 79 )
	{
		cout<<"Grade : C " ;
	}
	else if ( marks >= 69 )
	{
		cout<<"Grade : D " ;
	}
	else
	{
		cout<<"Grade : F " ;
	}
}
