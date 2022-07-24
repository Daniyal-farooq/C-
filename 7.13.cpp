#include<iostream>
using namespace std;
int main()
{
	int numbers[5] = { 10 ,4 ,5, 7, 2} ;
	int min , j , replace , i;
	for ( int i = 0 ; i < 4 ; i++ )
	{
		min = i ;
		for ( int j = i+1 ; j < 5 ; j++ )
		{
			if ( numbers[j] < numbers[min] )
			{
				replace = numbers[j] ;
				numbers[j] = numbers[i] ;
				numbers[i] = replace ;
			}
			
		}
		
	}
	cout<<"\n" ;
	for ( int j = 0 ; j < 5 ;j++ )
	{
		cout<<"number["<<j+1<<" ] = "<<numbers[j]<<"\n" ;
	}
	
}
