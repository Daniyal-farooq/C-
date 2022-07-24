#include<iostream>
using namespace std;
int main()
{
	int year ;
	cout<<"Please enter a year number : " ;
	cin>> year ;
	if ( year % 4 == 0 )
	{
		cout<<"Your entered year is a leap year." ;
	}
	else 
	{
		cout<<"Your entered year is not a leap year." ;
	}
	return 0;
}
