#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int o,j,sum  ;
	for ( o =1 ; o <= 5 ; o++ )
	{
		cout<<"\n"<<1 ;
		sum = 1 ;
		for ( j = 2 ; j <= o ; j++ )
		{
			cout<<" + "<<j ;
			sum = sum + j ;
			
		}
	cout<<" = "<<sum ;	
	}
}
