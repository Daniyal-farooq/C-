#include<iostream>
using namespace std;
int main()
{
	 int sum = 0, o,i ;
	int arr[ 3 ][ 2 ] = { { 1,2  } , { 3,4 } , { 5,6 } } ;
	
	for( o = 0 ; o < 3 ; o++ )
	{
		for ( i = 0 ; i < 2 ; i ++ )
		{
			cout<<arr [ o ] [ i ] <<"\t" ;
			sum = sum + arr [o][i] ;
		}
		cout<<endl;
	}
	cout<<"\nThe sum is : "<< sum ;
	
}
