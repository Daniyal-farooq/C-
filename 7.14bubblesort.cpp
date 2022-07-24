/*   https://www.youtube.com/watch?v=5p-s65CjhPU
*/
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int size ;
	cout<<"Enter the size of the array : " ;
	cin>>size ;
	int array[size]  ;
	int temp ;
	for ( int l = 0 ; l< size ; l++ )
	{
		cout<<"array["<<l<<"] = " ;
		cin>>array[l] ;
	}
	
	for ( int i = 0 ; i < size-1 ; i++ )
	{
		temp = 0;
		for ( int j = 0 ; j < (size-i)-1 ; j++ )
		{
			if ( array[j] > array [j+1] )
			{
				temp = array[j] ;
				array[j] = array[j+1] ;
				array[j+1] = temp ;
			}
		}
	}
	for ( int j = 0 ; j < size ; j++ )
	{
		cout<<"array["<<j<<"] = "<<array[j]<<"\n";	
	}
	
}
