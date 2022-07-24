#include<iostream>
using namespace std;
int main()
{
	int length , to_find , found , low , high , mid ;
	cout<<"Enter the length of the array : " ;
	cin>>length ;
	int numbers[length] ;
	
	for ( int l = 0 ; l < length ; l++ )
	{
		cout<<"number["<<l+1<<"] = " ;
		cin>>numbers[l] ;
	}
	
	cout<<"Enter the number to find it's index : ";
	cin>>to_find ;
	low = 0 ;
	high = length-1 ;
	while ( low <= high )
	{
		mid = (low + high)/2 ;
		if ( to_find == numbers[mid] )
		{
			found = mid;
			break;
		}
		else if ( to_find < numbers[mid] )
		{
			high = mid-1 ; 
		}
		else if ( to_find > numbers[mid] )
		{
			low = mid+1 ;
		}
	}
	cout<<"\nThe asked value is at "<<found<<" index of the array.";
}
