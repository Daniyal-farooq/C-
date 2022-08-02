#include<iostream>
using namespace std ;
int main()
{
	int s;
	for( int o = 1 ; o <= 6 ; o++ )
	{
		for (  s = 0 ; s <o ; s++ )
		{
			cout<<" ";
		}
		for ( int d = 1 ; d <= 6-s+1 ; d++ )
		{
			cout<<d;
		}
		cout<<endl;
	}
}

