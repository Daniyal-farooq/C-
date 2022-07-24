#include<iostream>
using namespace std;
int main()
{
	int first [ 5 ] , l , sum = 0;
	for ( l = 0 ; l <= 4 ; l++ )
	{
		cout<<"\nEnter value of integer :  ";
		cin>>first [ l ] ;
		sum = sum + first [ l ] ;
		
	}
	cout<<"\nThe sum is : "<<sum ;
	cout<<"\nThe average is : "<<sum/5 ;
}
