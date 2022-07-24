#include<iostream>
using namespace std;
int main()
{
	int calls ;
	float bill ;
	cout<<"Enter number of calls : " ;
	cin >> calls ;
	if ( calls <= 100 )
	{
		bill =  200 ;
	}
	else if ( calls > 100 && calls <= 150 )
	{
		bill =  200 + (calls%100) * 0.60 ;
	}
	else if ( calls > 150 && calls <= 200 )
	{
		bill = 200 + (50 * 0.60) + (calls%150) * 0.50 ;
	}
	else if ( calls > 200 )
	{
		bill = 200 + (50 * 0.60) + ( 50 * 0.50 ) + ((calls-200) * 0.40 ) ;
	}
	cout<<"Total bill : "<<bill ;
	return 0 ;
}
