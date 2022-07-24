#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int outer,inner,number,ans;
	cout<<"\nEnter a number : " ;
	cin>>number ;
	for ( outer = 1 ; outer < number ; outer ++  )
	{
		if ( number % outer == 0  )
		{
			ans = number / outer ;
			if ( outer == ans || ans == outer )
			{
				break;
			}
			cout<<"\n"<<ans <<"*"<<outer ;
			
		}
	}
	
}
