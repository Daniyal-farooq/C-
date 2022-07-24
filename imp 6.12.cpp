#include<iostream>
using namespace std;
int main()
{
	float number,sum = 0.,avg = 0.,max,min;
	int count = 0 ;
	cout<<"Enter a + ve number : ";
	cin>>number;
	min = number ;
	max = number ;
	if ( number >= 0. )
	{
	  while ( number > 0. )
	 { 
		sum = sum + number ;
		
		if ( number > max )
			max = number ;
		if ( number < min )
			min = number ;
		count++ ;
		cout<<"\nEnter a +ve number : ";
		cin>>number;		
	 }
		if ( number < 0.  )
	 cout<<"\n-ve number !";
	 
	 }
	cout<<"\nAverage is : "<<sum / float(count);
	cout<<"\nMaximum is : "<<max;
	cout<<"\nMinimum is : "<<min; 
}
