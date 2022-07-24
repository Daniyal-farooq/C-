#include<iostream>
using namespace std;
int fun()
{
	static int n = 1 ;
	cout<<"\nValue of n : "<<n ;
	n++ ;
	return 0 ;
}
int main()
{
	for ( int o = 0 ; o < 5 ; o++ )
	{
		fun();
	}
	return 0 ;
}
