#include<iostream>
using namespace std ;
int main()
{

	char c ;
	cout<<"Please enter a character (Upper or lower), digit or any special symbol : " ;
	cin>>c ;
	if ( c >= '0' && c <= '9' )
	{
		cout<<"You entered a digit number." ;
	}
	else if ( c >= 'a' && c <= 'z' )
	{
		cout<<"You entered a small letter." ;
	}
	else if ( c >= 'A' && c <= 'Z' )
	{
		cout<<"You entered a Capital letter." ;
	}
	else
	{
		cout<<"You entered a special symbol." ;
	}
	return 0 ;
}
