#include<iostream>
using namespace std;
int main()
{
	int o = 4  , n = 4,i = 4;
	do
	{
		cout<<"\n";
		i = o ;
		do
		{   
			cout<<o;
			i -- ;
			
		}
		while ( i >= 1 ) ;
		o -- ;	
	}
	while ( o >= 1 ) ;
}
