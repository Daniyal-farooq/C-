#include<iostream>
#include<math.h>
#include<ctype.h>
using namespace std;
int main()
{
	char c ;
	cout<<"Enter a character : ";
	cin>> c ;
	if ( isalnum(c) != 0 )
	{
		cout<<c<<" is a alphanumeric character.\n" ;
	}
	else
	{
		cout<<c<<" is not a alphanumeric character.\n" ;
	}
	if ( isalpha(c) != 0 )
	{
		cout<<c<<" is an alphabetic character.\n" ;
	}
	else
	{
		cout<<c<<" is'nt an alphabetic character.\n" ;
	}
	if ( isdigit(c) != 0  )
	{
		cout<<c<<" is a digit character.\n";
	}
	else 
	{
		cout<<c<<" isnt a digit character.\n" ;
	}
	if ( isupper(c) != 0 )
	{
		cout<<c<<" is an upper case alphabet.\n" ;
	}
	else 
	{
		cout<<c<<" is'nt an upper case alphabet.\n" ;
	}
	if ( islower(c) != 0 )
	{
		cout<<c<<" is a lower case alphabet.\n" ;
	}
	else
	{
		cout<<c<<" isn't a lower case alphabet.\n" ;
	}
	if ( isprint(c) != 0 )
	{
		cout<<c<<" is a print character.\n" ;
	}
	else
	{
		cout<<c<<" is'nt a print character.\n";
	}
	if ( ispunct(c) != 0 )
	{
		cout<<c<<" is a punctuation character.\n" ;
	}
	else
	{
		cout<<c<<" isn't a punctuation character.\n";
	}
	if ( isxdigit(c) != 0 )
	{
		cout<<c<<" is 0 to 9 , A to F or a to f.\n" ;
	}
	else 
	{
		cout<<c<<" isn't' 0 to 9 , A to F or a to f.\n" ;
	}
	return 0 ;
}
