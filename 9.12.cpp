#include<iostream>
#include<conio.h>
using namespace std;
string grade( int marks ) 
{
	string g ;
	if ( marks >= 80 )
		g = 'A';
	if ( marks >= 60 && marks <= 79  )
		g = 'B';
	if ( marks >= 40 && marks <= 59 )
		g = 'C';
	if ( marks < 40 )
		g = 'F';
	return g ;				
}
int main()
{
	int marks ; 
	cout<<"Enter your marks : ";
	cin>>marks ;
	cout<<"\nThe grade according to your given marks is : " <<grade ( marks );
	return 0 ;
}
