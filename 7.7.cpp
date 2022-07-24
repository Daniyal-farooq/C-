#include<iostream>
using namespace std ;
int main()
{
	int number[10] ;
	int max = number[0] ;
	for ( int l = 0 ; l < 10 ; l ++ )
	{
		cout<<"Enter value["<<l+1<<"] = ";
		cin>> number[l];
		if ( max < number[l] )
		{
			max = number[l] ;
		}
	}
	cout<<"Maximum : " <<max;
}
