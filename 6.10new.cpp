#include<iostream>
using namespace std;
int main()
{
	int n , b , sum_odd = 0 , sum_even = 0 ;
	cout<<"Enter a number : " ;
	cin>>n ;
	b = 1 ;
	while ( b <= n )
	{
		if ( b%2 == 0 )
		{
			sum_odd = sum_odd + b ;
		}
		if ( b%2 != 0 )
		{
			sum_even = sum_even + b ;
		}
		b++ ;
	}
	cout<<"The sum off odds : "<<sum_odd;
	cout<<"\nThe sum off evens : "<<sum_even;
}
