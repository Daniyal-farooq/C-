#include<iostream>  // IF you use semicolon after if statement then else will produce an error .
#include<conio.h>
using namespace std ;
int main()
{
	char c ;
	cout<<"Enter a character : " ;
	cin>> c ;
	if ( c == 'a' || c == 'A' || c == 'e' || c == 'E'|| c == 'i' || c == 'I' || c == 'o' || c == 'O' ||c == 'u' ||c == 'U')  
	{
		cout<<"Your entered character is a Vowel." ;
	}
	else
	{
		cout<<"Your entered character is not a Vowel." ;
	}
	return 0 ;
}
