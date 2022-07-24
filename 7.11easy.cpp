#include<iostream>
using namespace std ;
int main()
{
	int numbers[5] ;
	int demand ;
	cout<<"Enter the values.\n" ;
	for ( int l = 0 ; l < 5 ; l++ )
	{
		cout<<"value["<<l+1<<"] = ";
		cin>>numbers[l] ;
	}
	cout<<"Enter the value to search : ";
	cin>>demand;
	for ( int l = 0 ; l < 5 ; l++ )
	{
		if ( numbers[l] == demand )
		{
			cout<<"The number is found.";
			break;
		}
	}
	
}
