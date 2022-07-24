#include<iostream>
using namespace std ;
int main()
{
	float salary ;
	cout<<"Enter your salary : " ;
	cin>>salary ;
	if ( salary >= 20000 )
	{
		salary = salary - ( (salary/100)* 7 ) ;
	}
	if ( salary >= 10000 )
	{
		salary = salary -  1000 ;
	}
	if ( salary < 10000 )
	{
		salary = salary ;
	}
	cout<<"The net salary is :  "<<salary ;
	return 0 ;
}
