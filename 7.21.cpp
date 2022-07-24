#include<iostream>
using namespace std;
int main()
{
	int arr1[4][2] = { 0 } ;
	int arr2[4][2] = { 0 } ;
	int arr3[4][2] = { 0 } ;
	//getting values for arr1
	for ( int l = 0 ; l <= 3 ; l++ )
	{
		for ( int i = 0 ; i <= 1 ; i ++ )
		{
			cout<<"\narr1[ "<<l<<" ][ "<<i<<" ] = " ;
			cin>>arr1[l][i];
		}
	}
	//getting values for arr2
	for ( int l = 0 ; l <= 3 ; l++ )
	{
		for ( int i = 0 ; i <= 1 ; i ++ )
		{
			cout<<"\narr2[ "<<l<<" ][ "<<i<<" ] = " ;
			cin>>arr2[l][i];
		}
	}
	//adding arr1 and arr2 to get arr3
	for ( int l = 0 ; l <= 3 ; l++ )
	{
		for ( int i = 0 ; i <= 1 ; i ++ )
		{
			arr3[l][i] = arr1[l][i] + arr2[l][i] ;
		}
	}
	
	//displaying arr1 as matrix
	cout<<"\nThe first array is given below .\n" ; 
	for ( int l = 0 ; l <= 3 ; l++ )
	{
		for ( int i = 0 ; i <= 1 ; i ++ )
		{
			cout<<arr1[l][i]<<"\t";
		}
		cout<<endl;
	}
	//displaying arr2 as matrix
	cout<<"\nThe second array is given below .\n" ;
	for ( int l = 0 ; l <= 3 ; l++ )
	{
		for ( int i = 0 ; i <= 1 ; i ++ )
		{
			cout<<arr2[l][i]<<"\t";
		}
		cout<<endl;
	}
	//displaying arr3 (the sum array)
	cout<<"\nThe third array is given below .\n" ;
	for ( int l = 0 ; l <= 3 ; l++ )
	{
		for ( int i = 0 ; i <= 1 ; i ++ )
		{
			cout<<arr3[l][i]<<"\t" ;
		}
		cout<<"\n";
	}
	
	return 0 ;
}
