#include<iostream>
#include<iomanip>
using namespace std;
int display_sqr ( int n ) 
{
	cout<<setw(13)<<n<<setw(19)<<n*n<<endl ;
	return 0 ;
}
int main()
{
	int array1[5] = { 0 } ;
	cout<<"Enter array values 1 by 1 : \n";
	for ( int o = 0 ; o <5 ; o ++ )
	{
		cout<<"array1["<< o <<" ] = " ;
		cin>>array1[o] ;
	}
	cout<<setw(13)<<"ACTUAL VALUE"<<setw(19)<<"SQUARED VALUE\n" ;
	for ( int i = 0 ; i <5 ; i ++ )
	{
		display_sqr ( array1[i] ) ;
	}
	return 0 ; 
}
