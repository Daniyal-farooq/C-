#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int outer , inner ;
	for ( outer = 6 ; outer >= 0 ; outer -= 1 )
	{
		inner = outer ;
		cout<<"\n" ;
		while( inner >= 0 )
		{
			cout<<"* " ;
			inner -- ;
		}
	}
	
}
