#include<iostream>
using namespace std ;
int main()
{
	float l , sum = 0 ,s , x = 0 ;
	s = 1. ;
	while ( s >= 1./100. )
	{
		sum = sum + s ;
		x+=2;
		s = 1/x ;
	}
	cout<<sum ;
}
