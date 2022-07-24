#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int numbers[5] ;
	int squares[5] ;
	int cubes  [5] ;
	int sums   [5] ;
	for ( int o = 0 ; o < 5 ; o++ )
	{
		numbers[o] = o;
	}
	for ( int o = 0 ; o < 5 ; o++ )
	{
		squares[o] = numbers[o] * numbers[o];
	}
	for ( int o = 0 ; o < 5 ; o++ )
	{
		cubes[o] = numbers[o] * numbers[o] * numbers[o] ;
	}
	for ( int o = 0 ; o < 5 ; o++ )
	{
		sums[o] = numbers[o] + squares[o] + cubes[o] ;
	}
	//displaying numbers array
	cout<<setw(10)<<fixed<<"\nNumbers : ";
	for ( int o = 0 ; o < 5 ; o++ )
		cout<<numbers[o]<<"\t";
	
	cout<<setw(10)<<fixed<<"\nsquares : ";
	for ( int o = 0 ; o < 5 ; o++ )
		cout<<squares[o]<<"\t";
	cout<<setw(10)<<fixed<<"\ncubes : ";
	for ( int o = 0 ; o < 5 ; o++ )
		cout<<cubes[o]<<"\t";
	cout<<setw(10)<<fixed<<"\nsums : ";
	for ( int o = 0 ; o < 5 ; o++ )
		cout<<sums[o]<<"\t";			
}
