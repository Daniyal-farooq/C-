#include<iostream>
using namespace std ;
int main()
{
	float a , b ;
	char choice ; 
	cout<<"Enter first number : " ;
	cin>> a ;
	cout<<"Enter second number : " ;
	cin>> b ;
	cout<<"Product is : "<< a * b ;
	cout<<"\nEnter 'y' to continue or 'n' to discontinue :  " ;
	cin>>choice ;
	if ( choice == 'y' )
	{
		while ( choice == 'y' )
		{
			cout<<"Enter first number : " ;
			cin>> a ;
			cout<<"Enter second number : " ;
			cin>> b ;
			cout<<"Product is : "<< a * b ;
			cout<<"\nEnter 'y' to continue or 'n' to discontinue :  " ;
			cin>>choice ;
		}
		cout<<"\nProgram ends here." ;
	}
	else if ( choice == 'n' )
	{
		cout<<"\nProgram ends here." ;
	}
}
