#include<iostream>
using namespace std;
int main()
{
	int r,c,sum ;
	cout<<"Enter number of rows of matrix : ";
	cin>>r ;
	cout<<"Enter number of columns of the matrix : ";
	cin>>c ;
	int arr[r][c] = { 0 } ;
	//getting values for matrix from user 
	for (int o = 0 ; o < r ; o ++ )
	{
		for (int i = 0 ; i < c ; i ++ )
		{
			cout<<"arr[ "<<o<<" ][ "<<i<<" ] = "; 
			cin>>arr[o][i] ;
		}
		
	}
	//displaying matrix form array
	for (int o = 0 ; o < r ; o ++ )
	{
		for (int i = 0 ; i < c ; i ++ )
		{
			cout<<arr[o][i]<<"\t"; 
		}
		cout<<"\n" ;
	}
	//sum of each row
	for ( int o = 0 ; o < r ; o++)
	{
		sum = 0 ;
		for( int i = 0 ; i < c ; i++ )
		{
			sum = sum + arr[o][i] ;
		}
		cout<<"Sum of row "<<o+1<<" = "<<sum <<endl; 
	}
	//sum of each column
	for ( int o = 0 ; o < r ; o++) //incomplete
	{
		sum = 0 ;
		for( int i = 0 ; i < c ; i++ )
		{
			sum = sum + arr[i][o] ;
		}
		cout<<"Sum of column "<<o+1<<" = "<<sum <<endl; 
	}
	return 0 ;
}
