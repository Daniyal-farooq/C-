#include<iostream>
using namespace std ;
int main()
{
	
	
	float n ;
	float sum  =0 ;
	float max , min ;
	float counter =1 ;
	 cout<<"Enter a number : ";
	 cin>>n ;
	  max = min = n;
	
	while( n>=0 )
	{
		
		if ( max < n )
		{
			max = n ;
		}
		if ( min > n )
		{
			min = n ;
		}
		sum = sum + n ;
		counter ++ ;
		cout <<"ENter a positive number : ";
		cin>>n ;
	}
	cout<<"Max is : "<<max<<endl ;
	cout<<"Min is : "<<min<<endl ;
	cout<<"SUm is : "<<sum<<endl ;
	cout<<"AVg is : "<<sum/counter ;
}
