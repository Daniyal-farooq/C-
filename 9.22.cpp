#include<iostream>
using namespace std;
int display ( int array1[5] ) ; 
int main()
{
	int array1[5] = { 0 } ;
	cout<<"Enter the values of the array : \n";
	for ( int i = 0 ; i < 5 ; i ++ )
	{
		cout<<"array1[ "<<i<<" ] = " ;
		cin>>array1[i];
	}
	display ( array1 ) ;
	return 0 ;
}
int display ( int array1[5] ) 
{
	cout<<"The array is given below : \n" ;
	for ( int o = 0 ; o < 5 ; o++ )
	{
		cout<<array1[o]<<endl ;
	}
	return 0 ;
}
