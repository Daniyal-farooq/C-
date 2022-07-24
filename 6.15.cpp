#include<iostream>
using namespace std ;
int main()
{
	int num ;
	cout<<"Enter a number : " ;
	cin>>num ;
	cout<<"Your entered number is : "<<num ;
	if ( num != -1 )
	{
		while ( num != -1 )
		{
			cout<<"\nEnter a number : " ;
			cin>>num ;
			cout<<"Your entered number is : "<<num ;
		}
		cout<<"\nLoop ends here." ;
	}
	else if ( num == -1 )
	{
		cout<<"\nLoop ends here." ;
	}
}
