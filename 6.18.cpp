#include<iostream>
using namespace std;
int main()
{
	int num ;
	cout<<"Enter a number to get it's square value : " ;
	cin>> num ;
	if ( num != 0 )
	{
		while ( num != 0 )
		{
			cout<<"\nSquare of "<<num<<" is : "<<num*num ;
			cout<<"\nEnter a number to get it's square value : " ;
			cin>>num ;
		}
		cout<<"Goodbye.";
	}
	else if ( num == 0  )
	{
		cout<<"Goodbye.";
	}
	return 0 ;
}
