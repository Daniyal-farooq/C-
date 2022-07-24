#include<iostream>
using namespace std;
int main()
{
	int arr[2][4] = {0} ;
	for ( int l = 0 ; l<= 1 ; l++ )
	{
		for ( int i = 0 ; i <= 3 ; i++ )
		{
			cout<<"\narr[ "<<l<<" ][ "<<i<<" ] = ";
			cin>>arr[l][i] ;
		}
	}
	//displaying array arr and finding min and max
	//note give min and max variable initial value from array ...
	int max = arr[1][3] , min = arr[1][3]; 
	cout<<endl<<endl;
	for ( int l = 0 ; l <= 1 ; l ++ )
	{
		for ( int i = 0 ; i <= 3 ; i ++ )
		{
			cout<<"\narr[ "<<l<<" ] = "<<i<<" ] = "<<arr[l][i] ;
			if ( max < arr[l][i] )
				max = arr[l][i];
			if ( min > arr[l][i] )
				min = arr[l][i];	
		}
	}		  
	cout<<"\nThe greatest is : "<<max;
	cout<<"\nThe smallest is : "<<min;
	return 0;
}
