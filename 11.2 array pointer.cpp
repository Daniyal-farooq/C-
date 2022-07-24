#include<iostream>
using namespace std;
int main()
{
	float array[5] ;
	float *ptr ;
	cout<<"Enter the float values in array : \n" ;
	for ( int o = 0 ; o<5 ; o ++ )
	{
		cout<<"array[ "<<o<<" ] = " ;
		cin>> array[o] ;
	}
	cout<<"The values in reverse order are given below as : \n\n" ;
	ptr = &array[4] ;     //remeber that fifth index is 4 so we use 4 :)
	for ( int o = 0 ; o <5 ; o++  )
	{
		cout<<*ptr<<"\t" ;
		*ptr-- ;
	}	
	return 0 ;
}
