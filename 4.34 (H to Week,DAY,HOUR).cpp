#include<iostream>
using namespace std ;
int main()
{
	int hours , weeks , days , hour ;
	cout<<"Enter hours : " ;
	cin>> hours ;
	weeks = hours / 168 ;
	hours = hours % 168 ;
	days  = hours / 24  ;
	hours = hours % 24  ;
	cout<<"You have "<<weeks<<" weeks, "<<days<<" days and "<<hours<<" hours." ;
	return 0 ;
}
