#include<iostream>
using namespace std ;
int main()
{
	int length ;
	int temp ;
	cout<<"Enter the length of the array : ";
	cin>> length ;
	int array[length] ;
	
	for ( int l = 0 ; l < length ; l++ )
	{
		cout<<"array["<<l<<"] = " ;
		cin>>array[l] ;
	}
	
	cout<<"\n***PERFORMING SELECTION SORT***\n" ;
	
	for ( int i = 0 ; i < length-1 ; i++ )
	{
		for ( int j = i+1 ; j < length ; j++ )
		{
			if ( array[j] < array[i] )
			{
				temp = array[j];
				array[j] = array[i] ;
				array[i] = temp ;
				
			}
		}
	}
	for ( int l = 0 ; l < length ; l++ )
	{
		cout<<"array["<<l<<"] = "<<array[l]<<"\n";
	}
}
