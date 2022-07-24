#include<iostream>
#include<stdio.h>
#include<ctype.h>
using namespace std;
int main()
{
	char sentence[50] ;
	cout<<"Enter a sentence : " ;
	cin>>sentence ;
	cout<<"Your sentence is : "<<sentence ;
	cout<<"\n\nYour sentence in upper case is : \n\n" ;
	int o = 0 ;
	while ( sentence[o] != '\0' )
	{
		sentence[o] = toupper( sentence[o] ) ;
		o++ ;
	}
	cout<<sentence ;
	return 0 ;
}
