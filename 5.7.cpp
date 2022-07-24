#include<iostream>
using namespace std;
int main()
{
	int n1 , n2 , n3 , n4 , n5 , min , max ;
	cout<<"Enter the first variable : " ;
	cin>>n1 ;
	cout<<"Enter the second variable : " ;
	cin>>n2 ;
	cout<<"Enter the third variable : " ;
	cin>>n3 ;
	cout<<"Enter the fourth variable : " ;
	cin>>n4 ;
	cout<<"Enter the fifth variable : " ;
	cin>>n5 ;
	min = max = n1 ;
	if ( n2 > max ) //finding max 
	{
		max = n2 ;
	}
	if ( n3 > max )
	{
		max = n3 ;
	}
	if ( n4 > max )
	{
		max = n4 ;
	}
	if ( n5 > max )
	{
		max = n5 ;
	}
	
	if ( n2 < min )  //finding min
	{
		min = n2 ;
	}
	if ( n3 < min )
	{
		min = n3 ;
	}
	if ( n4 < min )
	{
		min = n4 ;
	}
	if ( n5 < min )
	{
		min = n5 ;
	}
	cout<<"The maximum value is : "<<max ;
	cout<<"\nThe minimum value is : "<<min ;
	return 0 ;
}
