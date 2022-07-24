#include<iostream>
using namespace std;
int information ( string name , string Fathername , int age )
{
	cout<<"***************************************************\n\n\tDisplaying personal information,\n\n" ;
	cout<<"Your name is "<<name ;
	cout<<"\nYour Father name is "<<Fathername ;
	cout<<"\nYour age is "<<age ;
	return 0 ;
}
int main()
{
	string name,Fathername ;
	int age ;
	cout<<"Enter your name : ";
	cin>>name ;
	cout<<"\nEnter Father name : ";
	cin>> Fathername ;
	cout<<"\nEnter your age : " ;
	cin>>age ;
	information ( name , Fathername , age ) ;
	return 0;
}
