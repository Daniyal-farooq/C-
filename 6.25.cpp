#include<iostream>
using namespace std;
int main()
{
	int n1,n2,lcm,max ;
	cout<<"Enter first number : " ;
	cin>>n1;
	cout<<"Enter 2nd number : " ;
	cin>>n2 ;
	if ( n1 > n2  )
		max = n1 ;
	if ( n2 > n1  )
		max = n2 ; 	
	do
	{	if ( max % n1 == 0 && max % n2 == 0 )
		{
			lcm = max ;
			break ;
		}
		else if ( max % n1 != 0 && max % n2 != 0 )
		{
			max += 1 ;
		}
	}
	while (1);
	cout<<"\nLCM is "<<lcm;
}
