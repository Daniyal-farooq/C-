#include<iostream>
using namespace std ;
int main()
{
	float num , min = 0.0 , max = 0.0 , loop = 0 , sum = 0 ;
	cout<<"Enter a positive number : " ;
	cin >> num ;
	max = num ;
	min = num ;
	if ( num >= 0 )
	{
		while ( num >= 0 )
		{
			loop++ ;
			sum = sum + num ;
			if ( num > max )
			{
				max = num ;
			}
			if ( num < min )
			{
				min = num ;
			}
			cout<<"\nEnter a positive number : ";
			cin>>num ;
		}
		 
		
		cout<<"\nYou entered "<<loop<<" numbers.";
		cout<<"\nThe sum of all positve numbers is : "<<sum ;
		cout<<"\nThe max of all positive numbers entered is : "<<max;
		cout<<"\nThe min of all positive numbers entered is : "<<min;
		cout<<"\nThe avg of all positive numbers entered is : "<<sum / loop;
	}
	else if ( num < 0 )
	{
		cout<<"\nYou entered a negative number. " ;
	}
}
