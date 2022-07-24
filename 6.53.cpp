#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int o,i,m ;
	for ( o = 1 ; o <= 5 ; o++ )
	{
		for ( i = 1 ; i <= 5-o ; i++ )
			cout<<" ";
		for ( m = 1 ; m <= o ; m ++ )
			cout<<"*" ;
		cout<<"\n" ;		
	}
}

		



