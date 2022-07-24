#include<iostream>
using namespace std ;
int main()
{
	int number[10] ;
	int min = number[0] ;
	for ( int l = 0 ; l < 10 ; l ++ )
	{
		cout<<"Enter value["<<l+1<<"] = ";
		cin>> number[l];
		if ( min > number[l] )
		{
			min = number[l] ;
		}
	}
	cout<<"Minimum : " <<min;
}
