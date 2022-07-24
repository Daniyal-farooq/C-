#include<iostream>
#include<conio.h>
using namespace std;
int get_values ( int *ptr , int length)
{
	cout<<"Enter the values of the array of your decided length. \n\n" ;
	for ( int o = 0 ; o < length ; o++ )
	{
		cout<<"array[ "<<o<<" ] = ";
		cin>>*ptr;
		*ptr ++;
	}
	return 0; ;
}
int display_values ( int* ptr , int length )
{
	cout<<"Values are given as : " ;
	for ( int o = 0 ; o < length ; o ++ )
	{
		cout<<*ptr++ ;
		cout<<"\t" ;
	}
	return 0 ;
}
int main()
{
	int length ; 
	cout<<"Enter the length of the array : " ;
	cin>> length ; 
	int* ptr ;
	ptr = new int[length] ;
	get_values ( ptr , length ) ;
	display_values ( ptr , length ) ;
	delete[] ptr ;
	return 0 ;
}
