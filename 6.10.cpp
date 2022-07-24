#include<iostream>
using namespace std;
int main()
{
	int number,secondnumber,even,odd,sumeven = 0,sumodd = 0;
	cout<<"Enter a +ve number : ";
	cin>>number;
	secondnumber = number ;
	if ( number % 2 ==0 )
	{
		while ( number >= 1 )
		{
			sumeven = sumeven + number;
			number -= 2 ;
		}
		cout<<"\nSum of evens are "<<sumeven ;
		secondnumber -= 1;
		while ( secondnumber >= 1 )
		{
			sumodd = sumodd + secondnumber;
			secondnumber -= 2 ;
		}
		cout<<"\nSum of odds are "<<sumodd ;
		
	}
	if ( !(number % 2 ==0 ))
	{
		while ( number >= 1 )
		{
			sumodd = sumodd + number;
			number -= 2 ;
		}
		cout<<"\nSum of odds are "<<sumodd ;
		secondnumber -= 1;
		while ( secondnumber >= 1 )
		{
			sumeven = sumeven + secondnumber;
			secondnumber -= 2 ;
		}
		cout<<"\nSum of evens are "<<sumeven ;
		
	}
}
