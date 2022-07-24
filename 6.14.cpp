#include<iostream>
using namespace std;
int main()
{	int start,n,end;
	cout<<"Enter starting number of range : ";
	cin>>start;
	cout<<"Enter ending number of range : ";
	cin>>end;
	n = start;
	if ( start % 2 == 0 )
	{
		while ( n <= end )
		{
			cout<<"\n"<<n;
			n += 2 ;
			
		}
	  	
			
	}
	if ( start % 2 != 0 )
	{	n += 1 ;
		while ( n <= end )
		{
			cout<<"\n"<<n;
			n += 2 ;
			
		}
	  	
			
	}
}
