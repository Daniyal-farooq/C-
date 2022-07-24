#include<iostream>
using namespace std;
int main()
{
	int number[5] ;
	int square[5] ;
	int cube[5] ;
	int sum[5] = {0};
	
	for ( int l = 0 ; l < 5 ; l++ )
	{
		cout<<"number["<<l+1<<"] = " ;
		cin>>number[l] ;
	}
	for ( int l = 0 ; l < 5 ; l++ )
	{
		square[l] = number[l] * number[l] ;
		cout<<"\nsquare["<<l+1<<"] = "<<square[l] ;
	}
	cout<<"\n";
	for ( int l = 0 ; l < 5 ; l++ )
	{
		cube[l] = number[l] * number[l] * number[l] ;
		cout<<"\ncube["<<l+1<<"] = "<<cube[l] ;
	}
	cout<<"\n";
	for ( int l = 0 ; l < 5 ; l++ )
	{
		sum[l] = number[l] + square[l] + cube[l] ; 
		cout<<"\nsum["<<l+1<<"] = "<<sum[l] ;
	}
}
